
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tg3 {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct tg3 *VAR_5, u32 VAR_6, u32 VAR_7)
{
 int VAR_8;
 const int VAR_9 = 5;

 FUNC_1(VAR_6 + VAR_3, 0xffffffff);
 FUNC_2(VAR_6 + VAR_2, VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  if (FUNC_0(VAR_6 + VAR_2) == VAR_7)
   break;
  FUNC_1(VAR_6 + VAR_3, 0xffffffff);
  FUNC_1(VAR_6 + VAR_0, VAR_1);
  FUNC_2(VAR_6 + VAR_2, VAR_7);
  FUNC_3(1000);
 }

 return (VAR_8 == VAR_9) ? -VAR_4 : 0;
}
