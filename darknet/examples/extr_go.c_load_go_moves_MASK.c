
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; char** data; } ;
typedef TYPE_1__ moves ;
typedef int FILE ;


 char** FUNC_0 (int,int) ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int) ;
 void* FUNC_4 (char**,int) ;

moves FUNC_5(char *VAR_0)
{
    moves VAR_1;
    VAR_1.n = 128;
    VAR_1.data = FUNC_0(128, sizeof(char*));
    FILE *VAR_2 = FUNC_2(VAR_0, "rb");
    int VAR_3 = 0;
    char *VAR_4 = 0;
    while ((VAR_4 = FUNC_1(VAR_2))) {
        if (VAR_3 >= VAR_1.n) {
            VAR_1.n *= 2;
            VAR_1.data = FUNC_4(VAR_1.data, VAR_1.n*sizeof(char*));
        }
        VAR_1.data[VAR_3] = VAR_4;
        ++VAR_3;
    }
    FUNC_3("%d\n", VAR_3);
    VAR_1.n = VAR_3;
    VAR_1.data = FUNC_4(VAR_1.data, VAR_3*sizeof(char*));
    return VAR_1;
}
