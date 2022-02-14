
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int classes; int names; int member_0; } ;
typedef TYPE_1__ metadata ;
typedef int list ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,int) ;
 char* FUNC_4 (int *,char*,int ) ;
 int * FUNC_5 (char*) ;
 int VAR_0 ;

metadata FUNC_6(char *VAR_1)
{
    metadata VAR_2 = {0};
    list *VAR_3 = FUNC_5(VAR_1);

    char *VAR_4 = FUNC_4(VAR_3, "names", 0);
    if(!VAR_4) VAR_4 = FUNC_4(VAR_3, "labels", 0);
    if(!VAR_4) {
        FUNC_0(VAR_0, "No names or labels found\n");
    } else {
        VAR_2.names = FUNC_2(VAR_4);
    }
    VAR_2.classes = FUNC_3(VAR_3, "classes", 2);
    FUNC_1(VAR_3);
    return VAR_2;
}
