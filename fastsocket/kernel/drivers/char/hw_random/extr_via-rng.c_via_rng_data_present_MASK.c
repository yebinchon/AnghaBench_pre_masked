
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hwrng {int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int ) ;

__attribute__((used)) static int FUNC_2(struct hwrng *VAR_2, int VAR_3)
{
 u32 VAR_4;
 u32 *VAR_5 = (u32 *)(&VAR_2->priv);
 int VAR_6;
 for (VAR_6 = 0; VAR_6 < 20; VAR_6++) {
  *VAR_5 = 0;
  VAR_4 = FUNC_1(VAR_5, VAR_0);
  VAR_4 &= VAR_1;
  if (VAR_4 || !VAR_3)
   break;
  FUNC_0(10);
 }
 return VAR_4 ? 1 : 0;
}
