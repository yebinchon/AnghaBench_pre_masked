
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* str; } ;
typedef TYPE_1__ AVBPrint ;


 int VAR_0 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (int *,TYPE_1__*,char*) ;
 int FUNC_5 (char*,char*,char*) ;
 char** VAR_1 ;

int FUNC_6(void)
{
    int VAR_2;
    AVBPrint VAR_3;

    FUNC_3(&VAR_3, 0, VAR_0);
    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
        int VAR_4 = FUNC_4(((void*)0), &VAR_3, VAR_1[VAR_2]);
        if (VAR_4 < 0)
            return VAR_4;
        FUNC_5("%s --> %s\n", VAR_1[VAR_2], VAR_3.str);
        FUNC_1(&VAR_3);
    }
    FUNC_2(&VAR_3, ((void*)0));
    return 0;
}
