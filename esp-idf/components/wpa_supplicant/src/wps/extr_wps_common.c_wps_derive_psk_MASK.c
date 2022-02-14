
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_data {int psk2; int psk1; int authkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int const*,size_t,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,char*,int const*,size_t) ;
 int FUNC_3 (int ,char*,int ,int ) ;

void FUNC_4(struct wps_data *VAR_4, const u8 *VAR_5,
      size_t VAR_6)
{
 u8 VAR_7[VAR_1];

 FUNC_0(VAR_4->authkey, VAR_2, VAR_5,
                               (VAR_6 + 1) / 2, VAR_7);
 FUNC_1(VAR_4->psk1, VAR_7, VAR_3);
 FUNC_0(VAR_4->authkey, VAR_2,
              VAR_5 + (VAR_6 + 1) / 2,
              VAR_6 / 2, VAR_7);
 FUNC_1(VAR_4->psk2, VAR_7, VAR_3);

 FUNC_2(VAR_0, "WPS: Device Password",
         VAR_5, VAR_6);
 FUNC_3(VAR_0, "WPS: PSK1", VAR_4->psk1, VAR_3);
 FUNC_3(VAR_0, "WPS: PSK2", VAR_4->psk2, VAR_3);
}
