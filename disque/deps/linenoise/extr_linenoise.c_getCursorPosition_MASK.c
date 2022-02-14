
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 char VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char*,char*,int*,int*) ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_1, int VAR_2) {
    char VAR_3[32];
    int VAR_4, VAR_5;
    unsigned int VAR_6 = 0;


    if (FUNC_2(VAR_2, "\x1b[6n", 4) != 4) return -1;


    while (VAR_6 < sizeof(VAR_3)-1) {
        if (FUNC_0(VAR_1,VAR_3+VAR_6,1) != 1) break;
        if (VAR_3[VAR_6] == 'R') break;
        VAR_6++;
    }
    VAR_3[VAR_6] = '\0';


    if (VAR_3[0] != VAR_0 || VAR_3[1] != '[') return -1;
    if (FUNC_1(VAR_3+2,"%d;%d",&VAR_5,&VAR_4) != 2) return -1;
    return VAR_4;
}
