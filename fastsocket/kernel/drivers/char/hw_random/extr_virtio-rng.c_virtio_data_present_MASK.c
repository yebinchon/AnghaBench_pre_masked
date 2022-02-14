
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hwrng {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct hwrng *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_0 >= sizeof(u32))
  return 1;

again:
 if (!VAR_3)
  return 0;

 VAR_4 = FUNC_2(&VAR_1);
 if (VAR_4 < 0)
  return VAR_4;


 if (FUNC_1(VAR_0 < sizeof(u32))) {
  FUNC_0();
  goto again;
 }

 return 1;
}
