
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pthread_cond_t ;
struct TYPE_3__ {int lock; int waiter_list; } ;
typedef TYPE_1__ esp_pthread_cond_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(pthread_cond_t *VAR_2)
{
    int VAR_3 = 0;

    if (VAR_2 == ((void*)0) || *VAR_2 == (pthread_cond_t) 0) {
        return VAR_1;
    }

    esp_pthread_cond_t *VAR_4 = (esp_pthread_cond_t *) *VAR_2;

    FUNC_1(&VAR_4->lock);
    if (!FUNC_0(&VAR_4->waiter_list)) {
        VAR_3 = VAR_0;
    }
    FUNC_3(&VAR_4->lock);

    if (VAR_3 == 0) {
        *VAR_2 = (pthread_cond_t) 0;
        FUNC_2(&VAR_4->lock);
        FUNC_4(VAR_4);
    }

    return VAR_3;
}
