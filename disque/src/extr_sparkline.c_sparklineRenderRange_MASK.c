
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sequence {double max; double min; scalar_t__ labels; struct sample* samples; } ;
struct sample {double value; char* label; } ;
typedef int sds ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 double FUNC_0 (double) ;
 int FUNC_1 (char*,char,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;

sds FUNC_6(sds VAR_6, struct sequence *VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11) {
    int VAR_12;
    double VAR_13 = VAR_7->max - VAR_7->min;
    int VAR_14 = VAR_4*VAR_8;
    int VAR_15 = 0;
    char *VAR_16 = FUNC_5(VAR_10);
    int VAR_17 = 1;
    int VAR_18 = VAR_11 & VAR_0;
    int VAR_19 = VAR_11 & VAR_1;

    if (VAR_19) {
        VAR_13 = FUNC_0(VAR_13+1);
    } else if (VAR_13 == 0) {
        VAR_13 = 1;
    }

    while(VAR_17) {
        VAR_17 = 0;
        FUNC_1(VAR_16,' ',VAR_10);
        for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
            struct sample *VAR_20 = &VAR_7->samples[VAR_12+VAR_9];
            double VAR_21 = VAR_20->value - VAR_7->min;
            int VAR_22;

            if (VAR_19) VAR_21 = FUNC_0(VAR_21+1);
            VAR_22 = (int) (VAR_21*VAR_14)/VAR_13;
            if (VAR_22 < 0) VAR_22 = 0;
            if (VAR_22 >= VAR_14) VAR_22 = VAR_14-1;

            if (VAR_15 < VAR_8) {

                int VAR_23 = VAR_22-((VAR_8-VAR_15-1)*VAR_4);
                VAR_17 = 1;
                if (VAR_23 >= 0 && VAR_23 < VAR_4) {
                    VAR_16[VAR_12] = VAR_18 ? VAR_3[VAR_23] :
                                          VAR_2[VAR_23];
                } else if(VAR_18 && VAR_23 >= VAR_4) {
                    VAR_16[VAR_12] = '|';
                }
            } else {

                if (VAR_7->labels && VAR_15-VAR_8 < VAR_5) {
                    VAR_17 = 1;
                    break;
                }

                if (VAR_20->label) {
                    int VAR_24 = FUNC_3(VAR_20->label);
                    int VAR_25 = VAR_15 - VAR_8 - VAR_5;

                    if (VAR_24 > VAR_25) {
                        VAR_17 = 1;
                        VAR_16[VAR_12] = VAR_20->label[VAR_25];
                    }
                }
            }
        }
        if (VAR_17) {
            VAR_15++;
            VAR_6 = FUNC_2(VAR_6,VAR_16,VAR_10);
            VAR_6 = FUNC_2(VAR_6,"\n",1);
        }
    }
    FUNC_4(VAR_16);
    return VAR_6;
}
