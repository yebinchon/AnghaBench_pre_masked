
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (float*,int) ;

void FUNC_2(FILE *VAR_3, float *VAR_4, int VAR_5, int *VAR_6)
{
    int VAR_7,VAR_8,VAR_9;
    FUNC_0(VAR_3, "   ");
    for(VAR_7 = 0; VAR_7 < 19; ++VAR_7){
        FUNC_0(VAR_3, "%c ", 'A' + VAR_7 + 1*(VAR_7 > 7 && VAR_2));
    }
    FUNC_0(VAR_3, "\n");
    for(VAR_8 = 0; VAR_8 < 19; ++VAR_8){
        FUNC_0(VAR_3, "%2d", (VAR_0) ? 19-VAR_8 : VAR_8+1);
        for(VAR_7 = 0; VAR_7 < 19; ++VAR_7){
            int VAR_10 = VAR_8*19 + VAR_7;
            if(VAR_6){
                int VAR_11 = 0;
                for(VAR_9 = 0; VAR_9 < VAR_1; ++VAR_9){
                    if(VAR_10 == VAR_6[VAR_9]){
                        VAR_11 = 1;







                        FUNC_0(VAR_3, " %d", VAR_9+1);
                    }
                }
                if(VAR_11) continue;
            }


            if (FUNC_1(VAR_4, VAR_10) == VAR_5) FUNC_0(VAR_3, " X");
            else if (FUNC_1(VAR_4, VAR_10) ==-VAR_5) FUNC_0(VAR_3, " O");
            else FUNC_0(VAR_3, " .");
        }
        FUNC_0(VAR_3, "\n");
    }
}
