
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_data {int * dh_pubkey_r; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int const*,size_t) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct wps_data*) ;

__attribute__((used)) static int FUNC_4(struct wps_data *VAR_1, const u8 *VAR_2,
         size_t VAR_3)
{
 if (VAR_2 == ((void*)0) || VAR_3 == 0) {
  FUNC_0(VAR_0, "WPS: No Public Key received");
  return -1;
 }

 FUNC_2(VAR_1->dh_pubkey_r);
 VAR_1->dh_pubkey_r = FUNC_1(VAR_2, VAR_3);
 if (VAR_1->dh_pubkey_r == ((void*)0))
  return -1;

 FUNC_0(VAR_0, "process pubkey start\n");

 if (FUNC_3(VAR_1) < 0) {
  return -1;
 }

 FUNC_0(VAR_0, "process pubkey finish\n");

 return 0;
}
