
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int GtkListBoxRow ;
typedef int GtkListBox ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(signal_user_data_t * VAR_0)
{
    GtkListBox * VAR_1;
    GtkListBoxRow * VAR_2;

    VAR_1 = FUNC_2(FUNC_0(VAR_0->builder, "chapters_list"));
    while ((VAR_2 = FUNC_5(VAR_1, 0)) != ((void*)0))
    {
        FUNC_4(FUNC_1(VAR_1), FUNC_3(VAR_2));
    }
}
