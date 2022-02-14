
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;


 int FUNC_0 (char*,int,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(char *VAR_1)
{
    UINT8 VAR_2;
    UINT8 VAR_3 = 0;
    UINT8 VAR_4 = 0;
    UINT8 VAR_5;
    char VAR_6[VAR_0];

    VAR_2 = FUNC_1(VAR_1);

    if(VAR_2 < 4) {
        return;
    }


    while(VAR_1[0] =='\r' && VAR_1[1] =='\n'
        && VAR_1[VAR_2-2] =='\r' && VAR_1[VAR_2-1] =='\n') {
        VAR_5 = 1;
        for (VAR_3=0;VAR_3<(VAR_2-4*VAR_5);VAR_3++) {
            VAR_6[VAR_4++] = VAR_1[VAR_3+VAR_5*2];
        }

        VAR_6[VAR_4] = '\0';
        VAR_2 = VAR_2 - 4;
        FUNC_0(VAR_1, VAR_0+1, VAR_6,VAR_2+1);
        VAR_3=0;
        VAR_4=0;
        if(VAR_2 <4) {
            return;
        }
    }
    return;
}
