
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ kern_return_t ;
struct TYPE_2__ {scalar_t__ cpu_running; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,scalar_t__,int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int,int) ;
 scalar_t__ FUNC_5 (int) ;

kern_return_t
FUNC_6(int VAR_5)
{
 kern_return_t VAR_6;




 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6 != VAR_3)



  return(VAR_6);

 FUNC_0(
  VAR_4 | VAR_1,
  VAR_5, 0, 0, 0, 0);




 FUNC_2();







 FUNC_4(VAR_5, 30000, 1);
 FUNC_3();

 FUNC_0(
  VAR_4 | VAR_0,
  VAR_5, FUNC_1(VAR_5)->cpu_running, 0, 0, 0);





 if (FUNC_1(VAR_5)->cpu_running)
  return(VAR_3);
 else
  return(VAR_2);
}
