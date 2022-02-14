
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tg3*,int ,int*) ;
 int FUNC_1 (struct tg3*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct tg3 *VAR_3)
{
 u32 VAR_4;
 int VAR_5, VAR_6;




 VAR_4 = VAR_0;
 VAR_6 = FUNC_1(VAR_3, VAR_2, VAR_4);
 if (VAR_6 != 0)
  return -VAR_1;

 VAR_5 = 5000;
 while (VAR_5--) {
  VAR_6 = FUNC_0(VAR_3, VAR_2, &VAR_4);
  if (VAR_6 != 0)
   return -VAR_1;

  if ((VAR_4 & VAR_0) == 0) {
   FUNC_2(40);
   break;
  }
  FUNC_2(10);
 }
 if (VAR_5 < 0)
  return -VAR_1;

 return 0;
}
