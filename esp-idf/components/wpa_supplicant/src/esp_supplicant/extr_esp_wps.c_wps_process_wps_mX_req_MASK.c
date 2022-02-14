
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wps_sm {int wps; int wps_msg_timeout_timer; int current_identifier; } ;
struct wpabuf {int dummy; } ;
struct eap_expand {int opcode; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 struct wps_sm* VAR_7 ;
 int FUNC_1 (int ,char*,...) ;
 struct wpabuf* FUNC_2 (int*,int) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (int ,int ,struct wpabuf*) ;
 scalar_t__ FUNC_5 (struct wpabuf**,int,int*,int,int) ;

int FUNC_6(u8 *VAR_8, int VAR_9, enum wps_process_res *VAR_10)
{
    struct wps_sm *VAR_11 = VAR_7;
    static struct wpabuf *VAR_12 = ((void*)0);
    struct eap_expand *VAR_13;
    int VAR_14 = 0;
    u8 *VAR_15;
    u8 VAR_16;
    int VAR_17;
    u16 VAR_18 = 0;

    if (!VAR_11) {
        return VAR_0;
    }

    VAR_13 = (struct eap_expand *) VAR_8;
    FUNC_1(VAR_2, "wps process mX req: len %d, tlen %d", VAR_9, VAR_14);

    VAR_16 = *(u8 *)(VAR_8 + sizeof(struct eap_expand));
    if (VAR_16 & VAR_5) {
        VAR_15 = VAR_8 + sizeof(struct eap_expand) + 1 + 2;
        VAR_17 = VAR_9 - (sizeof(struct eap_expand) + 1 + 2);
        VAR_18 = *(u16 *)(VAR_8 + sizeof(struct eap_expand) + 1);
        VAR_14 = ((VAR_18 & 0xff) << 8) | ((VAR_18 >> 8) & 0xff);
    } else {
        VAR_15 = VAR_8 + sizeof(struct eap_expand) + 1;
        VAR_17 = VAR_9 - (sizeof(struct eap_expand) + 1);
        VAR_14 = VAR_17;
    }

    if ((VAR_16 & VAR_6) || VAR_12 != ((void*)0)) {
        FUNC_1(VAR_2, "rx frag msg id:%d, flag:%d, frag_len: %d, tot_len: %d, be_tot_len:%d", VAR_11->current_identifier, VAR_16, VAR_17, VAR_14, VAR_18);
        if (VAR_1 != FUNC_5(&VAR_12, VAR_14, VAR_15, VAR_17, VAR_16)) {
            if (VAR_12) {
                FUNC_3(VAR_12);
                VAR_12 = ((void*)0);
            }
            return VAR_0;
        }
        if (VAR_16 & VAR_6) {
            if (VAR_10) {
                *VAR_10 = VAR_4;
            }
            return VAR_1;
        }
    } else {
        if (VAR_12) {
            FUNC_1(VAR_3, "something is wrong, frag buf is not freed");
            FUNC_3(VAR_12);
            VAR_12 = ((void*)0);
        }
        VAR_12 = FUNC_2(VAR_15, VAR_14);
    }

    if (!VAR_12) {
        return VAR_0;
    }

    FUNC_0(&VAR_11->wps_msg_timeout_timer);

    if (VAR_10) {
        *VAR_10 = FUNC_4(VAR_11->wps, VAR_13->opcode, VAR_12);
    } else {
        FUNC_4(VAR_11->wps, VAR_13->opcode, VAR_12);
    }

    if (VAR_12) {
        FUNC_3(VAR_12);
        VAR_12 = ((void*)0);
    }
    return VAR_1;
}
