
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_sm {size_t pmk_len; size_t xxkey_len; int key_mgmt; int network_ctx; int own_addr; int pmksa; int xxkey; int pmk; } ;


 int FUNC_0 (int ,int const*,size_t) ;
 int FUNC_1 (int ,int const*,size_t,int *,int ,int const*,int ,int ,int ) ;

void FUNC_2(struct wpa_sm *VAR_0, const u8 *VAR_1, size_t VAR_2,
      const u8 *VAR_3)
{
 if (VAR_0 == ((void*)0))
  return;

 VAR_0->pmk_len = VAR_2;
 FUNC_0(VAR_0->pmk, VAR_1, VAR_2);







 if (VAR_3) {
  FUNC_1(VAR_0->pmksa, VAR_1, VAR_2, ((void*)0), 0,
    VAR_3, VAR_0->own_addr,
    VAR_0->network_ctx, VAR_0->key_mgmt);
 }
}
