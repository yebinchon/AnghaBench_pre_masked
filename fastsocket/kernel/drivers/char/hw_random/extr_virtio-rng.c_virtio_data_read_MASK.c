
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hwrng {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * VAR_2 ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct hwrng *VAR_3, u32 *VAR_4)
{
 FUNC_0(VAR_0 < sizeof(u32));
 VAR_0 -= sizeof(u32);
 *VAR_4 = VAR_2[VAR_0 / 4];

 if (VAR_0 < sizeof(u32)) {
  FUNC_1(&VAR_1);
  FUNC_2();
 }
 return sizeof(*VAR_4);
}
