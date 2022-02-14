
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int ssl_ctx; } ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (struct eap_sm*,char*) ;
 int FUNC_2 (struct eap_sm*) ;
 int FUNC_3 (struct eap_sm*) ;
 int FUNC_4 (struct eap_sm*) ;
 struct eap_sm* VAR_1 ;
 int FUNC_5 (struct eap_sm*) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    struct eap_sm *VAR_5 = VAR_1;

    if (VAR_5 == ((void*)0)) {
        return;
    }

    FUNC_3(VAR_5);
    FUNC_2(VAR_5);
    FUNC_1(VAR_5, "EAP deinit");
    FUNC_4(VAR_5);
    FUNC_6(VAR_5->ssl_ctx);




    if (FUNC_0((&VAR_4)) != ((void*)0)) {
        FUNC_8();
    }

    if (VAR_2) {
        FUNC_7(VAR_2);
    }
    VAR_2 = ((void*)0);

    if (VAR_3) {
        FUNC_7(VAR_3);
        VAR_3 = ((void*)0);
        FUNC_10(VAR_0, "wpa2 eap_peer_sm_deinit: free data lock");
    }

    FUNC_5(VAR_5);
    VAR_1 = ((void*)0);
}
