
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_11__ {int table; } ;
struct TYPE_10__ {int table; } ;
struct TYPE_9__ {int table; } ;
struct TYPE_8__ {scalar_t__ first_slice_line; } ;
struct TYPE_7__ {int intra_types_stride; TYPE_2__ s; } ;
typedef TYPE_1__ RV34DecContext ;
typedef TYPE_2__ MpegEncContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* VAR_4 ;
 TYPE_5__* VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int* VAR_7 ;

__attribute__((used)) static int FUNC_2(RV34DecContext *VAR_8, GetBitContext *VAR_9, int8_t *VAR_10)
{
    MpegEncContext *VAR_11 = &VAR_8->s;
    int VAR_12, VAR_13, VAR_14, VAR_15;
    int VAR_16, VAR_17, VAR_18;
    int VAR_19;
    int8_t *VAR_20;

    for(VAR_12 = 0; VAR_12 < 4; VAR_12++, VAR_10 += VAR_8->intra_types_stride){
        if(!VAR_12 && VAR_11->first_slice_line){
            VAR_19 = FUNC_1(VAR_9, VAR_6.table, VAR_2, 1);
            VAR_10[0] = (VAR_19 >> 2) & 2;
            VAR_10[1] = (VAR_19 >> 1) & 2;
            VAR_10[2] = VAR_19 & 2;
            VAR_10[3] = (VAR_19 << 1) & 2;
            continue;
        }
        VAR_20 = VAR_10;
        for(VAR_13 = 0; VAR_13 < 4; VAR_13++){






            VAR_16 = VAR_20[-VAR_8->intra_types_stride + 1];
            VAR_17 = VAR_20[-VAR_8->intra_types_stride];
            VAR_18 = VAR_20[-1];
            VAR_19 = VAR_16 + VAR_17 * (1 << 4) + VAR_18 * (1 << 8);
            for(VAR_14 = 0; VAR_14 < VAR_3; VAR_14++)
                if(VAR_19 == VAR_7[VAR_14])
                    break;
            if(VAR_13 < 3 && VAR_14 < VAR_3){
                VAR_15 = FUNC_1(VAR_9, VAR_5[VAR_14].table, VAR_1, 2);
                *VAR_20++ = VAR_15/9;
                *VAR_20++ = VAR_15%9;
                VAR_13++;
            }else{
                if(VAR_17 != -1 && VAR_18 != -1)
                    VAR_15 = FUNC_1(VAR_9, VAR_4[VAR_17 + VAR_18*10].table, VAR_0, 1);
                else{
                    VAR_15 = 0;
                    switch(VAR_18){
                    case -1:
                        if(VAR_17 < 2)
                            VAR_15 = FUNC_0(VAR_9) ^ 1;
                        break;
                    case 0:
                    case 2:
                        VAR_15 = (FUNC_0(VAR_9) ^ 1) << 1;
                        break;
                    }
                }
                *VAR_20++ = VAR_15;
            }
        }
    }
    return 0;
}
