
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (float*,int) ;

int FUNC_2(float *VAR_0, FILE *VAR_1)
{
    int VAR_2, VAR_3;
    int VAR_4 = 3;
    FUNC_0(VAR_1, "komi 6.5\n");
    FUNC_0(VAR_1, "boardsize 19\n");
    FUNC_0(VAR_1, "clear_board\n");
    for(VAR_3 = 0; VAR_3 < 19; ++VAR_3){
        for(VAR_2 = 0; VAR_2 < 19; ++VAR_2){
            if(FUNC_1(VAR_0,VAR_3*19 + VAR_2) == 1) FUNC_0(VAR_1, "play black %c%d\n", 'A'+VAR_2+(VAR_2>=8), 19-VAR_3);
            if(FUNC_1(VAR_0,VAR_3*19 + VAR_2) == -1) FUNC_0(VAR_1, "play white %c%d\n", 'A'+VAR_2+(VAR_2>=8), 19-VAR_3);
            if(FUNC_1(VAR_0,VAR_3*19 + VAR_2)) ++VAR_4;
        }
    }
    return VAR_4;
}
