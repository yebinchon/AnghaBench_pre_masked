
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct wpabuf {int dummy; } ;
struct eap_sm {scalar_t__ current_identifier; struct wpabuf* lastRespData; int eapKeyDataLen; int * eap_method_priv; struct eap_method const* m; scalar_t__ eapKeyData; } ;
struct eap_method_ret {int dummy; } ;
struct eap_method {scalar_t__ vendor; scalar_t__ method; scalar_t__ (* getKey ) (struct eap_sm*,int *,int *) ;scalar_t__ (* isKeyAvailable ) (struct eap_sm*,int *) ;struct wpabuf* (* process ) (struct eap_sm*,int *,struct eap_method_ret*,struct wpabuf*) ;int * (* init ) (struct eap_sm*) ;} ;
struct eap_hdr {scalar_t__ identifier; int length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (struct eap_sm*,char*) ;
 struct eap_method* FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct eap_sm*,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (struct eap_sm*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct eap_sm*,struct wpabuf*) ;
 int FUNC_8 (scalar_t__) ;
 struct wpabuf* FUNC_9 (struct eap_sm*,int *,struct eap_method_ret*,struct wpabuf*) ;
 int * FUNC_10 (struct eap_sm*) ;
 struct wpabuf* FUNC_11 (struct eap_sm*,int *,struct eap_method_ret*,struct wpabuf*) ;
 scalar_t__ FUNC_12 (struct eap_sm*,int *) ;
 scalar_t__ FUNC_13 (struct eap_sm*,int *,int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (struct wpabuf*) ;
 scalar_t__ FUNC_17 (struct wpabuf*) ;
 size_t FUNC_18 (struct wpabuf*) ;

int FUNC_19(struct eap_sm *VAR_10, struct wpabuf *VAR_11)
{
    size_t VAR_12;
    u32 VAR_13, VAR_14;
    u8 VAR_15, *VAR_16;
    struct eap_hdr *VAR_17;
    const struct eap_method *VAR_18 = ((void*)0);
    struct wpabuf *VAR_19 = ((void*)0);
    struct eap_method_ret VAR_20;
    int VAR_21 = 0;

    if (VAR_11 == ((void*)0) || FUNC_18(VAR_11) < sizeof(*VAR_17)) {
        return VAR_4;
    }

    VAR_17 = (struct eap_hdr *)FUNC_17(VAR_11);
    VAR_12 = FUNC_2(VAR_17->length);
    if (VAR_12 > FUNC_18(VAR_11)) {
        return VAR_5;
    }

    if (VAR_17->identifier == VAR_10->current_identifier) {

        VAR_19 = VAR_10->lastRespData;
        goto send_resp;
    }

    VAR_10->current_identifier = VAR_17->identifier;

    VAR_16 = (u8 *)(VAR_17 + 1);
    VAR_15 = *VAR_16++;
    if (VAR_15 == VAR_1) {
        VAR_19 = (struct wpabuf *)FUNC_5(VAR_10, VAR_17->identifier, 0);
        goto send_resp;
    } else if (VAR_15 == VAR_2) {

        goto out;
    } else if (VAR_15 == VAR_0) {
        if (VAR_12 < sizeof(*VAR_17) + 8) {
            return VAR_5;
        }
        VAR_13 = FUNC_0(VAR_16);
        VAR_16 += 3;
        VAR_14 = FUNC_1(VAR_16);
    } else {
        VAR_13 = VAR_3;
        VAR_14 = VAR_15;
    }

    if (VAR_10->m && VAR_10->m->process && VAR_10->eap_method_priv &&
            VAR_13 == VAR_10->m->vendor &&
            VAR_14 == VAR_10->m->method) {
        VAR_19 = VAR_10->m->process(VAR_10, VAR_10->eap_method_priv,
                              &VAR_20, VAR_11);
    } else {
        VAR_18 = FUNC_4(VAR_13, VAR_14);
        if (VAR_18 == ((void*)0)) {
            goto build_nak;
        }
        if (VAR_10->m) {
            FUNC_3(VAR_10, "GET_METHOD");
        }
        VAR_10->m = VAR_18;
        VAR_10->eap_method_priv = VAR_10->m->init(VAR_10);
        if (VAR_10->eap_method_priv == ((void*)0)) {
            FUNC_15(VAR_7, "Method private structure allocated failure\n");
            VAR_10->m = ((void*)0);
            goto build_nak;
        }

        if (VAR_10->m->process) {
            VAR_19 = VAR_10->m->process(VAR_10, VAR_10->eap_method_priv, &VAR_20, VAR_11);
        }
    }

    if (VAR_10->m->isKeyAvailable && VAR_10->m->getKey &&
            VAR_10->m->isKeyAvailable(VAR_10, VAR_10->eap_method_priv)) {
        if (VAR_10->eapKeyData) {
            FUNC_8(VAR_10->eapKeyData);
        }
        VAR_10->eapKeyData = VAR_10->m->getKey(VAR_10, VAR_10->eap_method_priv,
                                       &VAR_10->eapKeyDataLen);
    }
    goto send_resp;

build_nak:
    VAR_19 = (struct wpabuf *)FUNC_6(VAR_10, VAR_15, VAR_17->identifier);
    if (VAR_19 == ((void*)0)) {
        return VAR_5;
    }
    VAR_21 = VAR_5;

send_resp:
    if (VAR_19 == ((void*)0)) {
        FUNC_15(VAR_7, "Response build fail, return.");
        return VAR_5;
    }
    VAR_21 = FUNC_7(VAR_10, VAR_19);
    if (VAR_21 == VAR_6) {
        if (VAR_19 != VAR_10->lastRespData) {
            FUNC_16(VAR_10->lastRespData);
            VAR_10->lastRespData = VAR_19;
        }
    } else {
        FUNC_16(VAR_10->lastRespData);
        VAR_10->lastRespData = ((void*)0);
        FUNC_16(VAR_19);
        VAR_19 = ((void*)0);

        if (VAR_21 == VAR_9) {
            VAR_21 = VAR_8;
            FUNC_14(VAR_8);
        }
    }
out:
    return VAR_21;
}
