
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_15__ {int dwFlags; int dwVersion; int member_0; } ;
struct TYPE_13__ {scalar_t__ verify; scalar_t__ listen; } ;
struct TYPE_14__ {int connected; int cred_timestamp; int cred_handle; TYPE_2__ tls_shared; } ;
typedef TYPE_2__ TLSShared ;
typedef TYPE_3__ TLSContext ;
typedef int TCHAR ;
typedef scalar_t__ SECURITY_STATUS ;
typedef TYPE_4__ SCHANNEL_CRED ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,int ,int *,TYPE_4__*,int *,int *,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (TYPE_1__*,int ,char*,...) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,char const*,int **) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_12, const char *VAR_13, int VAR_14, AVDictionary **VAR_15)
{
    TLSContext *VAR_16 = VAR_12->priv_data;
    TLSShared *VAR_17 = &VAR_16->tls_shared;
    SECURITY_STATUS VAR_18;
    SCHANNEL_CRED VAR_19 = { 0 };
    int VAR_20;

    if ((VAR_20 = FUNC_3(VAR_17, VAR_12, VAR_13, VAR_15)) < 0)
        goto fail;

    if (VAR_17->listen) {
        FUNC_2(VAR_12, VAR_1, "TLS Listen Sockets with SChannel is not implemented.\n");
        VAR_20 = FUNC_0(VAR_2);
        goto fail;
    }


    VAR_19.dwVersion = VAR_3;

    if (VAR_17->verify)
        VAR_19.dwFlags = VAR_4 |
                                VAR_8;
    else
        VAR_19.dwFlags = VAR_7 |
                                VAR_5 |
                                VAR_6;


    VAR_18 = FUNC_1(((void*)0), (TCHAR *)VAR_11, VAR_9,
                                        ((void*)0), &VAR_19, ((void*)0), ((void*)0), &VAR_16->cred_handle,
                                        &VAR_16->cred_timestamp);
    if (VAR_18 != VAR_10) {
        FUNC_2(VAR_12, VAR_1, "Unable to acquire security credentials (0x%lx)\n", VAR_18);
        VAR_20 = VAR_0;
        goto fail;
    }

    VAR_20 = FUNC_4(VAR_12);
    if (VAR_20 < 0)
        goto fail;

    VAR_16->connected = 1;

    return 0;

fail:
    FUNC_5(VAR_12);
    return VAR_20;
}
