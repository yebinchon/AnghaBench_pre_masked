
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_registrar {int p2p_dev_addr; scalar_t__ pbc; scalar_t__ selected_registrar; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct wps_registrar*,int *) ;
 int FUNC_2 (struct wps_registrar*) ;

__attribute__((used)) static void FUNC_3(struct wps_registrar *VAR_1)
{
 VAR_1->selected_registrar = 0;
 VAR_1->pbc = 0;
 FUNC_0(VAR_1->p2p_dev_addr, 0, VAR_0);
 FUNC_1(VAR_1,
         (u8 *) "\xff\xff\xff\xff\xff\xff");
 FUNC_2(VAR_1);
}
