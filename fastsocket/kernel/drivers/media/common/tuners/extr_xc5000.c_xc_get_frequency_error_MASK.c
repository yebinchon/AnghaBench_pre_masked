
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct xc5000_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xc5000_priv*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct xc5000_priv *VAR_2, u32 *VAR_3)
{
 int VAR_4;
 u16 VAR_5;
 u32 VAR_6;

 VAR_4 = FUNC_0(VAR_2, VAR_1, &VAR_5);
 if (VAR_4 != VAR_0)
  return VAR_4;

 VAR_6 = (u32)VAR_5;
 (*VAR_3) = (VAR_6 * 15625) / 1000;
 return VAR_4;
}
