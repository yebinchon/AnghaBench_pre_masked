
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {int member_0; } ;
struct TYPE_6__ {int frame_size; int frame; int pb; int g2; int gb; } ;
typedef int PutByteContext ;
typedef int GetByteContext ;
typedef TYPE_1__ GDVContext ;
typedef TYPE_2__ Bits8 ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int *,int,int) ;
 int FUNC_8 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_2, unsigned VAR_3)
{
    GDVContext *VAR_4 = VAR_2->priv_data;
    GetByteContext *VAR_5 = &VAR_4->gb;
    GetByteContext *VAR_6 = &VAR_4->g2;
    PutByteContext *VAR_7 = &VAR_4->pb;
    Bits8 VAR_8 = { 0 };

    FUNC_4(VAR_6, VAR_4->frame, VAR_4->frame_size);
    FUNC_6(VAR_7, VAR_3 + VAR_1);

    while (FUNC_2(VAR_7) > 0 && FUNC_1(VAR_5) > 0) {
        int VAR_9 = FUNC_8(&VAR_8, VAR_5);
        if (FUNC_1(VAR_5) < 1)
            return VAR_0;
        if (VAR_9 == 0) {
            FUNC_5(VAR_7, FUNC_0(VAR_5));
        } else if (VAR_9 == 1) {
            int VAR_10 = FUNC_0(VAR_5);
            int VAR_11 = (VAR_10 & 0xF) + 3;
            int VAR_12 = VAR_10 >> 4;
            int VAR_13 = (FUNC_0(VAR_5) << 4) + VAR_12 - 4096;
            FUNC_7(VAR_7, VAR_6, VAR_13, VAR_11);
        } else if (VAR_9 == 2) {
            int VAR_14;
            int VAR_15 = FUNC_0(VAR_5);
            if (VAR_15 == 0) {
                return 0;
            }
            if (VAR_15 != 0xFF) {
                VAR_14 = VAR_15;
            } else {
                VAR_14 = FUNC_3(VAR_5);
            }
            FUNC_6(VAR_7, VAR_14 + 1);
        } else {
            int VAR_16 = FUNC_0(VAR_5);
            int VAR_17 = (VAR_16 & 0x3) + 2;
            int VAR_18 = -(VAR_16 >> 2) - 1;
            FUNC_7(VAR_7, VAR_6, VAR_18, VAR_17);
        }
    }
    if (FUNC_2(VAR_7) > 0)
        return VAR_0;
    return 0;
}
