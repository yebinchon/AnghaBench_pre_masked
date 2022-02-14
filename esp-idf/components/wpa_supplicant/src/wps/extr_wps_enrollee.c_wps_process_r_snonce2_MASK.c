
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_data {int wps; int config_error; int peer_hash2; int authkey; int dh_pubkey_r; int dh_pubkey_e; int * psk2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ,int ,int,int const**,size_t*,int *) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,char*,int const*,size_t) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int) ;

__attribute__((used)) static int FUNC_7(struct wps_data *VAR_7, const u8 *VAR_8)
{
 u8 VAR_9[VAR_1];
 const u8 *VAR_10[4];
 size_t VAR_11[4];

 if (VAR_8 == ((void*)0)) {
  FUNC_3(VAR_0, "WPS: No R-SNonce2 received");
  return -1;
 }

 FUNC_2(VAR_0, "WPS: R-SNonce2", VAR_8,
   VAR_6);


 VAR_10[0] = VAR_8;
 VAR_11[0] = VAR_6;
 VAR_10[1] = VAR_7->psk2;
 VAR_11[1] = VAR_5;
 VAR_10[2] = FUNC_4(VAR_7->dh_pubkey_e);
 VAR_11[2] = FUNC_5(VAR_7->dh_pubkey_e);
 VAR_10[3] = FUNC_4(VAR_7->dh_pubkey_r);
 VAR_11[3] = FUNC_5(VAR_7->dh_pubkey_r);

 FUNC_0(VAR_7->authkey, VAR_2, 4, VAR_10, VAR_11, VAR_9);

 if (FUNC_1(VAR_7->peer_hash2, VAR_9, VAR_4) != 0) {
  FUNC_3(VAR_0, "WPS: R-Hash2 derived from R-S2 does "
      "not match with the pre-committed value");
  VAR_7->config_error = VAR_3;
  FUNC_6(VAR_7->wps, 1, 2);
  return -1;
 }

 FUNC_3(VAR_0, "WPS: Registrar proved knowledge of the second "
     "half of the device password");

 return 0;
}
