
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libipw_network {scalar_t__ ssid_len; scalar_t__ channel; int ssid; int bssid; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static inline int FUNC_2(struct libipw_network *VAR_0,
      struct libipw_network *VAR_1)
{



 return ((VAR_0->ssid_len == VAR_1->ssid_len) &&
  (VAR_0->channel == VAR_1->channel) &&
  FUNC_0(VAR_0->bssid, VAR_1->bssid) &&
  !FUNC_1(VAR_0->ssid, VAR_1->ssid, VAR_0->ssid_len));
}
