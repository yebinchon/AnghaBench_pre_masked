
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int def_prob ;
typedef int VP56RangeCoder ;
struct TYPE_6__ {int** coeff_dccv; int**** coeff_ract; void****** coeff_acct; void**** coeff_dcct; } ;
typedef TYPE_2__ VP56Model ;
struct TYPE_7__ {TYPE_1__** frames; TYPE_2__* modelp; int c; } ;
typedef TYPE_3__ VP56Context ;
struct TYPE_5__ {scalar_t__ key_frame; } ;


 size_t VAR_0 ;
 void* FUNC_0 (int,int,int) ;
 int FUNC_1 (void**,int,int) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 void* FUNC_3 (int *,int) ;
 int*** VAR_1 ;
 int ** VAR_2 ;
 int***** VAR_3 ;
 int **** VAR_4 ;

__attribute__((used)) static int FUNC_4(VP56Context *VAR_5)
{
    VP56RangeCoder *VAR_6 = &VAR_5->c;
    VP56Model *VAR_7 = VAR_5->modelp;
    uint8_t VAR_8[11];
    int VAR_9, VAR_10, VAR_11;
    int VAR_12;
    int VAR_13;

    FUNC_1(VAR_8, 0x80, sizeof(VAR_8));

    for (VAR_13=0; VAR_13<2; VAR_13++)
        for (VAR_9=0; VAR_9<11; VAR_9++)
            if (FUNC_2(VAR_6, VAR_2[VAR_13][VAR_9])) {
                VAR_8[VAR_9] = FUNC_3(VAR_6, 7);
                VAR_7->coeff_dccv[VAR_13][VAR_9] = VAR_8[VAR_9];
            } else if (VAR_5->frames[VAR_0]->key_frame) {
                VAR_7->coeff_dccv[VAR_13][VAR_9] = VAR_8[VAR_9];
            }

    for (VAR_12=0; VAR_12<3; VAR_12++)
        for (VAR_13=0; VAR_13<2; VAR_13++)
            for (VAR_10=0; VAR_10<6; VAR_10++)
                for (VAR_9=0; VAR_9<11; VAR_9++)
                    if (FUNC_2(VAR_6, VAR_4[VAR_12][VAR_13][VAR_10][VAR_9])) {
                        VAR_8[VAR_9] = FUNC_3(VAR_6, 7);
                        VAR_7->coeff_ract[VAR_13][VAR_12][VAR_10][VAR_9] = VAR_8[VAR_9];
                    } else if (VAR_5->frames[VAR_0]->key_frame) {
                        VAR_7->coeff_ract[VAR_13][VAR_12][VAR_10][VAR_9] = VAR_8[VAR_9];
                    }


    for (VAR_13=0; VAR_13<2; VAR_13++)
        for (VAR_11=0; VAR_11<36; VAR_11++)
            for (VAR_9=0; VAR_9<5; VAR_9++)
                VAR_7->coeff_dcct[VAR_13][VAR_11][VAR_9] = FUNC_0(((VAR_7->coeff_dccv[VAR_13][VAR_9] * VAR_1[VAR_9][VAR_11][0] + 128) >> 8) + VAR_1[VAR_9][VAR_11][1], 1, 254);


    for (VAR_12=0; VAR_12<3; VAR_12++)
        for (VAR_13=0; VAR_13<2; VAR_13++)
            for (VAR_10=0; VAR_10<3; VAR_10++)
                for (VAR_11=0; VAR_11<6; VAR_11++)
                    for (VAR_9=0; VAR_9<5; VAR_9++)
                        VAR_7->coeff_acct[VAR_13][VAR_12][VAR_10][VAR_11][VAR_9] = FUNC_0(((VAR_7->coeff_ract[VAR_13][VAR_12][VAR_10][VAR_9] * VAR_3[VAR_12][VAR_10][VAR_9][VAR_11][0] + 128) >> 8) + VAR_3[VAR_12][VAR_10][VAR_9][VAR_11][1], 1, 254);
    return 0;
}
