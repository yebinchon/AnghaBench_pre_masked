
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulonglong ;
struct TYPE_3__ {int cycles_overhead; int microseconds_overhead; int microseconds_frequency; } ;
typedef TYPE_1__ MY_TIMER_INFO ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static ulonglong FUNC_2(MY_TIMER_INFO *VAR_1)
{
  int VAR_2;
  ulonglong VAR_3, VAR_4, VAR_5, VAR_6;
  VAR_3= FUNC_0();
  VAR_4= FUNC_1();
  VAR_5= VAR_4;
  for (VAR_2= 0; VAR_2 < VAR_0; ++VAR_2)
  {
    VAR_5= FUNC_1();
    if (VAR_5 - VAR_4 > 200) break;
  }
  VAR_6= FUNC_0() - VAR_1->cycles_overhead;
  VAR_6-= VAR_1->microseconds_overhead;
  return (VAR_1->microseconds_frequency * (VAR_6 - VAR_3)) / (VAR_5 - VAR_4);
}
