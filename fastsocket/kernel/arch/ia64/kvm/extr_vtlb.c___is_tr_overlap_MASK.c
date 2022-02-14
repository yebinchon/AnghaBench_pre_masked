
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct thash_data {scalar_t__ rid; scalar_t__ vadr; int ps; int p; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct thash_data *VAR_0, u64 VAR_1, u64 VAR_2, u64 VAR_3)
{
 u64 VAR_4, VAR_5;

 if (!VAR_0->p || VAR_0->rid != VAR_1)
  return 0;

 VAR_4 = VAR_0->vadr;
 VAR_5 = VAR_4 + FUNC_0(VAR_0->ps) - 1;
 VAR_3 -= 1;
 if ((VAR_2 > VAR_5) || (VAR_4 > VAR_3))
  return 0;
 else
  return 1;

}
