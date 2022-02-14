
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TimerHandle_t ;


 int FUNC_0 (char*,int ,int volatile*,int volatile) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(TimerHandle_t VAR_0)
{
    volatile int *VAR_1;
    VAR_1 = (volatile int *)FUNC_1( VAR_0 );
    (*VAR_1)++;
    FUNC_0("Callback timer %p count %p = %d\n", VAR_0, VAR_1, *VAR_1);
}
