
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_registrar {int devices; int extra_cred; int pbc_sessions; int nfc_pw_tokens; int pins; } ;


 int FUNC_0 (struct wps_registrar*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct wps_registrar *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;







 FUNC_4(VAR_0->pbc_sessions);
 FUNC_1(VAR_0->extra_cred);
 FUNC_2(VAR_0->devices);
 FUNC_0(VAR_0);
}
