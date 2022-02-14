
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ pthread_cond_t ;
struct TYPE_4__ {int wait_sem; } ;
typedef TYPE_1__ esp_pthread_cond_waiter_t ;
struct TYPE_5__ {int lock; int waiter_list; } ;
typedef TYPE_2__ esp_pthread_cond_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

int FUNC_4(pthread_cond_t *VAR_1)
{
    if (VAR_1 == ((void*)0) || *VAR_1 == (pthread_cond_t) 0) {
        return VAR_0;
    }

    esp_pthread_cond_t *VAR_2 = (esp_pthread_cond_t *) *VAR_1;

    FUNC_1(&VAR_2->lock);
    esp_pthread_cond_waiter_t *VAR_3;
    VAR_3 = FUNC_0(&VAR_2->waiter_list);
    if (VAR_3) {
        FUNC_3(VAR_3->wait_sem);
    }
    FUNC_2(&VAR_2->lock);

    return 0;
}
