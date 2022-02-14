
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_12__ {scalar_t__ BufferType; int cbBuffer; int * pvBuffer; } ;
struct TYPE_10__ {int tcp; int host; } ;
struct TYPE_11__ {scalar_t__ enc_buf_offset; scalar_t__ enc_buf_size; int request_flags; int * enc_buf; TYPE_2__ tls_shared; int ctxt_timestamp; int context_flags; int ctxt_handle; int cred_handle; void* dec_buf_size; int * dec_buf; scalar_t__ dec_buf_offset; } ;
typedef TYPE_2__ TLSShared ;
typedef TYPE_3__ TLSContext ;
typedef int SecBufferDesc ;
typedef TYPE_4__ SecBuffer ;
typedef scalar_t__ SECURITY_STATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *,int *,int ,int,int ,int ,int *,int ,int *,int *,int *,int *) ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_3 (int **) ;
 int FUNC_4 (TYPE_1__*,int ,char*,...) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int **,void*) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (int ,int *,int) ;
 int FUNC_9 (TYPE_4__*,scalar_t__,int *,int) ;
 int FUNC_10 (int *,TYPE_4__*,int) ;
 int FUNC_11 (int *,int *,int) ;
 int FUNC_12 (int *,int *,int) ;

__attribute__((used)) static int FUNC_13(URLContext *VAR_18, int VAR_19)
{
    TLSContext *VAR_20 = VAR_18->priv_data;
    TLSShared *VAR_21 = &VAR_20->tls_shared;
    SECURITY_STATUS VAR_22;
    SecBuffer VAR_23[3] = { 0 };
    SecBufferDesc VAR_24;
    SecBuffer VAR_25[2];
    SecBufferDesc VAR_26;
    int VAR_27, VAR_28 = 0, VAR_29 = VAR_19;

    if (VAR_20->enc_buf == ((void*)0)) {
        VAR_20->enc_buf_offset = 0;
        VAR_28 = FUNC_6(&VAR_20->enc_buf, VAR_8);
        if (VAR_28 < 0)
            goto fail;
        VAR_20->enc_buf_size = VAR_8;
    }

    if (VAR_20->dec_buf == ((void*)0)) {
        VAR_20->dec_buf_offset = 0;
        VAR_28 = FUNC_6(&VAR_20->dec_buf, VAR_8);
        if (VAR_28 < 0)
            goto fail;
        VAR_20->dec_buf_size = VAR_8;
    }

    while (1) {
        if (VAR_20->enc_buf_size - VAR_20->enc_buf_offset < VAR_7) {
            VAR_20->enc_buf_size = VAR_20->enc_buf_offset + VAR_7;
            VAR_28 = FUNC_6(&VAR_20->enc_buf, VAR_20->enc_buf_size);
            if (VAR_28 < 0) {
                VAR_20->enc_buf_size = VAR_20->enc_buf_offset = 0;
                goto fail;
            }
        }

        if (VAR_29) {
            VAR_28 = FUNC_7(VAR_20->tls_shared.tcp, VAR_20->enc_buf + VAR_20->enc_buf_offset,
                             VAR_20->enc_buf_size - VAR_20->enc_buf_offset);
            if (VAR_28 < 0) {
                FUNC_4(VAR_18, VAR_2, "Failed to read handshake response\n");
                goto fail;
            }
            VAR_20->enc_buf_offset += VAR_28;
        }


        FUNC_9(&VAR_25[0], VAR_12, FUNC_5(VAR_20->enc_buf_offset), VAR_20->enc_buf_offset);
        FUNC_9(&VAR_25[1], VAR_10, ((void*)0), 0);
        FUNC_10(&VAR_26, VAR_25, 2);

        if (VAR_25[0].pvBuffer == ((void*)0)) {
            FUNC_4(VAR_18, VAR_2, "Failed to allocate input buffer\n");
            VAR_28 = FUNC_0(VAR_5);
            goto fail;
        }

        FUNC_11(VAR_25[0].pvBuffer, VAR_20->enc_buf, VAR_20->enc_buf_offset);


        FUNC_9(&VAR_23[0], VAR_12, ((void*)0), 0);
        FUNC_9(&VAR_23[1], VAR_9, ((void*)0), 0);
        FUNC_9(&VAR_23[2], VAR_10, ((void*)0), 0);
        FUNC_10(&VAR_24, VAR_23, 3);

        VAR_22 = FUNC_2(&VAR_20->cred_handle, &VAR_20->ctxt_handle, VAR_21->host, VAR_20->request_flags,
                                             0, 0, &VAR_26, 0, ((void*)0), &VAR_24, &VAR_20->context_flags,
                                             &VAR_20->ctxt_timestamp);
        FUNC_3(&VAR_25[0].pvBuffer);

        if (VAR_22 == VAR_13) {
            FUNC_4(VAR_18, VAR_1, "Received incomplete handshake, need more data\n");
            VAR_29 = 1;
            continue;
        }


        if (VAR_22 == VAR_17 &&
            !(VAR_20->request_flags & VAR_6)) {
            FUNC_4(VAR_18, VAR_3, "Client certificate has been requested, ignoring\n");
            VAR_20->request_flags |= VAR_6;
            VAR_29 = 0;
            continue;
        }


        if (VAR_22 == VAR_16 || VAR_22 == VAR_14) {
            for (VAR_27 = 0; VAR_27 < 3; VAR_27++) {
                if (VAR_23[VAR_27].BufferType == VAR_12 && VAR_23[VAR_27].cbBuffer > 0) {
                    VAR_28 = FUNC_8(VAR_20->tls_shared.tcp, VAR_23[VAR_27].pvBuffer, VAR_23[VAR_27].cbBuffer);
                    if (VAR_28 < 0 || VAR_28 != VAR_23[VAR_27].cbBuffer) {
                        FUNC_4(VAR_18, VAR_3, "Failed to send handshake data\n");
                        VAR_28 = FUNC_0(VAR_4);
                        goto fail;
                    }
                }

                if (VAR_23[VAR_27].pvBuffer != ((void*)0)) {
                    FUNC_1(VAR_23[VAR_27].pvBuffer);
                    VAR_23[VAR_27].pvBuffer = ((void*)0);
                }
            }
        } else {
            if (VAR_22 == VAR_15)
                FUNC_4(VAR_18, VAR_2, "SNI or certificate check failed\n");
            else
                FUNC_4(VAR_18, VAR_2, "Creating security context failed (0x%lx)\n", VAR_22);
            VAR_28 = VAR_0;
            goto fail;
        }

        if (VAR_25[1].BufferType == VAR_11 && VAR_25[1].cbBuffer > 0) {
            if (VAR_20->enc_buf_offset > VAR_25[1].cbBuffer) {
                FUNC_12(VAR_20->enc_buf, (VAR_20->enc_buf + VAR_20->enc_buf_offset) - VAR_25[1].cbBuffer,
                        VAR_25[1].cbBuffer);
                VAR_20->enc_buf_offset = VAR_25[1].cbBuffer;
                if (VAR_22 == VAR_16) {
                    VAR_29 = 0;
                    continue;
                }
            }
        } else {
            VAR_20->enc_buf_offset = 0;
        }

        if (VAR_22 == VAR_16) {
            VAR_29 = 1;
            continue;
        }

        break;
    }

    return 0;

fail:

    for (VAR_27 = 0; VAR_27 < 3; VAR_27++) {
        if (VAR_23[VAR_27].pvBuffer != ((void*)0)) {
            FUNC_1(VAR_23[VAR_27].pvBuffer);
            VAR_23[VAR_27].pvBuffer = ((void*)0);
        }
    }

    return VAR_28;
}
