
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xc5000_priv {int dummy; } ;


 int FUNC_0 (struct xc5000_priv*,int*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u16 FUNC_2(struct xc5000_priv *VAR_0)
{
 u16 VAR_1 = 0;
 int VAR_2 = 40;

 while ((VAR_1 == 0) && (VAR_2 > 0)) {
  FUNC_0(VAR_0, &VAR_1);
  if (VAR_1 != 1) {
   FUNC_1(5);
   VAR_2--;
  }
 }
 return VAR_1;
}
