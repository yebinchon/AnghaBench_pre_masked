
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {int qos_enabled; struct b43_wl* wl; } ;
struct b43_wl {struct b43_qos_params* qos_params; } ;
struct b43_qos_params {int p; } ;


 unsigned int FUNC_0 (struct b43_qos_params*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*,int *,struct b43_qos_params) ;
 struct b43_qos_params* VAR_0 ;

__attribute__((used)) static void FUNC_5(struct b43_wldev *VAR_1)
{
 struct b43_wl *VAR_2 = VAR_1->wl;
 struct b43_qos_params *VAR_3;
 unsigned int VAR_4;

 if (!VAR_1->qos_enabled)
  return;

 FUNC_1(FUNC_0(VAR_0) !=
       FUNC_0(VAR_2->qos_params));

 FUNC_3(VAR_1);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->qos_params); VAR_4++) {
  VAR_3 = &(VAR_2->qos_params[VAR_4]);
  FUNC_4(VAR_1, &(VAR_3->p),
          VAR_0[VAR_4]);
 }
 FUNC_2(VAR_1);
}
