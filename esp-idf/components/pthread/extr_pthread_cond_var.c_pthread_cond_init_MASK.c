
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pthread_condattr_t ;
typedef scalar_t__ pthread_cond_t ;
struct TYPE_2__ {int waiter_list; int lock; } ;
typedef TYPE_1__ esp_pthread_cond_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,int) ;

int FUNC_3(pthread_cond_t *VAR_2, const pthread_condattr_t *VAR_3)
{
    (void) VAR_3;

    if (VAR_2 == ((void*)0)) {
        return VAR_0;
    }

    esp_pthread_cond_t *VAR_4 = (esp_pthread_cond_t *) FUNC_2(1, sizeof(esp_pthread_cond_t));
    if (VAR_4 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_1(&VAR_4->lock);
    FUNC_0(&VAR_4->waiter_list);

    *VAR_2 = (pthread_cond_t) VAR_4;
    return 0;
}
