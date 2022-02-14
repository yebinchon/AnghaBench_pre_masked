
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct bnx2x*,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct bnx2x *VAR_2)
{
 u32 VAR_3 = 1000;
 u32 VAR_4 = 0;

 do {
  VAR_4 = FUNC_1(VAR_2, VAR_1);

  if (VAR_4 == 0)
   break;

  FUNC_2(1000, 2000);
 } while (VAR_3-- > 0);

 if (VAR_3 <= 0) {
  FUNC_0("Still pending IGU requests pend_bits=%x!\n",
     VAR_4);
  return -VAR_0;
 }

 return 0;
}
