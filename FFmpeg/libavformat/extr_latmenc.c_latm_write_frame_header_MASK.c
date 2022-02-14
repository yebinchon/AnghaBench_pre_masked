
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int extradata_size; int * extradata; } ;
struct TYPE_8__ {TYPE_1__** streams; TYPE_2__* priv_data; } ;
struct TYPE_7__ {scalar_t__ object_type; int off; int mod; int counter; int channel_conf; } ;
struct TYPE_6__ {TYPE_4__* codecpar; } ;
typedef int PutBitContext ;
typedef TYPE_2__ LATMContext ;
typedef int GetBitContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(AVFormatContext *VAR_1, PutBitContext *VAR_2)
{
    LATMContext *VAR_3 = VAR_1->priv_data;
    AVCodecParameters *VAR_4 = VAR_1->streams[0]->codecpar;
    int VAR_5;


    FUNC_4(VAR_2, 1, !!VAR_3->counter);

    if (!VAR_3->counter) {

        FUNC_4(VAR_2, 1, 0);
        FUNC_4(VAR_2, 1, 1);
        FUNC_4(VAR_2, 6, 0);
        FUNC_4(VAR_2, 4, 0);
        FUNC_4(VAR_2, 3, 0);


        if (VAR_3->object_type == VAR_0) {
            VAR_5 = VAR_4->extradata_size-(VAR_3->off >> 3);
            FUNC_1(VAR_2, &VAR_4->extradata[VAR_3->off >> 3], VAR_5);
        } else {


            FUNC_1(VAR_2, VAR_4->extradata, VAR_3->off + 3);

            if (!VAR_3->channel_conf) {
                GetBitContext VAR_6;
                int VAR_7 = FUNC_3(&VAR_6, VAR_4->extradata, VAR_4->extradata_size);
                FUNC_0(VAR_7 >= 0);
                FUNC_5(&VAR_6, VAR_3->off + 3);
                FUNC_2(VAR_2, &VAR_6);
            }
        }

        FUNC_4(VAR_2, 3, 0);
        FUNC_4(VAR_2, 8, 0xff);

        FUNC_4(VAR_2, 1, 0);
        FUNC_4(VAR_2, 1, 0);
    }

    VAR_3->counter++;
    VAR_3->counter %= VAR_3->mod;
}
