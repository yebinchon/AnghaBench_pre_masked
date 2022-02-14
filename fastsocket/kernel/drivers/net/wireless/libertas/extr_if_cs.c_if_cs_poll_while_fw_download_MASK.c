
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef scalar_t__ u8 ;
struct if_cs_card {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct if_cs_card*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct if_cs_card *VAR_1, uint VAR_2, u8 VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 100000; VAR_4++) {
  u8 VAR_5 = FUNC_0(VAR_1, VAR_2);
  if (VAR_5 == VAR_3)
   return 0;
  FUNC_1(5);
 }
 return -VAR_0;
}
