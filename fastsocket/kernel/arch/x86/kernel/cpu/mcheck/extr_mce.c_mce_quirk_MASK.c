
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce {int status; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_2(int VAR_1, struct mce *VAR_2)
{
 if (VAR_0 && VAR_1 == 6 && ((VAR_2->status >> 16) & 0xffff) == 0x2000) {
  FUNC_1(FUNC_0(6), 0);
  return 1;
 }
 return 0;
}
