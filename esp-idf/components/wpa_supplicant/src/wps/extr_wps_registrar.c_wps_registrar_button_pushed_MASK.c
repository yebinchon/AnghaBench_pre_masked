
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_registrar {int selected_registrar; int pbc; int p2p_dev_addr; scalar_t__ force_pbc_overlap; int wps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct wps_registrar*,int *) ;
 scalar_t__ FUNC_5 (struct wps_registrar*,int *,int *) ;
 int FUNC_6 (struct wps_registrar*) ;

int FUNC_7(struct wps_registrar *VAR_2,
    const u8 *VAR_3)
{
 if (VAR_3 == ((void*)0) &&
     FUNC_5(VAR_2, ((void*)0), ((void*)0))) {
  FUNC_2(VAR_1, "WPS: PBC overlap - do not start PBC "
      "mode");
  FUNC_3(VAR_2->wps);
  return -2;
 }
 FUNC_2(VAR_1, "WPS: Button pushed - PBC mode started");
 VAR_2->force_pbc_overlap = 0;
 VAR_2->selected_registrar = 1;
 VAR_2->pbc = 1;
 if (VAR_3)
  FUNC_0(VAR_2->p2p_dev_addr, VAR_3, VAR_0);
 else
  FUNC_1(VAR_2->p2p_dev_addr, 0, VAR_0);
 FUNC_4(VAR_2,
      (u8 *) "\xff\xff\xff\xff\xff\xff");
 FUNC_6(VAR_2);

 return 0;
}
