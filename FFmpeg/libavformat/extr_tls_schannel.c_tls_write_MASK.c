
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_14__ {scalar_t__ cbMaximumMessage; int cbHeader; int cbTrailer; } ;
struct TYPE_13__ {int cbBuffer; int pvBuffer; } ;
struct TYPE_11__ {int tcp; } ;
struct TYPE_12__ {int ctxt_handle; TYPE_9__ sizes; TYPE_2__ tls_shared; } ;
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
 scalar_t__ FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_9__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (int **) ;
 int FUNC_5 (TYPE_1__*,int ,char*) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (TYPE_4__*,int ,int *,int) ;
 int FUNC_9 (int *,TYPE_4__*,int) ;
 int FUNC_10 (int ,int const*,int) ;

__attribute__((used)) static int FUNC_11(URLContext *VAR_11, const uint8_t *VAR_12, int VAR_13)
{
    TLSContext *VAR_14 = VAR_11->priv_data;
    TLSShared *VAR_15 = &VAR_14->tls_shared;
    SECURITY_STATUS VAR_16;
    int VAR_17 = 0, VAR_18;
    uint8_t *VAR_19 = ((void*)0);
    SecBuffer VAR_20[4];
    SecBufferDesc VAR_21;

    if (VAR_14->sizes.cbMaximumMessage == 0) {
        VAR_16 = FUNC_3(&VAR_14->ctxt_handle, VAR_8, &VAR_14->sizes);
        if (VAR_16 != VAR_10)
            return VAR_0;
    }


    VAR_13 = FUNC_2(VAR_13, VAR_14->sizes.cbMaximumMessage);

    VAR_18 = VAR_14->sizes.cbHeader + VAR_13 + VAR_14->sizes.cbTrailer;
    VAR_19 = FUNC_6(VAR_18);
    if (VAR_19 == ((void*)0))
        return FUNC_0(VAR_3);

    FUNC_8(&VAR_20[0], VAR_6,
                  VAR_19, VAR_14->sizes.cbHeader);
    FUNC_8(&VAR_20[1], VAR_4,
                  VAR_19 + VAR_14->sizes.cbHeader, VAR_13);
    FUNC_8(&VAR_20[2], VAR_7,
                  VAR_19 + VAR_14->sizes.cbHeader + VAR_13,
                  VAR_14->sizes.cbTrailer);
    FUNC_8(&VAR_20[3], VAR_5, ((void*)0), 0);
    FUNC_9(&VAR_21, VAR_20, 4);

    FUNC_10(VAR_20[1].pvBuffer, VAR_12, VAR_13);

    VAR_16 = FUNC_1(&VAR_14->ctxt_handle, 0, &VAR_21, 0);
    if (VAR_16 == VAR_10) {
        VAR_13 = VAR_20[0].cbBuffer + VAR_20[1].cbBuffer + VAR_20[2].cbBuffer;
        VAR_17 = FUNC_7(VAR_15->tcp, VAR_19, VAR_13);
        if (VAR_17 < 0 || VAR_17 != VAR_13) {
            VAR_17 = FUNC_0(VAR_2);
            FUNC_5(VAR_11, VAR_1, "Writing encrypted data to socket failed\n");
            goto done;
        }
    } else {
        FUNC_5(VAR_11, VAR_1, "Encrypting data failed\n");
        if (VAR_16 == VAR_9)
            VAR_17 = FUNC_0(VAR_3);
        else
            VAR_17 = FUNC_0(VAR_2);
        goto done;
    }

done:
    FUNC_4(&VAR_19);
    return VAR_17 < 0 ? VAR_17 : VAR_20[1].cbBuffer;
}
