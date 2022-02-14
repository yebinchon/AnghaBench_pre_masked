
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef enum cavs_sub_mb { ____Placeholder_cavs_sub_mb } cavs_sub_mb ;
typedef enum cavs_mb { ____Placeholder_cavs_mb } cavs_mb ;
struct TYPE_11__ {size_t mbidx; void** mv; int avctx; int * col_mv; int * col_type_base; int gb; } ;
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
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 size_t VAR_31 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 void* VAR_32 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,size_t,size_t,int ,int ,int) ;
 int* VAR_33 ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_1__*,void**,int *) ;
 int FUNC_9 (TYPE_1__*,void**,int ) ;
 size_t* VAR_34 ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (void**,int ) ;

__attribute__((used)) static int FUNC_12(AVSContext *VAR_35, enum cavs_mb VAR_36)
{
    int VAR_37;
    enum cavs_sub_mb VAR_38[4];
    int VAR_39;

    FUNC_4(VAR_35);


    VAR_35->mv[VAR_21] = VAR_32;
    FUNC_11(&VAR_35->mv[VAR_21], VAR_2);
    VAR_35->mv[VAR_15] = VAR_32;
    FUNC_11(&VAR_35->mv[VAR_15], VAR_2);
    switch (VAR_36) {
    case 132:
    case 134:
        if (!VAR_35->col_type_base[VAR_35->mbidx]) {

            FUNC_6(VAR_35, VAR_21, VAR_20, VAR_24, VAR_2, 1);
            FUNC_6(VAR_35, VAR_15, VAR_13, VAR_24, VAR_2, 0);
        } else

            for (VAR_37 = 0; VAR_37 < 4; VAR_37++)
                FUNC_8(VAR_35, &VAR_35->mv[VAR_34[VAR_37]],
                               &VAR_35->col_mv[VAR_35->mbidx * 4 + VAR_37]);
        break;
    case 133:
        FUNC_6(VAR_35, VAR_21, VAR_20, VAR_26, VAR_2, 1);
        break;
    case 128:
        FUNC_6(VAR_35, VAR_21, VAR_20, VAR_26, VAR_2, 1);
        FUNC_9(VAR_35, &VAR_35->mv[VAR_21], VAR_2);
        break;
    case 135:
        FUNC_6(VAR_35, VAR_15, VAR_13, VAR_26, VAR_2, 0);
        break;
    case 136:

        VAR_39 = 0;
        for (VAR_37 = 0; VAR_37 < 4; VAR_37++)
            VAR_38[VAR_37] = FUNC_7(&VAR_35->gb, 2);
        for (VAR_37 = 0; VAR_37 < 4; VAR_37++) {
            switch (VAR_38[VAR_37]) {
            case 131:
                if (!VAR_35->col_type_base[VAR_35->mbidx]) {

                    if(VAR_39==0) {


                        if(VAR_37>0){
                            VAR_35->mv[7 ] = VAR_35->mv[VAR_21 ];
                            VAR_35->mv[7 + VAR_14] = VAR_35->mv[VAR_21 + VAR_14];
                        }
                        FUNC_6(VAR_35, VAR_21, VAR_20,
                                   VAR_24, VAR_5, 1);
                        FUNC_6(VAR_35, VAR_21+VAR_14,
                                   VAR_20+VAR_14,
                                   VAR_24, VAR_5, 0);
                        if(VAR_37>0) {
                            VAR_39 = VAR_34[VAR_37];
                            VAR_35->mv[VAR_39 ] = VAR_35->mv[VAR_21 ];
                            VAR_35->mv[VAR_39 + VAR_14] = VAR_35->mv[VAR_21 + VAR_14];
                            VAR_35->mv[VAR_21 ] = VAR_35->mv[7 ];
                            VAR_35->mv[VAR_21 + VAR_14] = VAR_35->mv[7 + VAR_14];
                        } else
                            VAR_39 = VAR_21;
                    } else {
                        VAR_35->mv[VAR_34[VAR_37] ] = VAR_35->mv[VAR_39 ];
                        VAR_35->mv[VAR_34[VAR_37] + VAR_14] = VAR_35->mv[VAR_39 + VAR_14];
                    }
                } else
                    FUNC_8(VAR_35, &VAR_35->mv[VAR_34[VAR_37]],
                                   &VAR_35->col_mv[VAR_35->mbidx * 4 + VAR_37]);
                break;
            case 130:
                FUNC_6(VAR_35, VAR_34[VAR_37], VAR_34[VAR_37] - 3,
                           VAR_26, VAR_5, 1);
                break;
            case 129:
                FUNC_6(VAR_35, VAR_34[VAR_37], VAR_34[VAR_37] - 3,
                           VAR_26, VAR_5, 1);
                FUNC_9(VAR_35, &VAR_35->mv[VAR_34[VAR_37]], VAR_5);
                break;
            }
        }

        for (VAR_37 = 0; VAR_37 < 4; VAR_37++) {
            if (VAR_38[VAR_37] == VAR_8)
                FUNC_6(VAR_35, VAR_34[VAR_37] + VAR_14,
                           VAR_34[VAR_37] + VAR_14 - 3,
                           VAR_26, VAR_5, 0);
        }
        break;
    default:
        if (VAR_36 <= 128) {
            FUNC_1(VAR_35->avctx, VAR_1, "Invalid mb_type %d in B frame\n", VAR_36);
            return VAR_0;
        }
        FUNC_0(VAR_36 < 136);
        VAR_39 = VAR_33[VAR_36];
        if (VAR_36 & 1) {
            if (VAR_39 & VAR_9)
                FUNC_6(VAR_35, VAR_21, VAR_20, VAR_27, VAR_3, 1);
            if (VAR_39 & VAR_29)
                FUNC_9(VAR_35, &VAR_35->mv[VAR_21], VAR_3);
            if (VAR_39 & VAR_10)
                FUNC_6(VAR_35, VAR_23, VAR_18, VAR_25, VAR_3, 1);
            if (VAR_39 & VAR_30)
                FUNC_9(VAR_35, &VAR_35->mv[VAR_23], VAR_3);
            if (VAR_39 & VAR_6)
                FUNC_6(VAR_35, VAR_15, VAR_13, VAR_27, VAR_3, 0);
            if (VAR_39 & VAR_7)
                FUNC_6(VAR_35, VAR_17, VAR_11, VAR_25, VAR_3, 0);
        } else {
            if (VAR_39 & VAR_9)
                FUNC_6(VAR_35, VAR_21, VAR_19, VAR_25, VAR_4, 1);
            if (VAR_39 & VAR_29)
                FUNC_9(VAR_35, &VAR_35->mv[VAR_21], VAR_4);
            if (VAR_39 & VAR_10)
                FUNC_6(VAR_35, VAR_22, VAR_20, VAR_28, VAR_4, 1);
            if (VAR_39 & VAR_30)
                FUNC_9(VAR_35, &VAR_35->mv[VAR_22], VAR_4);
            if (VAR_39 & VAR_6)
                FUNC_6(VAR_35, VAR_15, VAR_12, VAR_25, VAR_4, 0);
            if (VAR_39 & VAR_7)
                FUNC_6(VAR_35, VAR_16, VAR_13, VAR_28, VAR_4, 0);
        }
    }
    FUNC_5(VAR_35, VAR_36);
    FUNC_10(VAR_35);
    if (VAR_36 != 132)
        FUNC_2(VAR_35);
    FUNC_3(VAR_35, VAR_36);

    return 0;
}
