
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msmsdcc_host {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct msmsdcc_host *VAR_2, uint32_t VAR_3, int VAR_4)
{
 while (VAR_4) {
  if ((FUNC_0(VAR_2->base + VAR_1) & VAR_3))
   return 0;
  FUNC_1(1);
  --VAR_4;
 }
 return -VAR_0;
}
