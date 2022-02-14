
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct isp116x {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct isp116x*,int) ;
 int FUNC_2 (struct isp116x*,int) ;

__attribute__((used)) static void FUNC_3(struct isp116x *VAR_0, void *VAR_1, int VAR_2)
{
 u8 *VAR_3 = (u8 *) VAR_1;
 u16 *VAR_4 = (u16 *) VAR_1;
 u16 VAR_5;
 int VAR_6 = VAR_2 % 4;





 if ((unsigned long)VAR_4 & 1) {

  for (; VAR_2 > 1; VAR_2 -= 2) {
   VAR_5 = *VAR_3++;
   VAR_5 |= *VAR_3++ << 8;
   FUNC_1(VAR_0, VAR_5);
  }
  if (VAR_2)
   FUNC_2(VAR_0, (u16) * VAR_3);
 } else {

  for (; VAR_2 > 1; VAR_2 -= 2) {

   FUNC_1(VAR_0, FUNC_0(*VAR_4++));
  }

  if (VAR_2)
   FUNC_2(VAR_0, 0xff & *((u8 *) VAR_4));
 }
 if (VAR_6 == 1 || VAR_6 == 2)
  FUNC_1(VAR_0, 0);
}
