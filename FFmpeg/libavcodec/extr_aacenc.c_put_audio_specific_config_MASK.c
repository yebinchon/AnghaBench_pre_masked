
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int channels; int profile; int samplerate_index; scalar_t__ needs_pce; } ;
struct TYPE_5__ {int extradata_size; int extradata; TYPE_2__* priv_data; } ;
typedef int PutBitContext ;
typedef TYPE_1__ AVCodecContext ;
typedef TYPE_2__ AACEncContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int const) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_2)
{
    PutBitContext VAR_3;
    AACEncContext *VAR_4 = VAR_2->priv_data;
    int VAR_5 = (!VAR_4->needs_pce)*(VAR_4->channels - (VAR_4->channels == 8 ? 1 : 0));
    const int VAR_6 = 32;

    VAR_2->extradata = FUNC_1(VAR_6);
    if (!VAR_2->extradata)
        return FUNC_0(VAR_1);

    FUNC_3(&VAR_3, VAR_2->extradata, VAR_6);
    FUNC_4(&VAR_3, 5, VAR_4->profile+1);
    FUNC_4(&VAR_3, 4, VAR_4->samplerate_index);
    FUNC_4(&VAR_3, 4, VAR_5);

    FUNC_4(&VAR_3, 1, 0);
    FUNC_4(&VAR_3, 1, 0);
    FUNC_4(&VAR_3, 1, 0);
    if (VAR_4->needs_pce)
        FUNC_6(&VAR_3, VAR_2);


    FUNC_4(&VAR_3, 11, 0x2b7);
    FUNC_4(&VAR_3, 5, VAR_0);
    FUNC_4(&VAR_3, 1, 0);
    FUNC_2(&VAR_3);
    VAR_2->extradata_size = FUNC_5(&VAR_3) >> 3;

    return 0;
}
