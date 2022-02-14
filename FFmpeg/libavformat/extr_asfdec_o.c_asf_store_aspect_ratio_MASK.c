
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef void* uint64_t ;
struct TYPE_9__ {TYPE_2__* asf_sd; } ;
struct TYPE_8__ {int * pb; TYPE_4__* priv_data; } ;
struct TYPE_6__ {void* den; void* num; } ;
struct TYPE_7__ {TYPE_1__ aspect_ratio; } ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ ASFContext ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int,void**) ;
 int FUNC_1 (size_t*,char*) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, uint8_t VAR_2, uint8_t *VAR_3, int VAR_4)
{
    ASFContext *VAR_5 = VAR_1->priv_data;
    AVIOContext *VAR_6 = VAR_1->pb;
    uint64_t VAR_7 = 0;
    int VAR_8;

    VAR_8 = FUNC_0(VAR_6, VAR_4, &VAR_7);
    if (VAR_8 < 0)
        return VAR_8;

    if (VAR_2 < VAR_0) {
        if (!FUNC_1(VAR_3, "AspectRatioX"))
            VAR_5->asf_sd[VAR_2].aspect_ratio.num = VAR_7;
        else
            VAR_5->asf_sd[VAR_2].aspect_ratio.den = VAR_7;
    }
    return 0;
}
