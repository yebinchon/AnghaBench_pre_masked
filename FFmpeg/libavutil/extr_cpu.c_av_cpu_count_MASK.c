
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nb_cpus ;
typedef int cpuset ;
typedef int cpu_set_t ;
struct TYPE_3__ {int dwNumberOfProcessors; } ;
typedef TYPE_1__ SYSTEM_INFO ;
typedef int DWORD_PTR ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *,int ,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int*,int,int*,size_t*,int *,int ) ;

int FUNC_10(void)
{
    static volatile int VAR_5;

    int VAR_6 = 1;
    if (!VAR_5) {
        FUNC_5(((void*)0), VAR_0, "detected %d logical cores\n", VAR_6);
        VAR_5 = 1;
    }

    return VAR_6;
}
