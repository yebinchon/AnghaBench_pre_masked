
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int owner; } ;
typedef TYPE_1__ buf_desc_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void)
{
    FUNC_6();

    FUNC_2();
    buf_desc_t *VAR_1 = FUNC_4();
    while (VAR_1 != ((void*)0)) {
        FUNC_1(VAR_1->owner == 1);
        FUNC_5();
        VAR_1 = FUNC_0(VAR_1, VAR_0);
    }
    FUNC_3();
}
