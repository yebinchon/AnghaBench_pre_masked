
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_pbc_session {struct wps_pbc_session* next; } ;


 int FUNC_0 (struct wps_pbc_session*) ;

__attribute__((used)) static void FUNC_1(struct wps_pbc_session *VAR_0)
{
 struct wps_pbc_session *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;
  FUNC_0(VAR_1);
 }
}
