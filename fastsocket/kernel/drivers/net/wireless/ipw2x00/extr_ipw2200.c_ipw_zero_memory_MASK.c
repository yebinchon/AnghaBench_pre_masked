
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipw_priv*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ipw_priv *VAR_2, u32 VAR_3, u32 VAR_4)
{
 VAR_4 >>= 2;
 if (!VAR_4)
  return;
 FUNC_0(VAR_2, VAR_0, VAR_3);
 while (VAR_4--)
  FUNC_0(VAR_2, VAR_1, 0);
}
