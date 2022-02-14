
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sdp ;
struct TYPE_12__ {TYPE_2__* ctx; int header_written; } ;
struct TYPE_11__ {TYPE_1__* oformat; } ;
struct TYPE_10__ {int name; } ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int AVIO_FLAG_WRITE ;
 int AV_LOG_ERROR ;
 int av_freep (TYPE_2__***) ;
 int av_log (int *,int ,char*,TYPE_2__**) ;
 TYPE_2__** av_malloc_array (int,int) ;
 int av_sdp_create (TYPE_2__**,int,char*,int) ;
 int avio_closep (int **) ;
 scalar_t__ avio_open2 (int **,TYPE_2__**,int ,int *,int *) ;
 int avio_printf (int *,char*,char*) ;
 int exit_program (int) ;
 int fflush (int ) ;
 int int_cb ;
 int nb_output_files ;
 TYPE_4__** output_files ;
 int printf (char*,char*) ;
 TYPE_2__** sdp_filename ;
 int stdout ;
 int strcmp (int ,char*) ;

__attribute__((used)) static void print_sdp(void)
{
    char sdp[16384];
    int i;
    int j;
    AVIOContext *sdp_pb;
    AVFormatContext **avc;

    for (i = 0; i < nb_output_files; i++) {
        if (!output_files[i]->header_written)
            return;
    }

    avc = av_malloc_array(nb_output_files, sizeof(*avc));
    if (!avc)
        exit_program(1);
    for (i = 0, j = 0; i < nb_output_files; i++) {
        if (!strcmp(output_files[i]->ctx->oformat->name, "rtp")) {
            avc[j] = output_files[i]->ctx;
            j++;
        }
    }

    if (!j)
        goto fail;

    av_sdp_create(avc, j, sdp, sizeof(sdp));

    if (!sdp_filename) {
        printf("SDP:\n%s\n", sdp);
        fflush(stdout);
    } else {
        if (avio_open2(&sdp_pb, sdp_filename, AVIO_FLAG_WRITE, &int_cb, ((void*)0)) < 0) {
            av_log(((void*)0), AV_LOG_ERROR, "Failed to open sdp file '%s'\n", sdp_filename);
        } else {
            avio_printf(sdp_pb, "SDP:\n%s", sdp);
            avio_closep(&sdp_pb);
            av_freep(&sdp_filename);
        }
    }

fail:
    av_freep(&avc);
}
