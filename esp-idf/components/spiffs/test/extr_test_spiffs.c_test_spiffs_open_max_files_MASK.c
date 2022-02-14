
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int ** FUNC_1 (size_t,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (char*,int,char*,char const*,size_t) ;

void FUNC_6(const char* VAR_0, size_t VAR_1)
{
    FILE** VAR_2 = FUNC_1(VAR_1, sizeof(FILE*));
    for (size_t VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
        char VAR_4[32];
        FUNC_5(VAR_4, sizeof(VAR_4), "%s_%d.txt", VAR_0, VAR_3);
        VAR_2[VAR_3] = FUNC_3(VAR_4, "w");
        FUNC_0(VAR_2[VAR_3]);
    }

    for (size_t VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
        FUNC_2(VAR_2[VAR_5]);
    }
    FUNC_4(VAR_2);
}
