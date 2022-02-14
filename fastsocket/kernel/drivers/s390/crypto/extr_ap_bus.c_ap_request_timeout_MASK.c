
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_device {scalar_t__ reset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_3)
{
 struct ap_device *VAR_4 = (struct ap_device *) VAR_3;

 if (VAR_4->reset == VAR_0) {
  VAR_4->reset = VAR_1;

  if (FUNC_0())
   FUNC_1(&VAR_2);
 }
}
