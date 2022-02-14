
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int network ;


 float* FUNC_0 (int,int) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (float*) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_0 ;
 int * FUNC_4 (char*,char*,int ) ;
 int FUNC_5 (float*,int,int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 float FUNC_6 (int *,float*,float*,int) ;
 int FUNC_7 (int ,float*,int,int*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (float*,int,int,int*) ;

void FUNC_15(char *VAR_5, char *VAR_6, int VAR_7)
{
    int VAR_8;
    network *VAR_9 = FUNC_4(VAR_5, VAR_6, 0);
    FUNC_9(VAR_9, 1);
    FUNC_10(FUNC_13(0));
    float *VAR_10 = FUNC_0(19*19*3, sizeof(float));
    FUNC_2(VAR_10);
    float *VAR_11 = FUNC_0(19*19+1, sizeof(float));
    int VAR_12 = 1;
    while(1){
        float VAR_13 = FUNC_6(VAR_9, VAR_10, VAR_11, VAR_7);
        FUNC_8("%.2f%% Win Chance\n", (VAR_13+1)/2*100);

        int VAR_14[VAR_1];
        int VAR_15, VAR_16;
        FUNC_14(VAR_11, 19*19+1, VAR_1, VAR_14);
        FUNC_7(VAR_3, VAR_10, VAR_12, VAR_14);
        for(VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8){
            int VAR_17 = VAR_14[VAR_8];
            VAR_15 = VAR_17 / 19;
            VAR_16 = VAR_17 % 19;
            if(VAR_15 == 19){
                FUNC_8("%d: Pass, %.2f%%\n", VAR_8+1, VAR_11[VAR_17]*100);
            } else {
                FUNC_8("%d: %c %d, %.2f%%\n", VAR_8+1, VAR_16 + 'A' + 1*(VAR_16 > 7 && VAR_2), (VAR_0)?19 - VAR_15 : VAR_15+1, VAR_11[VAR_17]*100);
            }
        }


        if(VAR_12 == 1) FUNC_8("X Enter move: ");
        else FUNC_8("O Enter move: ");

        char VAR_18;
        char *VAR_19 = FUNC_1(VAR_4);
        int VAR_20 = 1;
        int VAR_21 = FUNC_11(VAR_19, "%d", &VAR_20);
        int VAR_22 = FUNC_11(VAR_19, "%c", &VAR_18);
        if (FUNC_12(VAR_19) == 0 || VAR_21) {
            --VAR_20;
            if (VAR_20 < VAR_1){
                int VAR_23 = VAR_14[VAR_20];
                VAR_15 = VAR_23 / 19;
                VAR_16 = VAR_23 % 19;
                if(VAR_15 < 19){
                    FUNC_5(VAR_10, 1, VAR_15, VAR_16);
                }
            }
        } else if (VAR_22){
            if (VAR_18 <= 'T' && VAR_18 >= 'A'){
                int VAR_24 = FUNC_11(VAR_19, "%c %d", &VAR_18, &VAR_15);
                VAR_15 = (VAR_0)?19 - VAR_15 : VAR_15-1;
                VAR_16 = VAR_18 - 'A';
                if (VAR_16 > 7 && VAR_2) VAR_16 -= 1;
                if (VAR_24 == 2) FUNC_5(VAR_10, 1, VAR_15, VAR_16);
            } else if (VAR_18 == 'p') {

            } else if(VAR_18=='b' || VAR_18 == 'w'){
                char VAR_25;
                int VAR_26 = FUNC_11(VAR_19, "%c %c %d", &VAR_25, &VAR_18, &VAR_15);
                VAR_15 = (VAR_0)?19 - VAR_15 : VAR_15-1;
                VAR_16 = VAR_18 - 'A';
                if (VAR_16 > 7 && VAR_2) VAR_16 -= 1;
                if (VAR_26 == 3) {
                    int VAR_27 = (VAR_25 == 'b') ? 1 : -1;
                    if (VAR_27 == VAR_12) {
                        VAR_10[VAR_15*19 + VAR_16] = 1;
                    } else {
                        VAR_10[19*19 + VAR_15*19 + VAR_16] = 1;
                    }
                }
            } else if(VAR_18 == 'c'){
                char VAR_28;
                int VAR_29 = FUNC_11(VAR_19, "%c %c %d", &VAR_28, &VAR_18, &VAR_15);
                VAR_15 = (VAR_0)?19 - VAR_15 : VAR_15-1;
                VAR_16 = VAR_18 - 'A';
                if (VAR_16 > 7 && VAR_2) VAR_16 -= 1;
                if (VAR_29 == 3) {
                    VAR_10[VAR_15*19 + VAR_16] = 0;
                    VAR_10[19*19 + VAR_15*19 + VAR_16] = 0;
                }
            }
        }
        FUNC_3(VAR_19);
        FUNC_2(VAR_10);
        VAR_12 = -VAR_12;
    }
}
