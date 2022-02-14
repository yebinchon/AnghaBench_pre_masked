
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct xc5000_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xc5000_priv*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct xc5000_priv *VAR_2, u32 *VAR_3)
{
 u16 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_1, &VAR_4);
 if (VAR_5 != VAR_0)
  return VAR_5;

 (*VAR_3) = ((VAR_4 & 0x0fff) * 763)/100;
 return VAR_5;
}
