
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,int) ;
 int VAR_8 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(int VAR_9, int VAR_10, void *VAR_11)
{
 FUNC_0("power_callback: flags: 0x%08X\n", VAR_10);


 if (VAR_10 & VAR_2 || VAR_10 & VAR_5 || VAR_10 & VAR_4)
 {
  VAR_8 = 1;
  if (VAR_6 != VAR_1)
   VAR_7 = VAR_6;
  FUNC_1(100000);
 }
 else if (VAR_10 & VAR_3)
 {
  VAR_6 = VAR_0;
 }


 return 0;
}
