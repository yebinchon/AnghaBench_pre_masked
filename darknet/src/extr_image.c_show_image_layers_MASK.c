
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int c; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (TYPE_1__) ;
 TYPE_1__ FUNC_1 (TYPE_1__,int) ;
 int FUNC_2 (TYPE_1__,char*,int) ;
 int FUNC_3 (char*,char*,char*,int) ;

void FUNC_4(image VAR_0, char *VAR_1)
{
    int VAR_2;
    char VAR_3[256];
    for(VAR_2 = 0; VAR_2 < VAR_0.c; ++VAR_2){
        FUNC_3(VAR_3, "%s - Layer %d", VAR_1, VAR_2);
        image VAR_4 = FUNC_1(VAR_0, VAR_2);
        FUNC_2(VAR_4, VAR_3, 1);
        FUNC_0(VAR_4);
    }
}
