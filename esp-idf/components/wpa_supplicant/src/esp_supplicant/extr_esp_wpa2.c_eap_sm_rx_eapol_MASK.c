
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
typedef int u32 ;
struct wpa2_rx_param {int len; int * sa; int * buf; int * bssid; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int,int *) ;
 struct eap_sm* VAR_4 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct wpa2_rx_param*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct wpa2_rx_param*) ;

__attribute__((used)) static int FUNC_6(u8 *VAR_5, u8 *VAR_6, u32 VAR_7, uint8_t *VAR_8)
{
    struct eap_sm *VAR_9 = VAR_4;

    if (!VAR_9) {
        return VAR_1;
    }
    return FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8);

}
