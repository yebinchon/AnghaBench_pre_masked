
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int dwshut ;
struct TYPE_9__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_12__ {int cbBuffer; int pvBuffer; } ;
struct TYPE_10__ {int tcp; int host; } ;
struct TYPE_11__ {scalar_t__ connected; int ctxt_timestamp; int context_flags; int ctxt_handle; int request_flags; int cred_handle; TYPE_2__ tls_shared; } ;
typedef TYPE_2__ TLSShared ;
typedef TYPE_3__ TLSContext ;
typedef int SecBufferDesc ;
typedef TYPE_4__ SecBuffer ;
typedef scalar_t__ SECURITY_STATUS ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int ,int ,int ,int *,int ,int *,int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_4__*,int ,int *,int) ;
 int FUNC_6 (int *,TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_7(URLContext *VAR_6)
{
    TLSContext *VAR_7 = VAR_6->priv_data;
    TLSShared *VAR_8 = &VAR_7->tls_shared;
    int VAR_9;

    if (VAR_7->connected) {
        SecBufferDesc VAR_10;
        SecBuffer VAR_11;
        SECURITY_STATUS VAR_12;
        SecBuffer VAR_13;
        SecBufferDesc VAR_14;

        DWORD VAR_15 = VAR_1;
        FUNC_5(&VAR_11, VAR_3, &VAR_15, sizeof(VAR_15));
        FUNC_6(&VAR_10, &VAR_11, 1);

        VAR_12 = FUNC_0(&VAR_7->ctxt_handle, &VAR_10);
        if (VAR_12 != VAR_4)
            FUNC_3(VAR_6, VAR_0, "ApplyControlToken failed\n");

        FUNC_5(&VAR_13, VAR_2, ((void*)0), 0);
        FUNC_6(&VAR_14, &VAR_13, 1);

        VAR_12 = FUNC_2(&VAR_7->cred_handle, &VAR_7->ctxt_handle, VAR_8->host,
                                             VAR_7->request_flags, 0, 0, ((void*)0), 0, &VAR_7->ctxt_handle,
                                             &VAR_14, &VAR_7->context_flags, &VAR_7->ctxt_timestamp);
        if (VAR_12 == VAR_4 || VAR_12 == VAR_5) {
            VAR_9 = FUNC_4(VAR_8->tcp, VAR_13.pvBuffer, VAR_13.cbBuffer);
            FUNC_1(VAR_13.pvBuffer);
            if (VAR_9 < 0 || VAR_9 != VAR_13.cbBuffer)
                FUNC_3(VAR_6, VAR_0, "Failed to send close message\n");
        }

        VAR_7->connected = 0;
    }
    return 0;
}
