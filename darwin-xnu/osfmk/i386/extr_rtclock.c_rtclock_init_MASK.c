
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_4__ {void* cpu_frequency_max_hz; void* cpu_frequency_min_hz; } ;
struct TYPE_3__ {int (* rtc_config ) () ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 void* FUNC_6 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_3 ;

int
FUNC_10(void)
{
 uint64_t VAR_4;

 FUNC_0(!FUNC_3());

 if (FUNC_2() == VAR_1) {

  FUNC_0(VAR_3);




  VAR_4 = FUNC_6(VAR_3);





  VAR_0.cpu_frequency_min_hz = VAR_4;
  VAR_0.cpu_frequency_max_hz = VAR_4;

  FUNC_7();
  FUNC_1();
  FUNC_5();
  FUNC_4(10);
 }


 VAR_2->rtc_config();
 FUNC_8();

 return (1);
}
