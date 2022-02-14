
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_3__ {int base; } ;
struct TYPE_4__ {scalar_t__ total_in; scalar_t__ total_out; int initialized; char* password; int encryption_mode; int mode; TYPE_1__ stream; int hmac; int aes; int nonce; int crypt_pos; } ;
typedef TYPE_2__ mz_stream_wzaes ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,scalar_t__) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int *,scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,scalar_t__,int *,scalar_t__,int ,int *,int) ;
 int FUNC_12 (int *,scalar_t__) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int *,int) ;
 int FUNC_15 (int ,int *,int) ;
 scalar_t__ FUNC_16 (char const*) ;

int32_t FUNC_17(void *VAR_16, const char *VAR_17, int32_t VAR_18)
{
    mz_stream_wzaes *VAR_19 = (mz_stream_wzaes *)VAR_16;
    uint16_t VAR_20 = 0;
    uint16_t VAR_21 = 0;
    uint16_t VAR_22 = 0;
    uint8_t VAR_23[2 * VAR_2 + VAR_4];
    uint8_t VAR_24[VAR_4];
    uint8_t VAR_25[VAR_4];
    uint8_t VAR_26[VAR_5];
    const char *VAR_27 = VAR_17;

    VAR_19->total_in = 0;
    VAR_19->total_out = 0;
    VAR_19->initialized = 0;

    if (FUNC_13(VAR_19->stream.base) != VAR_7)
        return VAR_8;

    if (VAR_27 == ((void*)0))
        VAR_27 = VAR_19->password;
    if (VAR_27 == ((void*)0))
        return VAR_11;
    VAR_21 = (uint16_t)FUNC_16(VAR_27);
    if (VAR_21 > VAR_3)
        return VAR_11;

    if (VAR_19->encryption_mode < 1 || VAR_19->encryption_mode > 3)
        return VAR_11;

    VAR_20 = FUNC_1(VAR_19->encryption_mode);

    if (VAR_18 & VAR_10)
    {



        FUNC_12(VAR_26, VAR_20);

    }
    else if (VAR_18 & VAR_9)
    {



        if (FUNC_14(VAR_19->stream.base, VAR_26, VAR_20) != VAR_20)
            return VAR_13;

    }

    VAR_22 = FUNC_0(VAR_19->encryption_mode);


    FUNC_11((uint8_t *)VAR_27, VAR_21, VAR_26, VAR_20,
        VAR_1, VAR_23, 2 * VAR_22 + VAR_4);


    VAR_19->crypt_pos = VAR_0;
    FUNC_4(VAR_19->nonce, 0, sizeof(VAR_19->nonce));


    FUNC_5(VAR_19->aes);
    FUNC_7(VAR_19->aes, VAR_19->encryption_mode);
    FUNC_6(VAR_19->aes, VAR_23, VAR_22);


    FUNC_9(VAR_19->hmac);
    FUNC_10(VAR_19->hmac, VAR_6);
    FUNC_8(VAR_19->hmac, VAR_23 + VAR_22, VAR_22);

    FUNC_3(VAR_24, VAR_23 + (2 * VAR_22), VAR_4);

    if (VAR_18 & VAR_10)
    {
        if (FUNC_15(VAR_19->stream.base, VAR_26, VAR_20) != VAR_20)
            return VAR_15;

        VAR_19->total_out += VAR_20;

        if (FUNC_15(VAR_19->stream.base, VAR_24, VAR_4) != VAR_4)
            return VAR_15;

        VAR_19->total_out += VAR_4;
    }
    else if (VAR_18 & VAR_9)
    {
        VAR_19->total_in += VAR_20;

        if (FUNC_14(VAR_19->stream.base, VAR_25, VAR_4) != VAR_4)
            return VAR_13;

        VAR_19->total_in += VAR_4;

        if (FUNC_2(VAR_25, VAR_24, VAR_4) != 0)
            return VAR_12;
    }

    VAR_19->mode = VAR_18;
    VAR_19->initialized = 1;

    return VAR_7;
}
