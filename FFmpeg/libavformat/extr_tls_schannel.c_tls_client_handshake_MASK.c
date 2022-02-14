
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_13__ {int cbBuffer; int pvBuffer; } ;
struct TYPE_11__ {int tcp; int host; } ;
struct TYPE_12__ {int request_flags; int ctxt_handle; int ctxt_timestamp; int context_flags; int cred_handle; TYPE_2__ tls_shared; } ;
typedef TYPE_2__ TLSShared ;
typedef TYPE_3__ TLSContext ;
typedef int SecBufferDesc ;
typedef TYPE_4__ SecBuffer ;
typedef scalar_t__ SECURITY_STATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int *,int *,int ,int,int ,int ,int *,int ,int *,int *,int *,int *) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (TYPE_1__*,int ,char*,...) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_4__*,int ,int *,int ) ;
 int FUNC_7 (int *,TYPE_4__*,int) ;
 int FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_9(URLContext *VAR_10)
{
    TLSContext *VAR_11 = VAR_10->priv_data;
    TLSShared *VAR_12 = &VAR_11->tls_shared;
    SecBuffer VAR_13;
    SecBufferDesc VAR_14;
    SECURITY_STATUS VAR_15;
    int VAR_16;

    FUNC_6(&VAR_13, VAR_8, ((void*)0), 0);
    FUNC_7(&VAR_14, &VAR_13, 1);

    VAR_11->request_flags = VAR_6 | VAR_5 |
                       VAR_4 | VAR_3 |
                       VAR_7;

    VAR_15 = FUNC_3(&VAR_11->cred_handle, ((void*)0), VAR_12->host, VAR_11->request_flags, 0, 0,
                                         ((void*)0), 0, &VAR_11->ctxt_handle, &VAR_14, &VAR_11->context_flags,
                                         &VAR_11->ctxt_timestamp);
    if (VAR_15 != VAR_9) {
        FUNC_4(VAR_10, VAR_1, "Unable to create initial security context (0x%lx)\n", VAR_15);
        VAR_16 = VAR_0;
        goto fail;
    }

    VAR_16 = FUNC_5(VAR_12->tcp, VAR_13.pvBuffer, VAR_13.cbBuffer);
    FUNC_2(VAR_13.pvBuffer);
    if (VAR_16 < 0 || VAR_16 != VAR_13.cbBuffer) {
        FUNC_4(VAR_10, VAR_1, "Failed to send initial handshake data\n");
        VAR_16 = FUNC_0(VAR_2);
        goto fail;
    }

    return FUNC_8(VAR_10, 1);

fail:
    FUNC_1(&VAR_11->ctxt_handle);
    return VAR_16;
}
