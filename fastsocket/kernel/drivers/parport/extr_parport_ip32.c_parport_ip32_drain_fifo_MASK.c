
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct parport*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static unsigned int FUNC_6(struct parport *VAR_3,
         unsigned long VAR_4)
{
 unsigned long VAR_5 = VAR_2 + VAR_4;
 unsigned int VAR_6;
 unsigned int VAR_7;


 for (VAR_7 = 0; VAR_7 < 40; VAR_7++) {
  if (FUNC_1(VAR_3) & VAR_0)
   break;
  if (FUNC_3(VAR_2, VAR_5))
   break;
  if (FUNC_2(VAR_1))
   break;
  FUNC_5(5);
 }


 VAR_6 = 1;
 while (!(FUNC_1(VAR_3) & VAR_0)) {
  if (FUNC_4(VAR_2, VAR_5))
   break;
  FUNC_0(VAR_6);
  if (FUNC_2(VAR_1))
   break;
  if (VAR_6 < 128)
   VAR_6 *= 2;
 }

 return !!(FUNC_1(VAR_3) & VAR_0);
}
