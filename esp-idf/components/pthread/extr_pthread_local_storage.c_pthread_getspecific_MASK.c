
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int values_list_t ;
struct TYPE_3__ {void* value; } ;
typedef TYPE_1__ value_entry_t ;
typedef int pthread_key_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;

void *FUNC_2(pthread_key_t VAR_1)
{
    values_list_t *VAR_2 = (values_list_t *) FUNC_1(((void*)0), VAR_0);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }

    value_entry_t *VAR_3 = FUNC_0(VAR_2, VAR_1);
    if(VAR_3 != ((void*)0)) {
        return VAR_3->value;
    }
    return ((void*)0);
}
