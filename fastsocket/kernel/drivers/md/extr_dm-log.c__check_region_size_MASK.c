
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dm_target {int len; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct dm_target *VAR_0, uint32_t VAR_1)
{
 if (VAR_1 < 2 || VAR_1 > VAR_0->len)
  return 0;

 if (!FUNC_0(VAR_1))
  return 0;

 return 1;
}
