
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ,int ,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int ) ;
 scalar_t__ VAR_2 ;

int FUNC_6(unsigned long VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_5("/proc/mm", FUNC_2(FUNC_3(FUNC_0())), 0);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_2) {
  VAR_5 = FUNC_1(VAR_4, VAR_0, VAR_1, VAR_3);
  if (VAR_5) {
   FUNC_4(VAR_4);
   return VAR_5;
  }
 }

 return VAR_4;
}
