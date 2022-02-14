
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int current_identifier; int * ssl_ctx; int ownaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct eap_sm*) ;
 int FUNC_1 (struct eap_sm*) ;
 int FUNC_2 (struct eap_sm*) ;
 int FUNC_3 (struct eap_sm*,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 struct eap_sm* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (struct eap_sm*) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int VAR_17 ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int ,char*,int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_16(void)
{
    int VAR_18 = 0;
    struct eap_sm *VAR_19;

    if (VAR_10) {
        FUNC_11(VAR_3, "WPA2: wpa2 sm not null, deinit it");
        FUNC_4();
    }

    VAR_19 = (struct eap_sm *)FUNC_7(sizeof(*VAR_19));
    if (VAR_19 == ((void*)0)) {
        return VAR_0;
    }

    VAR_14 = FUNC_14();
    if (!VAR_14) {
        FUNC_11(VAR_3, "wpa2 eap_peer_sm_init: failed to alloc data lock");
        return VAR_0;
    }

    FUNC_10(VAR_8);
    VAR_19->current_identifier = 0xff;
    FUNC_5(VAR_7, VAR_19->ownaddr);
    VAR_18 = FUNC_1(VAR_19);
    if (VAR_18) {
        FUNC_11(VAR_3, "eap_peer_blob_init failed\n");
        FUNC_6(VAR_19);
        return VAR_1;
    }

    VAR_18 = FUNC_3(VAR_19, VAR_11, VAR_12);
    if (VAR_18) {
        FUNC_11(VAR_3, "eap_peer_config_init failed\n");
        FUNC_0(VAR_19);
        FUNC_6(VAR_19);
        return VAR_1;
    }

    VAR_19->ssl_ctx = FUNC_8();
    if (VAR_19->ssl_ctx == ((void*)0)) {
        FUNC_11(VAR_5, "SSL: Failed to initialize TLS "
                   "context.");
        FUNC_0(VAR_19);
        FUNC_2(VAR_19);
        FUNC_6(VAR_19);
        return VAR_1;
    }

    FUNC_9();

    VAR_10 = VAR_19;
    return VAR_2;
}
