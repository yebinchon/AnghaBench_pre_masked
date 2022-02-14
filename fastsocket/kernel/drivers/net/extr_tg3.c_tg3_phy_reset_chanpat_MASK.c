
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct tg3*) ;
 int FUNC_1 (struct tg3*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct tg3 *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  int VAR_6;

  FUNC_1(VAR_4, VAR_1,
        (VAR_5 * 0x2000) | 0x0200);
  FUNC_1(VAR_4, VAR_2, 0x0002);
  for (VAR_6 = 0; VAR_6 < 6; VAR_6++)
   FUNC_1(VAR_4, VAR_3, 0x000);
  FUNC_1(VAR_4, VAR_2, 0x0202);
  if (FUNC_0(VAR_4))
   return -VAR_0;
 }

 return 0;
}
