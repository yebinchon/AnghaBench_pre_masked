
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct sched_param {int sched_priority; } ;
typedef int pthread_t ;
typedef int pthread_attr_t ;
struct TYPE_2__ {int thread; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sched_param*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,void* (*) (void*),void*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static pthread_t
FUNC_6(uint32_t VAR_2, uint32_t VAR_3, bool VAR_4,
        void *(*VAR_5)(void *))
{
    int VAR_6;
    pthread_t VAR_7;
    struct sched_param VAR_8 = { .sched_priority = (int)VAR_3 };
    pthread_attr_t VAR_9;

    FUNC_0(FUNC_2(&VAR_9), "pthread_attr_init");

    FUNC_0(FUNC_3(&VAR_9, &VAR_8),
            "pthread_attr_setschedparam");

    if (VAR_4) {
        FUNC_0(FUNC_4(&VAR_9, VAR_0),
                "pthread_attr_setschedpolicy");
    }

    FUNC_0(FUNC_5(&VAR_7, &VAR_9, VAR_5,
            (void*)(uintptr_t)VAR_2), "pthread_create");

    FUNC_0(FUNC_1(&VAR_9), "pthread_attr_destroy");

    VAR_1[VAR_2].thread = VAR_7;

    return VAR_7;
}
