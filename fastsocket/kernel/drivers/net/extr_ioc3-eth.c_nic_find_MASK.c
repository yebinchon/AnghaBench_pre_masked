
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct ioc3 {int dummy; } ;


 int FUNC_0 (struct ioc3*) ;
 int FUNC_1 (struct ioc3*) ;
 int FUNC_2 (struct ioc3*,int) ;
 int FUNC_3 (struct ioc3*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static u64 FUNC_5(struct ioc3 *VAR_0, int *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;
 u64 VAR_6 = 0;

 FUNC_1(VAR_0);

 FUNC_3(VAR_0, 0xf0);


 for (VAR_4 = 0, VAR_5 = 0; VAR_4 < 64; VAR_4++) {
  VAR_2 = FUNC_0(VAR_0);
  VAR_3 = FUNC_0(VAR_0);

  if (VAR_2 && VAR_3) {
   FUNC_4("NIC search failed (not fatal).\n");
   *VAR_1 = 0;
   return 0;
  }

  if (!VAR_2 && !VAR_3) {
   if (VAR_4 == *VAR_1) {
    VAR_6 |= 1UL << VAR_4;
   } else if (VAR_4 > *VAR_1) {
    VAR_6 &= ~(1UL << VAR_4);
    VAR_5 = VAR_4;
   } else if ((VAR_6 & (1UL << VAR_4)) == 0)
    VAR_5 = VAR_4;
   FUNC_2(VAR_0, VAR_6 & (1UL << VAR_4));
   continue;
  } else {
   if (VAR_2)
    VAR_6 |= 1UL << VAR_4;
   else
    VAR_6 &= ~(1UL << VAR_4);
   FUNC_2(VAR_0, VAR_2);
   continue;
  }
 }

 *VAR_1 = VAR_5;

 return VAR_6;
}
