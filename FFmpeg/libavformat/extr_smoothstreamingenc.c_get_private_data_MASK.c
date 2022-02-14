
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int* extradata; int extradata_size; scalar_t__ codec_id; } ;
struct TYPE_8__ {int * private_str; TYPE_2__* ctx; } ;
struct TYPE_7__ {TYPE_1__** streams; } ;
struct TYPE_6__ {TYPE_4__* codecpar; } ;
typedef TYPE_3__ OutputStream ;
typedef TYPE_4__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int*,int**,int*) ;
 int FUNC_3 (int *,int,char*,int) ;

__attribute__((used)) static void FUNC_4(OutputStream *VAR_1)
{
    AVCodecParameters *VAR_2 = VAR_1->ctx->streams[0]->codecpar;
    uint8_t *VAR_3 = VAR_2->extradata;
    int VAR_4 = VAR_2->extradata_size;
    int VAR_5;
    if (VAR_2->codec_id == VAR_0) {
        FUNC_2(VAR_3, &VAR_3, &VAR_4);
        if (!VAR_3)
            VAR_3 = VAR_2->extradata;
    }
    if (!VAR_3)
        return;
    VAR_1->private_str = FUNC_1(2*VAR_4 + 1);
    if (!VAR_1->private_str)
        goto fail;
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
        FUNC_3(&VAR_1->private_str[2*VAR_5], 3, "%02x", VAR_3[VAR_5]);
fail:
    if (VAR_3 != VAR_2->extradata)
        FUNC_0(VAR_3);
}
