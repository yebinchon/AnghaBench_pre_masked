
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct wpa_group {int GN; int GN_igtk; int * IGTK; int vlan_id; int GTK_len; int * GTK; } ;
struct TYPE_2__ {scalar_t__ ieee80211w; int wpa_group; } ;
struct wpa_authenticator {TYPE_1__ conf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_0 (struct wpa_authenticator*,int ,int ,int *,int,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct wpa_authenticator *VAR_4,
                       struct wpa_group *VAR_5)
{
    int VAR_6 = 0;
    if (FUNC_0(VAR_4, VAR_5->vlan_id,
                 FUNC_1(VAR_4->conf.wpa_group),
                 (uint8_t *)VAR_3, VAR_5->GN,
                 VAR_5->GTK[VAR_5->GN - 1], VAR_5->GTK_len) < 0)
        VAR_6 = -1;
    return VAR_6;
}
