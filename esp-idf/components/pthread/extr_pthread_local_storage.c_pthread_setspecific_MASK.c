
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int values_list_t ;
struct TYPE_7__ {void* value; int key; } ;
typedef TYPE_1__ value_entry_t ;
typedef int pthread_key_t ;
typedef int key_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ,int ) ;
 int * FUNC_2 (int,int) ;
 int * FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int *,int ,int *,int ) ;
 int VAR_5 ;

int FUNC_10(pthread_key_t VAR_6, const void *VAR_7)
{
    key_entry_t *VAR_8 = FUNC_3(VAR_6);
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    values_list_t *VAR_9 = FUNC_7(((void*)0), VAR_2);
    if (VAR_9 == ((void*)0)) {
        VAR_9 = FUNC_2(1, sizeof(values_list_t));
        if (VAR_9 == ((void*)0)) {
            return VAR_1;
        }



        FUNC_9(((void*)0),
                                                        VAR_2,
                                                        VAR_9,
                                                        VAR_4);

    }

    value_entry_t *VAR_10 = FUNC_4(VAR_9, VAR_6);
    if (VAR_10 != ((void*)0)) {
        if (VAR_7 != ((void*)0)) {


            VAR_10->value = (void *) VAR_7;
        } else {
            FUNC_1(VAR_9, VAR_10, VAR_5, VAR_3);
            FUNC_5(VAR_10);
        }
    } else if (VAR_7 != ((void*)0)) {
        VAR_10 = FUNC_6(sizeof(value_entry_t));
        if (VAR_10 == ((void*)0)) {
            return VAR_1;
        }
        VAR_10->key = VAR_6;
        VAR_10->value = (void *) VAR_7;
        FUNC_0(VAR_9, VAR_10, VAR_3);
    }

    return 0;
}
