
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int wpa; int wpa_key_mgmt; } ;
struct wpa_authenticator {int wpa_ie_len; int * wpa_ie; TYPE_1__ conf; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;
 int FUNC_5 (TYPE_1__*,int *,int,int *) ;
 int FUNC_6 (TYPE_1__*,int *,int) ;

int FUNC_7(struct wpa_authenticator *VAR_2)
{
 u8 *VAR_3, VAR_4[128];
 int VAR_5;

 VAR_3 = VAR_4;

 if (VAR_2->conf.wpa & VAR_0) {
  VAR_5 = FUNC_5(&VAR_2->conf,
           VAR_3, VAR_4 + sizeof(VAR_4) - VAR_3, ((void*)0));
  if (VAR_5 < 0)
   return VAR_5;
  VAR_3 += VAR_5;
 }
 if (VAR_2->conf.wpa & VAR_1) {
  VAR_5 = FUNC_6(&VAR_2->conf,
           VAR_3, VAR_4 + sizeof(VAR_4) - VAR_3);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_3 += VAR_5;
 }

 FUNC_1(VAR_2->wpa_ie);
 VAR_2->wpa_ie = FUNC_2(VAR_3 - VAR_4);
 if (VAR_2->wpa_ie == ((void*)0))
  return -1;
 FUNC_0(VAR_2->wpa_ie, VAR_4, VAR_3 - VAR_4);
 VAR_2->wpa_ie_len = VAR_3 - VAR_4;

 return 0;
}
