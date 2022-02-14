
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_sm {int pmk; int pmk_len; TYPE_1__* cur_pmksa; } ;
struct TYPE_2__ {int pmk; int pmk_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(struct wpa_sm *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;

 if (VAR_1->cur_pmksa) {
  VAR_1->pmk_len = VAR_1->cur_pmksa->pmk_len;
  FUNC_0(VAR_1->pmk, VAR_1->cur_pmksa->pmk, VAR_1->pmk_len);
 } else {
  VAR_1->pmk_len = VAR_0;
  FUNC_1(VAR_1->pmk, 0, VAR_0);
 }
}
