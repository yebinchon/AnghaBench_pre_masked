
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ipw_priv {int dummy; } ;
struct ipw_event {int dummy; } ;
typedef int base ;


 int VAR_0 ;
 int FUNC_0 (struct ipw_priv*,int ) ;
 int FUNC_1 (struct ipw_priv*,int,int *,int) ;

__attribute__((used)) static void FUNC_2(struct ipw_priv *VAR_1,
      u32 VAR_2, struct ipw_event *VAR_3)
{
 u32 VAR_4;

 if (VAR_2) {
  VAR_4 = FUNC_0(VAR_1, VAR_0);
  FUNC_1(VAR_1, VAR_4 + sizeof(VAR_4) + sizeof(u32),
      (u8 *) VAR_3, sizeof(*VAR_3) * VAR_2);
 }
}
