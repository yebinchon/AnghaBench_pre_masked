
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw2100_wpa_assoc_frame {int var_ie_len; int var_ie; scalar_t__ fixed_ie_mask; } ;
struct ipw2100_priv {int dummy; } ;


 int FUNC_0 (struct ipw2100_priv*,struct ipw2100_wpa_assoc_frame*,int ) ;
 int FUNC_1 (struct ipw2100_priv*,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct ipw2100_priv *VAR_0,
        char *VAR_1, int VAR_2)
{

 struct ipw2100_wpa_assoc_frame VAR_3;

 VAR_3.fixed_ie_mask = 0;


 FUNC_2(VAR_3.var_ie, VAR_1, VAR_2);
 VAR_3.var_ie_len = VAR_2;


 FUNC_1(VAR_0, 1);
 FUNC_0(VAR_0, &VAR_3, 0);
}
