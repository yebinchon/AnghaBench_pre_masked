
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int64_t ;
typedef int errbuf ;
struct TYPE_6__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_7__ {int flags; scalar_t__ position; int hd; int ivlen; int iv; int decrypt_iv; int outbuffer; int outptr; scalar_t__ indata_used; scalar_t__ indata; scalar_t__ outdata; scalar_t__ eof; } ;
typedef TYPE_2__ CryptoContext ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;

 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_1 (TYPE_1__*,int ,char*,...) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int const) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int64_t FUNC_6(URLContext *VAR_5, int64_t VAR_6, int VAR_7)
{
    CryptoContext *VAR_8 = VAR_5->priv_data;
    int64_t VAR_9;
    int64_t VAR_10;

    if (VAR_8->flags & VAR_0) {
        FUNC_1(VAR_5, VAR_1,
            "Crypto: seek not supported for write\r\n");

        return FUNC_0(VAR_4);
    }


    VAR_8->eof = 0;

    switch (VAR_7) {
    case 128:
        break;
    case 130:
        VAR_6 = VAR_6 + VAR_8->position;
        break;
    case 129: {
        int64_t VAR_11 = FUNC_4( VAR_8->hd, VAR_6, 131 );
        if (VAR_11 < 0) {
            FUNC_1(VAR_5, VAR_1,
                "Crypto: seek_end - can't get file size (pos=%lld)\r\n", (long long int)VAR_6);
            return VAR_11;
        }
        VAR_6 = VAR_11 - VAR_6;
        }
        break;
    case 131: {
        int64_t VAR_12 = FUNC_4( VAR_8->hd, VAR_6, 131 );
        return VAR_12;
        }
        break;
    default:
        FUNC_1(VAR_5, VAR_1,
            "Crypto: no support for seek where 'whence' is %d\r\n", VAR_7);
        return FUNC_0(VAR_3);
    }

    VAR_8->outdata = 0;
    VAR_8->indata = 0;
    VAR_8->indata_used = 0;
    VAR_8->outptr = VAR_8->outbuffer;



    VAR_9 = VAR_6/VAR_2;
    if (VAR_9 == 0) {

        FUNC_5( VAR_8->decrypt_iv, VAR_8->iv, VAR_8->ivlen );
        VAR_8->position = 0;
    } else {




        VAR_9--;
        VAR_8->position = (VAR_9 * VAR_2);
    }

    VAR_10 = FUNC_4( VAR_8->hd, VAR_8->position, 128 );
    if (VAR_10 < 0) {
        FUNC_1(VAR_5, VAR_1,
            "Crypto: nested protocol no support for seek or seek failed\n");
        return VAR_10;
    }



    if (VAR_6 - VAR_8->position) {
        uint8_t VAR_13[VAR_2*2];
        int VAR_14 = VAR_6 - VAR_8->position;
        int VAR_15;

        while (VAR_14 > 0) {

            VAR_15 = FUNC_3(VAR_5, VAR_13, VAR_14);
            if (VAR_15 < 0)
                break;
            VAR_14 -= VAR_15;
        }


        if (VAR_14 != 0) {
            char VAR_16[100] = "unknown error";
            FUNC_2(VAR_15, VAR_16, sizeof(VAR_16));
            FUNC_1(VAR_5, VAR_1,
                "Crypto: discard read did not get all the bytes (%d remain) - read returned (%d)-%s\n",
                VAR_14, VAR_15, VAR_16);
            return FUNC_0(VAR_3);
        }
    }

    return VAR_8->position;
}
