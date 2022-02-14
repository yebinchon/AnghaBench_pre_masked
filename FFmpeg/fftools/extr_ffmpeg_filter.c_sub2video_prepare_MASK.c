
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_19__ {int nb_streams; TYPE_2__** streams; } ;
struct TYPE_18__ {int width; int height; int format; } ;
struct TYPE_16__ {int w; int h; void* end_pts; void* last_pts; int frame; } ;
struct TYPE_17__ {size_t file_index; TYPE_4__ sub2video; TYPE_3__* dec_ctx; } ;
struct TYPE_15__ {int width; int height; } ;
struct TYPE_14__ {TYPE_1__* codecpar; } ;
struct TYPE_13__ {scalar_t__ codec_type; int width; int height; } ;
struct TYPE_12__ {TYPE_7__* ctx; } ;
typedef TYPE_5__ InputStream ;
typedef TYPE_6__ InputFilter ;
typedef TYPE_7__ AVFormatContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 void* VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_7__*,int ,char*,int,int) ;
 TYPE_10__** VAR_5 ;

__attribute__((used)) static int FUNC_4(InputStream *VAR_6, InputFilter *VAR_7)
{
    AVFormatContext *VAR_8 = VAR_5[VAR_6->file_index]->ctx;
    int VAR_9, VAR_10, VAR_11;




    VAR_10 = VAR_7->width;
    VAR_11 = VAR_7->height;
    if (!(VAR_10 && VAR_11)) {
        for (VAR_9 = 0; VAR_9 < VAR_8->nb_streams; VAR_9++) {
            if (VAR_8->streams[VAR_9]->codecpar->codec_type == VAR_0) {
                VAR_10 = FUNC_1(VAR_10, VAR_8->streams[VAR_9]->codecpar->width);
                VAR_11 = FUNC_1(VAR_11, VAR_8->streams[VAR_9]->codecpar->height);
            }
        }
        if (!(VAR_10 && VAR_11)) {
            VAR_10 = FUNC_1(VAR_10, 720);
            VAR_11 = FUNC_1(VAR_11, 576);
        }
        FUNC_3(VAR_8, VAR_1, "sub2video: using %dx%d canvas\n", VAR_10, VAR_11);
    }
    VAR_6->sub2video.w = VAR_7->width = VAR_10;
    VAR_6->sub2video.h = VAR_7->height = VAR_11;

    VAR_7->width = VAR_6->dec_ctx->width ? VAR_6->dec_ctx->width : VAR_6->sub2video.w;
    VAR_7->height = VAR_6->dec_ctx->height ? VAR_6->dec_ctx->height : VAR_6->sub2video.h;



    VAR_7->format = VAR_2;

    VAR_6->sub2video.frame = FUNC_2();
    if (!VAR_6->sub2video.frame)
        return FUNC_0(VAR_3);
    VAR_6->sub2video.last_pts = VAR_4;
    VAR_6->sub2video.end_pts = VAR_4;
    return 0;
}
