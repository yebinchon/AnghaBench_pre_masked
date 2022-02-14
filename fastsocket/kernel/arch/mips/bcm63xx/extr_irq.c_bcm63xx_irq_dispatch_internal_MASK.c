
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(void)
{
 u32 VAR_3;
 static int VAR_4;

 VAR_3 = FUNC_0(VAR_1) &
  FUNC_0(VAR_2);

 if (!VAR_3)
  return ;

 while (1) {
  int VAR_5 = VAR_4;

  VAR_4 = (VAR_4 + 1) & 0x1f;
  if (VAR_3 & (1 << VAR_5)) {
   FUNC_1(VAR_5 + VAR_0);
   break;
  }
 }
}
