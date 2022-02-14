
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; int is_initialized; } ;
typedef TYPE_1__ pthread_mutexattr_t ;
typedef scalar_t__ pthread_mutex_t ;
struct TYPE_7__ {int type; int sem; } ;
typedef TYPE_2__ esp_pthread_mutex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int FUNC_5(pthread_mutex_t *VAR_5, const pthread_mutexattr_t *VAR_6)
{
    int VAR_7 = VAR_3;

    if (!VAR_5) {
        return VAR_1;
    }

    if (VAR_6) {
        if (!VAR_6->is_initialized) {
            return VAR_1;
        }
        int VAR_8 = FUNC_2(VAR_6);
        if (VAR_8) {
            return VAR_8;
        }
        VAR_7 = VAR_6->type;
    }

    esp_pthread_mutex_t *VAR_9 = (esp_pthread_mutex_t *)FUNC_1(sizeof(esp_pthread_mutex_t));
    if (!VAR_9) {
        return VAR_2;
    }
    VAR_9->type = VAR_7;

    if (VAR_9->type == VAR_4) {
        VAR_9->sem = FUNC_4();
    } else {
        VAR_9->sem = FUNC_3();
    }
    if (!VAR_9->sem) {
        FUNC_0(VAR_9);
        return VAR_0;
    }

    *VAR_5 = (pthread_mutex_t)VAR_9;

    return 0;
}
