
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int int64_t ;
struct TYPE_18__ {int keylen; scalar_t__ key; int * pb; TYPE_1__* priv_data; } ;
struct TYPE_17__ {int* data; int stream_index; } ;
struct TYPE_16__ {int length; int* key; int offset; } ;
struct TYPE_15__ {scalar_t__ aesc; } ;
typedef TYPE_1__ MXFContext ;
typedef TYPE_2__ KLVPacket ;
typedef TYPE_3__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__,int*,int*,int,int*,int) ;
 int FUNC_4 (scalar_t__,scalar_t__,int,int) ;
 int FUNC_5 (int *,TYPE_3__*,int) ;
 int FUNC_6 (TYPE_4__*,int ,char*) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int*,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int*,int const*,int) ;
 int VAR_3 ;
 int FUNC_15 (TYPE_4__*,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_16(AVFormatContext *VAR_4, AVPacket *VAR_5, KLVPacket *VAR_6)
{
    static const uint8_t VAR_7[16] = {0x43, 0x48, 0x55, 0x4b, 0x43, 0x48, 0x55, 0x4b, 0x43, 0x48, 0x55, 0x4b, 0x43, 0x48, 0x55, 0x4b};
    MXFContext *VAR_8 = VAR_4->priv_data;
    AVIOContext *VAR_9 = VAR_4->pb;
    int64_t VAR_10 = FUNC_11(VAR_9) + VAR_6->length;
    int64_t VAR_11;
    uint64_t VAR_12;
    uint64_t VAR_13;
    uint8_t VAR_14[16];
    uint8_t VAR_15[16];
    int VAR_16;
    int VAR_17;

    if (!VAR_8->aesc && VAR_4->key && VAR_4->keylen == 16) {
        VAR_8->aesc = FUNC_2();
        if (!VAR_8->aesc)
            return FUNC_0(VAR_2);
        FUNC_4(VAR_8->aesc, VAR_4->key, 128, 1);
    }

    VAR_11 = FUNC_13(VAR_9);
    if (VAR_11 < 0)
        return VAR_11;
    FUNC_10(VAR_9, VAR_11);

    FUNC_13(VAR_9);
    VAR_13 = FUNC_8(VAR_9);

    FUNC_13(VAR_9);
    FUNC_9(VAR_9, VAR_6->key, 16);
    if (!FUNC_1(VAR_6, VAR_3))
        return VAR_0;

    VAR_17 = FUNC_12(VAR_8, VAR_6->offset);
    VAR_16 = FUNC_15(VAR_4, VAR_6, VAR_17);
    if (VAR_16 < 0)
        return VAR_0;

    FUNC_13(VAR_9);
    VAR_12 = FUNC_8(VAR_9);
    if (VAR_12 < VAR_13)
        return VAR_0;

    VAR_11 = FUNC_13(VAR_9);
    if (VAR_11 < 32 || VAR_11 - 32 < VAR_12)
        return VAR_0;
    FUNC_9(VAR_9, VAR_14, 16);
    FUNC_9(VAR_9, VAR_15, 16);
    if (VAR_8->aesc)
        FUNC_3(VAR_8->aesc, VAR_15, VAR_15, 1, VAR_14, 1);
    if (FUNC_14(VAR_15, VAR_7, 16))
        FUNC_6(VAR_4, VAR_1, "probably incorrect decryption key\n");
    VAR_11 -= 32;
    VAR_11 = FUNC_5(VAR_9, VAR_5, VAR_11);
    if (VAR_11 < 0)
        return VAR_11;
    else if (VAR_11 < VAR_13)
        return VAR_0;
    VAR_11 -= VAR_13;
    if (VAR_8->aesc)
        FUNC_3(VAR_8->aesc, &VAR_5->data[VAR_13],
                     &VAR_5->data[VAR_13], VAR_11 >> 4, VAR_14, 1);
    FUNC_7(VAR_5, VAR_12);
    VAR_5->stream_index = VAR_16;
    FUNC_10(VAR_9, VAR_10 - FUNC_11(VAR_9));
    return 0;
}
