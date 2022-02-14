
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int mfxU8 ;
struct TYPE_8__ {size_t BufSize; int NumBit; int Type; int* Data; } ;
typedef TYPE_1__ mfxPayload ;
struct TYPE_9__ {int NumPayload; TYPE_1__** Payload; scalar_t__ NumExtParam; } ;
typedef TYPE_2__ mfxEncodeCtrl ;
struct TYPE_12__ {TYPE_3__* priv_data; } ;
struct TYPE_11__ {scalar_t__ a53_cc; } ;
struct TYPE_10__ {TYPE_4__ qsv; } ;
typedef TYPE_3__ QSVH264EncContext ;
typedef TYPE_4__ QSVEncContext ;
typedef int AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int const*,int,void**,size_t*) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0,
                                    const AVFrame *VAR_1, mfxEncodeCtrl* VAR_2)
{
    QSVH264EncContext *VAR_3 = VAR_0->priv_data;
    QSVEncContext *VAR_4 = &VAR_3->qsv;

    if (VAR_4->a53_cc && VAR_1) {
        mfxPayload* VAR_5;
        mfxU8* VAR_6;
        size_t VAR_7;
        int VAR_8;

        VAR_8 = FUNC_0(VAR_1, sizeof(mfxPayload) + 2, (void**)&VAR_5, &VAR_7);
        if (VAR_8 < 0 || !VAR_5)
            return VAR_8;

        VAR_6 = (mfxU8*)(VAR_5 + 1);

        VAR_6[0] = 4;
        VAR_6[1] = (mfxU8)VAR_7;


        VAR_5->BufSize = VAR_7 + 2;
        VAR_5->NumBit = VAR_5->BufSize * 8;
        VAR_5->Type = 4;
        VAR_5->Data = VAR_6;

        VAR_2->NumExtParam = 0;
        VAR_2->NumPayload = 1;
        VAR_2->Payload[0] = VAR_5;
    }
    return 0;
}
