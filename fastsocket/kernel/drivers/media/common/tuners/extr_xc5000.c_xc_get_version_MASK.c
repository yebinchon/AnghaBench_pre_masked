
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct xc5000_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xc5000_priv*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct xc5000_priv *VAR_2,
 u8 *VAR_3, u8 *VAR_4,
 u8 *VAR_5, u8 *VAR_6)
{
 u16 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_2, VAR_1, &VAR_7);
 if (VAR_8 != VAR_0)
  return VAR_8;

 (*VAR_3) = (VAR_7 >> 12) & 0x0F;
 (*VAR_4) = (VAR_7 >> 8) & 0x0F;
 (*VAR_5) = (VAR_7 >> 4) & 0x0F;
 (*VAR_6) = VAR_7 & 0x0F;

 return 0;
}
