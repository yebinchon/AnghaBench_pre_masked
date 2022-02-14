
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_10 = 0;

 if (FUNC_3())

  return 0;

 if (FUNC_1())
  VAR_10 = FUNC_4() & VAR_4;

 if (VAR_10 == VAR_0) {

  if (FUNC_1()) {
   FUNC_0(0xFF, VAR_2);
   FUNC_0(0xCFDE, VAR_1);
   FUNC_0(0xCFDE, VAR_3);
  }
  if (FUNC_2()) {
   FUNC_0(0xFFFF, VAR_7);
   FUNC_0(0xFFFF, VAR_6);
   FUNC_0(0xFFFF, VAR_9);
   FUNC_0(0x0, VAR_5);
   FUNC_0(0xFFFFFFFF, VAR_8);
  }
  return 0;
 } else
  return 1;
}
