
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce {int status; int misc; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_2(struct mce *VAR_4)
{
 if (!(VAR_4->status & VAR_2) || !(VAR_4->status & VAR_1))
  return 0;
 if (FUNC_0(VAR_4->misc) > VAR_3)
  return 0;
 if (FUNC_1(VAR_4->misc) != VAR_0)
  return 0;
 return 1;
}
