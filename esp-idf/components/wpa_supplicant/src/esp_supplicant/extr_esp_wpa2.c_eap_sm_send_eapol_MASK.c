
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (struct eap_sm*,int ,int ,int ,size_t*,int *) ;
 int FUNC_2 (struct eap_sm*,int *,int ,int *,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*) ;

int FUNC_7(struct eap_sm *VAR_7, struct wpabuf *VAR_8)
{
    size_t VAR_9;
    int VAR_10;
    u8 *VAR_11 = ((void*)0);

    u8 VAR_12[6];
    VAR_10 = FUNC_0(VAR_12);

    if (VAR_10 != 0) {
        FUNC_4(VAR_5, "bssid is empty \n");
        return VAR_6;
    }

    VAR_11 = FUNC_1(VAR_7, VAR_4,
                                 FUNC_5(VAR_8), FUNC_6(VAR_8),
                                 &VAR_9, ((void*)0));
    if (!VAR_11) {
        return VAR_0;
    }

    VAR_10 = FUNC_2(VAR_7, VAR_12, VAR_3, VAR_11, VAR_9);
    FUNC_3(VAR_11);
    if (VAR_10) {
        return VAR_1;
    }

    return VAR_2;
}
