
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pthread_key_t ;
typedef int pthread_destructor_t ;
struct TYPE_5__ {int key; int destructor; } ;
typedef TYPE_1__ key_entry_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_5(pthread_key_t *VAR_4, pthread_destructor_t VAR_5)
{
    key_entry_t *VAR_6 = FUNC_2(sizeof(key_entry_t));
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_3(&VAR_3);

    const key_entry_t *VAR_7 = FUNC_0(&VAR_2);
    VAR_6->key = (VAR_7 == ((void*)0)) ? 1 : (VAR_7->key + 1);
    VAR_6->destructor = VAR_5;
    *VAR_4 = VAR_6->key;

    FUNC_1(&VAR_2, VAR_6, VAR_1);

    FUNC_4(&VAR_3);
    return 0;
}
