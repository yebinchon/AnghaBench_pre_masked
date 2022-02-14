
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx88_core {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct cx88_core *VAR_2, u32 VAR_3)
{
 unsigned long VAR_4 = VAR_1 + FUNC_1(1);
 u32 VAR_5,VAR_6;

 VAR_6 = VAR_3 ? 2 : 0;
 for (;;) {
  VAR_5 = FUNC_0(VAR_0) & 2;
  if (VAR_6 == VAR_5)
   return 0;
  if (FUNC_2(VAR_1,VAR_4))
   return -1;
  FUNC_3(1);
 }
}
