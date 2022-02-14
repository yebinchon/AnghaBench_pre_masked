
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int cpumask; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_0,
        struct clock_event_device *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1->cpumask);

 return FUNC_2(VAR_2, VAR_0 + FUNC_1(((void*)0)));
}
