
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef enum cavs_mb { ____Placeholder_cavs_mb } cavs_mb ;
struct TYPE_10__ {int* col_type_base; size_t mbidx; int ref_flag; int gb; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AVSContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;





 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(AVSContext *VAR_16, enum cavs_mb VAR_17)
{
    GetBitContext *VAR_18 = &VAR_16->gb;
    int VAR_19[4];

    FUNC_2(VAR_16);
    switch (VAR_17) {
    case 128:
        FUNC_4(VAR_16, VAR_7, VAR_6, VAR_13, VAR_0, 0);
        break;
    case 132:
        VAR_19[0] = VAR_16->ref_flag ? 0 : FUNC_5(VAR_18);
        FUNC_4(VAR_16, VAR_7, VAR_6, VAR_12, VAR_0, VAR_19[0]);
        break;
    case 131:
        VAR_19[0] = VAR_16->ref_flag ? 0 : FUNC_5(VAR_18);
        VAR_19[2] = VAR_16->ref_flag ? 0 : FUNC_5(VAR_18);
        FUNC_4(VAR_16, VAR_7, VAR_6, VAR_14, VAR_1, VAR_19[0]);
        FUNC_4(VAR_16, VAR_9, VAR_4, VAR_11, VAR_1, VAR_19[2]);
        break;
    case 130:
        VAR_19[0] = VAR_16->ref_flag ? 0 : FUNC_5(VAR_18);
        VAR_19[1] = VAR_16->ref_flag ? 0 : FUNC_5(VAR_18);
        FUNC_4(VAR_16, VAR_7, VAR_5, VAR_11, VAR_2, VAR_19[0]);
        FUNC_4(VAR_16, VAR_8, VAR_6, VAR_15, VAR_2, VAR_19[1]);
        break;
    case 129:
        VAR_19[0] = VAR_16->ref_flag ? 0 : FUNC_5(VAR_18);
        VAR_19[1] = VAR_16->ref_flag ? 0 : FUNC_5(VAR_18);
        VAR_19[2] = VAR_16->ref_flag ? 0 : FUNC_5(VAR_18);
        VAR_19[3] = VAR_16->ref_flag ? 0 : FUNC_5(VAR_18);
        FUNC_4(VAR_16, VAR_7, VAR_5, VAR_12, VAR_3, VAR_19[0]);
        FUNC_4(VAR_16, VAR_8, VAR_6, VAR_12, VAR_3, VAR_19[1]);
        FUNC_4(VAR_16, VAR_9, VAR_8, VAR_12, VAR_3, VAR_19[2]);
        FUNC_4(VAR_16, VAR_10, VAR_7, VAR_12, VAR_3, VAR_19[3]);
    }
    FUNC_3(VAR_16, VAR_17);
    FUNC_6(VAR_16);
    FUNC_7(VAR_16);
    if (VAR_17 != 128)
        FUNC_0(VAR_16);
    FUNC_1(VAR_16, VAR_17);
    VAR_16->col_type_base[VAR_16->mbidx] = VAR_17;
}
