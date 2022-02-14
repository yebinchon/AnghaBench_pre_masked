
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wps_registrar {scalar_t__ sel_reg_dev_password_id_override; int sel_reg_union; scalar_t__ pbc; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct wpabuf*,int) ;

__attribute__((used)) static int FUNC_2(struct wps_registrar *VAR_4,
          struct wpabuf *VAR_5)
{
 u16 VAR_6 = VAR_4->pbc ? VAR_2 : VAR_1;
 if (!VAR_4->sel_reg_union)
  return 0;
 if (VAR_4->sel_reg_dev_password_id_override >= 0)
  VAR_6 = VAR_4->sel_reg_dev_password_id_override;
 FUNC_0(VAR_3, "WPS:  * Device Password ID (%d)", VAR_6);
 FUNC_1(VAR_5, VAR_0);
 FUNC_1(VAR_5, 2);
 FUNC_1(VAR_5, VAR_6);
 return 0;
}
