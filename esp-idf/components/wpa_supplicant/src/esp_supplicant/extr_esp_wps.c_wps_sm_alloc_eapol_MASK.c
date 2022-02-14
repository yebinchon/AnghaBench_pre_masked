
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wps_sm {int eapol_version; } ;
struct l2_ethhdr {int dummy; } ;
struct ieee802_1x_hdr {int length; int type; int version; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee802_1x_hdr*,void const*,int ) ;
 int FUNC_2 (struct ieee802_1x_hdr*,int ,int ) ;
 void* FUNC_3 (size_t) ;

u8 *FUNC_4(struct wps_sm *VAR_0, u8 VAR_1,
                       const void *VAR_2, u16 VAR_3,
                       size_t *VAR_4, void **VAR_5)
{
    void *VAR_6;
    struct ieee802_1x_hdr *VAR_7;

    *VAR_4 = sizeof(struct ieee802_1x_hdr) + VAR_3;

    VAR_6 = FUNC_3(*VAR_4 + sizeof(struct l2_ethhdr));

    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_7 = (struct ieee802_1x_hdr *)((char *)VAR_6 + sizeof(struct l2_ethhdr));

    VAR_7->version = VAR_0->eapol_version;
    VAR_7->type = VAR_1;
    VAR_7->length = FUNC_0(VAR_3);

    if (VAR_2) {
        FUNC_1(VAR_7 + 1, VAR_2, VAR_3);
    } else {
        FUNC_2(VAR_7 + 1, 0, VAR_3);
    }

    if (VAR_5) {
        *VAR_5 = VAR_7 + 1;
    }

    return (u8 *) VAR_7;
}
