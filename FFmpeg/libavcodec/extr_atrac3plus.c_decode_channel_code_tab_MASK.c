
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VLC ;
struct TYPE_5__ {int table_type; } ;
struct TYPE_4__ {int use_full_table; TYPE_2__* channels; } ;
typedef int GetBitContext ;
typedef TYPE_1__ Atrac3pChanUnitCtx ;
typedef TYPE_2__ Atrac3pChanParams ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * VAR_4 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(GetBitContext *VAR_5, Atrac3pChanUnitCtx *VAR_6,
                                   int VAR_7, AVCodecContext *VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12;
    int VAR_13 = VAR_6->use_full_table ? 7 : 3;
    VLC *VAR_14, *VAR_15;
    Atrac3pChanParams *VAR_16 = &VAR_6->channels[VAR_7];
    Atrac3pChanParams *VAR_17 = &VAR_6->channels[0];

    VAR_16->table_type = FUNC_2(VAR_5);

    switch (FUNC_1(VAR_5, 2)) {
    case 0:
        VAR_11 = VAR_6->use_full_table + 2;
        FUNC_0(VAR_0);
        break;
    case 1:
        VAR_14 = VAR_6->use_full_table ? &VAR_4[1]
                                      : VAR_4;
        FUNC_0(VAR_1);
        break;
    case 2:
        if (VAR_6->use_full_table) {
            VAR_14 = &VAR_4[1];
            VAR_15 = &VAR_4[2];
        } else {
            VAR_14 = VAR_4;
            VAR_15 = VAR_4;
        }
        VAR_12 = 0;
        FUNC_0(VAR_2);
        break;
    case 3:
        if (VAR_7) {
            VAR_14 = VAR_6->use_full_table ? &VAR_4[3]
                                          : VAR_4;
            FUNC_0(VAR_3);
        }
        break;
    }

    return 0;
}
