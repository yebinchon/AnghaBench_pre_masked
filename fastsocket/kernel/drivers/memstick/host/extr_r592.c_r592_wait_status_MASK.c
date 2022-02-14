
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r592_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 unsigned long VAR_5 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (struct r592_device*,int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct r592_device *VAR_6, u32 VAR_7, u32 VAR_8)
{
 unsigned long VAR_9 = VAR_5 + FUNC_1(1000);
 u32 VAR_10 = FUNC_2(VAR_6, VAR_2);

 if ((VAR_10 & VAR_7) == VAR_8)
  return 0;

 while (FUNC_3(VAR_5, VAR_9)) {

  VAR_10 = FUNC_2(VAR_6, VAR_2);

  if ((VAR_10 & VAR_7) == VAR_8)
   return 0;

  if (VAR_10 & (VAR_4 | VAR_3))
   return -VAR_0;

  FUNC_0();
 }
 return -VAR_1;
}
