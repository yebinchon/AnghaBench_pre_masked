
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hwrng {int priv; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct hwrng *VAR_0, int VAR_1)
{
 u32 VAR_2 = (u32)VAR_0->priv;
 int VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < 20; VAR_4++) {
  VAR_3 = !!(FUNC_0(VAR_2 + 0xF4) & 1);
  if (VAR_3 || !VAR_1)
   break;
  FUNC_1(10);
 }
 return VAR_3;
}
