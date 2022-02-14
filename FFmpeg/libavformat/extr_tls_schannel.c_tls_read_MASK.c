
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_13__ {scalar_t__ BufferType; int cbBuffer; int * pvBuffer; } ;
struct TYPE_11__ {int tcp; } ;
struct TYPE_12__ {int dec_buf_offset; int sspi_close_notify; int connection_closed; int enc_buf_size; int enc_buf_offset; int dec_buf_size; int * dec_buf; int * enc_buf; int ctxt_handle; TYPE_2__ tls_shared; } ;
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
 scalar_t__ FUNC_1 (int *,int *,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (TYPE_1__*,int ,char*,...) ;
 int FUNC_4 (int **,int) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (TYPE_4__*,scalar_t__,int *,int) ;
 int FUNC_7 (int *,TYPE_4__*,int) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_11(URLContext *VAR_14, uint8_t *VAR_15, int VAR_16)
{
    TLSContext *VAR_17 = VAR_14->priv_data;
    TLSShared *VAR_18 = &VAR_17->tls_shared;
    SECURITY_STATUS VAR_19 = VAR_11;
    SecBuffer VAR_20[4];
    SecBufferDesc VAR_21;
    int VAR_22, VAR_23;
    int VAR_24 = VAR_16 + VAR_6;

    if (VAR_16 <= VAR_17->dec_buf_offset)
        goto cleanup;

    if (VAR_17->sspi_close_notify)
        goto cleanup;

    if (!VAR_17->connection_closed) {
        VAR_22 = VAR_17->enc_buf_size - VAR_17->enc_buf_offset;
        if (VAR_22 < VAR_6 || VAR_17->enc_buf_size < VAR_24) {
            VAR_17->enc_buf_size = VAR_17->enc_buf_offset + VAR_6;
            if (VAR_17->enc_buf_size < VAR_24)
                VAR_17->enc_buf_size = VAR_24;
            VAR_23 = FUNC_4(&VAR_17->enc_buf, VAR_17->enc_buf_size);
            if (VAR_23 < 0) {
                VAR_17->enc_buf_size = VAR_17->enc_buf_offset = 0;
                return VAR_23;
            }
        }

        VAR_23 = FUNC_5(VAR_18->tcp, VAR_17->enc_buf + VAR_17->enc_buf_offset,
                         VAR_17->enc_buf_size - VAR_17->enc_buf_offset);
        if (VAR_23 == VAR_0) {
            VAR_17->connection_closed = 1;
            VAR_23 = 0;
        } else if (VAR_23 < 0) {
            FUNC_3(VAR_14, VAR_2, "Unable to read from socket\n");
            return VAR_23;
        }

        VAR_17->enc_buf_offset += VAR_23;
    }

    while (VAR_17->enc_buf_offset > 0 && VAR_19 == VAR_11 && VAR_17->dec_buf_offset < VAR_16) {

        FUNC_6(&VAR_20[0], VAR_7, VAR_17->enc_buf, VAR_17->enc_buf_offset);


        FUNC_6(&VAR_20[1], VAR_8, ((void*)0), 0);
        FUNC_6(&VAR_20[2], VAR_8, ((void*)0), 0);
        FUNC_6(&VAR_20[3], VAR_8, ((void*)0), 0);
        FUNC_7(&VAR_21, VAR_20, 4);

        VAR_19 = FUNC_1(&VAR_17->ctxt_handle, &VAR_21, 0, ((void*)0));
        if (VAR_19 == VAR_11 || VAR_19 == VAR_13 ||
            VAR_19 == VAR_12) {

            if (VAR_20[1].BufferType == VAR_7) {

                VAR_22 = VAR_20[1].cbBuffer > VAR_6 ?
                       VAR_20[1].cbBuffer : VAR_6;
                if (VAR_17->dec_buf_size - VAR_17->dec_buf_offset < VAR_22 || VAR_17->dec_buf_size < VAR_16) {
                    VAR_17->dec_buf_size = VAR_17->dec_buf_offset + VAR_22;
                    if (VAR_17->dec_buf_size < VAR_16)
                        VAR_17->dec_buf_size = VAR_16;
                    VAR_23 = FUNC_4(&VAR_17->dec_buf, VAR_17->dec_buf_size);
                    if (VAR_23 < 0) {
                        VAR_17->dec_buf_size = VAR_17->dec_buf_offset = 0;
                        return VAR_23;
                    }
                }


                VAR_22 = VAR_20[1].cbBuffer;
                if (VAR_22) {
                    FUNC_8(VAR_17->dec_buf + VAR_17->dec_buf_offset, VAR_20[1].pvBuffer, VAR_22);
                    VAR_17->dec_buf_offset += VAR_22;
                }
            }
            if (VAR_20[3].BufferType == VAR_9 && VAR_20[3].cbBuffer > 0) {
                if (VAR_17->enc_buf_offset > VAR_20[3].cbBuffer) {
                    FUNC_9(VAR_17->enc_buf, (VAR_17->enc_buf + VAR_17->enc_buf_offset) - VAR_20[3].cbBuffer,
                    VAR_20[3].cbBuffer);
                    VAR_17->enc_buf_offset = VAR_20[3].cbBuffer;
                }
            } else
                VAR_17->enc_buf_offset = 0;

            if (VAR_19 == VAR_13) {
                if (VAR_17->enc_buf_offset) {
                    FUNC_3(VAR_14, VAR_2, "Cannot renegotiate, encrypted data buffer not empty\n");
                    VAR_23 = VAR_1;
                    goto cleanup;
                }

                FUNC_3(VAR_14, VAR_3, "Re-negotiating security context\n");
                VAR_23 = FUNC_10(VAR_14, 0);
                if (VAR_23 < 0) {
                    goto cleanup;
                }
                VAR_19 = VAR_11;
                continue;
            } else if (VAR_19 == VAR_12) {
                VAR_17->sspi_close_notify = 1;
                if (!VAR_17->connection_closed) {
                    VAR_17->connection_closed = 1;
                    FUNC_3(VAR_14, VAR_3, "Server closed the connection\n");
                }
                VAR_23 = 0;
                goto cleanup;
            }
        } else if (VAR_19 == VAR_10) {
            VAR_23 = FUNC_0(VAR_4);
            goto cleanup;
        } else {
            FUNC_3(VAR_14, VAR_2, "Unable to decrypt message (error 0x%x)\n", (unsigned)VAR_19);
            VAR_23 = FUNC_0(VAR_5);
            goto cleanup;
        }
    }

    VAR_23 = 0;

cleanup:
    VAR_22 = FUNC_2(VAR_16, VAR_17->dec_buf_offset);
    if (VAR_22) {
        FUNC_8(VAR_15, VAR_17->dec_buf, VAR_22);
        FUNC_9(VAR_17->dec_buf, VAR_17->dec_buf + VAR_22, VAR_17->dec_buf_offset - VAR_22);
        VAR_17->dec_buf_offset -= VAR_22;

        return VAR_22;
    }

    if (VAR_23 == 0 && !VAR_17->connection_closed)
        VAR_23 = FUNC_0(VAR_4);

    return VAR_23 < 0 ? VAR_23 : VAR_0;
}
