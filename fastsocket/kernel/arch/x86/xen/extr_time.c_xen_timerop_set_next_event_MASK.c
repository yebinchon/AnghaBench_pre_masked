
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {scalar_t__ mode; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_1,
          struct clock_event_device *VAR_2)
{
 FUNC_2(VAR_2->mode != VAR_0);

 if (FUNC_1(FUNC_3(VAR_1)) < 0)
  FUNC_0();





 return 0;
}
