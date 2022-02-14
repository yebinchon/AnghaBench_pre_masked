
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bytes; int packet; } ;
typedef TYPE_1__ ogg_packet ;
struct TYPE_7__ {int extradata_size; scalar_t__ extradata; } ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (TYPE_2__*,int ,char*,char const*) ;
 int FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_4(unsigned int* VAR_2,
                              AVCodecContext* VAR_3,
                              const ogg_packet* VAR_4)
{
    const char* VAR_5 = ((void*)0);
    int VAR_6 = VAR_3->extradata_size + 2 + VAR_4->bytes;
    int VAR_7 = VAR_0;

    if (VAR_4->bytes < 0) {
        VAR_5 = "ogg_packet has negative size";
    } else if (VAR_4->bytes > 0xffff) {
        VAR_5 = "ogg_packet is larger than 65535 bytes";
    } else if (VAR_6 < VAR_3->extradata_size) {
        VAR_5 = "extradata_size would overflow";
    } else {
        if ((VAR_7 = FUNC_2(&VAR_3->extradata, VAR_6)) < 0) {
            VAR_3->extradata_size = 0;
            VAR_5 = "av_realloc failed";
        }
    }
    if (VAR_5) {
        FUNC_1(VAR_3, VAR_1, "concatenate_packet failed: %s\n", VAR_5);
        return VAR_7;
    }

    VAR_3->extradata_size = VAR_6;
    FUNC_0(VAR_3->extradata + (*VAR_2), VAR_4->bytes);
    *VAR_2 += 2;
    FUNC_3(VAR_3->extradata + (*VAR_2), VAR_4->packet, VAR_4->bytes);
    (*VAR_2) += VAR_4->bytes;
    return 0;
}
