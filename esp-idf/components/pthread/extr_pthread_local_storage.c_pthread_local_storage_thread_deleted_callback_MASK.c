
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int value; int key; } ;
typedef TYPE_1__ values_list_t ;
typedef TYPE_1__ value_entry_t ;
struct TYPE_11__ {int (* destructor ) (int ) ;} ;
typedef TYPE_3__ key_entry_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(int VAR_1, void *VAR_2)
{
    values_list_t *VAR_3 = (values_list_t *)VAR_2;
    FUNC_2(VAR_3 != ((void*)0));


    value_entry_t *VAR_4 = FUNC_0(VAR_3);
    while(VAR_4 != ((void*)0)) {



        key_entry_t *VAR_5 = FUNC_3(VAR_4->key);
        if (VAR_5 != ((void*)0) && VAR_5->destructor != ((void*)0)) {
            VAR_5->destructor(VAR_4->value);
        }
        value_entry_t *VAR_6 = FUNC_1(VAR_4, VAR_0);
        FUNC_4(VAR_4);
        VAR_4 = VAR_6;
    }
    FUNC_4(VAR_3);
}
