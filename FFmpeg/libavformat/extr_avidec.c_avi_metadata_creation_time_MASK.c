
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int AVDictionary ;


 int FUNC_0 (int **,char*,char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int * VAR_0 ;
 int FUNC_2 (char*,int,char*,int,int,int,char*) ;
 int FUNC_3 (char*,char*,char*,int*,char*,int*) ;

__attribute__((used)) static void FUNC_4(AVDictionary **VAR_1, char *VAR_2)
{
    char VAR_3[4], VAR_4[9], VAR_5[64];
    int VAR_6, VAR_7, VAR_8;

    if (FUNC_3(VAR_2, "%*3s%*[ ]%3s%*[ ]%2d%*[ ]%8s%*[ ]%4d",
               VAR_3, &VAR_7, VAR_4, &VAR_8) == 4) {
        for (VAR_6 = 0; VAR_6 < 12; VAR_6++)
            if (!FUNC_1(VAR_3, VAR_0[VAR_6])) {
                FUNC_2(VAR_5, sizeof(VAR_5), "%.4d-%.2d-%.2d %s",
                         VAR_8, VAR_6 + 1, VAR_7, VAR_4);
                FUNC_0(VAR_1, "creation_time", VAR_5, 0);
            }
    } else if (VAR_2[4] == '/' && VAR_2[7] == '/') {
        VAR_2[4] = VAR_2[7] = '-';
        FUNC_0(VAR_1, "creation_time", VAR_2, 0);
    }
}
