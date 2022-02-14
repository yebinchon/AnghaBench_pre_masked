
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 struct eap_sm* VAR_8 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (struct eap_sm*,int ,int *,int ,size_t*,int *) ;
 int FUNC_3 (struct eap_sm*,int *,int ,int *,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static int FUNC_7(void)
{
    struct eap_sm *VAR_9 = VAR_8;
    int VAR_10 = 0;
    u8 VAR_11[6];
    u8 *VAR_12;
    size_t VAR_13;

    if (!VAR_9) {
        return VAR_0;
    }
    if (FUNC_6()) {
        FUNC_5(VAR_4,
                "RSN: PMKSA caching - do not send EAPOL-Start");
        return VAR_0;
    }

    VAR_10 = FUNC_0(VAR_11);
    if (VAR_10 != 0) {
        FUNC_5(VAR_5, "bssid is empty!");
        return VAR_7;
    }

    VAR_12 = FUNC_2(VAR_9, VAR_3, (u8 *)"", 0, &VAR_13, ((void*)0));
    if (!VAR_12) {
        return VAR_0;
    }

    FUNC_1(VAR_6);
    FUNC_3(VAR_9, VAR_11, VAR_2, VAR_12, VAR_13);
    FUNC_4(VAR_12);
    return VAR_1;
}
