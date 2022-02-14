
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx23885_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct cx23885_dev *VAR_3)
{
 u32 VAR_4;
 unsigned long VAR_5 = VAR_2 + FUNC_1(1);

 for (;;) {
  VAR_4 = FUNC_0(VAR_1) & VAR_0;
  if (VAR_4 != 0)
   return 0;
  if (FUNC_2(VAR_2, VAR_5))
   return -1;
  FUNC_3(1);
 }
}
