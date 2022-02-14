
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tg3 {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct tg3 *VAR_4, u32 VAR_5)
{
 int VAR_6;
 const int VAR_7 = 10000;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  FUNC_1(VAR_5 + VAR_2, 0xffffffff);
  FUNC_1(VAR_5 + VAR_0, VAR_1);
  if (FUNC_0(VAR_5 + VAR_0) & VAR_1)
   break;
 }

 return (VAR_6 == VAR_7) ? -VAR_3 : 0;
}
