
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int cpu_set_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int,int *) ;

__attribute__((used)) static void FUNC_5(int VAR_0)
{
    pthread_t VAR_1 = FUNC_3();
    cpu_set_t VAR_2;
    FUNC_1(&VAR_2);
    FUNC_0(VAR_0, &VAR_2);
    if (FUNC_4(VAR_1, sizeof (cpu_set_t), &VAR_2) != 0)
        FUNC_2("Failed to bind to core %d\n", VAR_0);
}
