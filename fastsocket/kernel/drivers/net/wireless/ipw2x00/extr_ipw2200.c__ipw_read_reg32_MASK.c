
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct ipw_priv* u32 ;
struct ipw_priv {int dummy; } ;


 int FUNC_0 (char*,struct ipw_priv*,struct ipw_priv*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ipw_priv* FUNC_1 (struct ipw_priv*,int ) ;
 int FUNC_2 (struct ipw_priv*,int ,struct ipw_priv*) ;

__attribute__((used)) static u32 FUNC_3(struct ipw_priv *VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 FUNC_0("%p : reg = 0x%08x\n", VAR_2, VAR_3);

 FUNC_2(VAR_2, VAR_0, VAR_3);
 VAR_4 = FUNC_1(VAR_2, VAR_1);
 FUNC_0(" reg = 0x%4X : value = 0x%4x\n", VAR_3, VAR_4);
 return VAR_4;
}
