
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_group {int GN; int GN_igtk; int * IGTK; int GNonce; int GMK; int Counter; int GTK_len; int * GTK; } ;
struct TYPE_2__ {scalar_t__ ieee80211w; } ;
struct wpa_authenticator {int addr; TYPE_1__ conf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct wpa_authenticator *VAR_4,
              struct wpa_group *VAR_5)
{
    int VAR_6 = 0;

    FUNC_1(VAR_5->GNonce, VAR_5->Counter, VAR_3);
    FUNC_0(VAR_5->Counter, VAR_3);

    if (FUNC_2(VAR_5->GMK, "Group key expansion",
               VAR_4->addr, VAR_5->GNonce,
               VAR_5->GTK[VAR_5->GN - 1], VAR_5->GTK_len) < 0)
        VAR_6 = -1;
    FUNC_3(VAR_0, "GTK",
            VAR_5->GTK[VAR_5->GN - 1], VAR_5->GTK_len);
    return VAR_6;
}
