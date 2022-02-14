
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int freeze_flag; int current_dic_index_max; int next_code; int context; scalar_t__ bump_code; int dic_code_bit; int * dict; } ;
typedef int MLZDict ;
typedef TYPE_1__ MLZ ;
typedef int GetBitContext ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int,int*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int,int,int) ;

int FUNC_5(MLZ* VAR_2, GetBitContext* VAR_3, int VAR_4, unsigned char *VAR_5) {
    MLZDict *VAR_6 = VAR_2->dict;
    unsigned long VAR_7;
    int VAR_8, VAR_9, VAR_10;

    VAR_8 = 0;
    VAR_10 = -1;
    VAR_9 = -1;
    VAR_7 = 0;

    while (VAR_7 < VAR_4) {
        VAR_8 = FUNC_3(VAR_3, VAR_2->dic_code_bit);
        switch (VAR_8) {
            case 130:
            case 128:
                FUNC_2(VAR_2);
                VAR_10 = -1;
                VAR_9 = -1;
                break;
            case 129:
                VAR_2->freeze_flag = 1;
                break;
            default:
                if (VAR_8 > VAR_2->current_dic_index_max) {
                    FUNC_0(VAR_2->context, VAR_0, "String code %d exceeds maximum value of %d.\n", VAR_8, VAR_2->current_dic_index_max);
                    return VAR_7;
                }
                if (VAR_8 == (int) VAR_2->bump_code) {
                    ++VAR_2->dic_code_bit;
                    VAR_2->current_dic_index_max *= 2;
                    VAR_2->bump_code = VAR_2->current_dic_index_max - 1;
                } else {
                    if (VAR_8 >= VAR_2->next_code) {
                        int VAR_11 = FUNC_1(VAR_2, &VAR_5[VAR_7], VAR_9, &VAR_10, VAR_4 - VAR_7);
                        if (VAR_11 < 0 || VAR_11 > VAR_4 - VAR_7) {
                            FUNC_0(VAR_2->context, VAR_0, "output chars overflow\n");
                            return VAR_7;
                        }
                        VAR_7 += VAR_11;
                        VAR_11 = FUNC_1(VAR_2, &VAR_5[VAR_7], VAR_10, &VAR_10, VAR_4 - VAR_7);
                        if (VAR_11 < 0 || VAR_11 > VAR_4 - VAR_7) {
                            FUNC_0(VAR_2->context, VAR_0, "output chars overflow\n");
                            return VAR_7;
                        }
                        VAR_7 += VAR_11;
                        FUNC_4(VAR_6, VAR_2->next_code, VAR_9, VAR_10);
                        if (VAR_2->next_code >= VAR_1 - 1) {
                            FUNC_0(VAR_2->context, VAR_0, "Too many MLZ codes\n");
                            return VAR_7;
                        }
                        VAR_2->next_code++;
                    } else {
                        int VAR_12 = FUNC_1(VAR_2, &VAR_5[VAR_7], VAR_8, &VAR_10, VAR_4 - VAR_7);
                        if (VAR_12 < 0 || VAR_12 > VAR_4 - VAR_7) {
                            FUNC_0(VAR_2->context, VAR_0, "output chars overflow\n");
                            return VAR_7;
                        }
                        VAR_7 += VAR_12;
                        if (VAR_7 <= VAR_4 && !VAR_2->freeze_flag) {
                            if (VAR_9 != -1) {
                                FUNC_4(VAR_6, VAR_2->next_code, VAR_9, VAR_10);
                                if (VAR_2->next_code >= VAR_1 - 1) {
                                    FUNC_0(VAR_2->context, VAR_0, "Too many MLZ codes\n");
                                    return VAR_7;
                                }
                                VAR_2->next_code++;
                            }
                        } else {
                            break;
                        }
                    }
                    VAR_9 = VAR_8;
                }
                break;
        }
    }
    return VAR_7;
}
