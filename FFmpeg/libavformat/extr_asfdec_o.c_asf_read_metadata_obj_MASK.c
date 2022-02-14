
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_9__ {int offset; TYPE_1__* asf_sd; } ;
struct TYPE_8__ {int * pb; TYPE_3__* priv_data; } ;
struct TYPE_7__ {int asf_met; } ;
typedef int GUIDParseTable ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ ASFContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int,int *,int) ;
 int FUNC_3 (int **) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *,int,int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (TYPE_2__*,int *,int,int,int,int *) ;
 int FUNC_11 (int *,char*) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_2, const GUIDParseTable *VAR_3)
{
    ASFContext *VAR_4 = VAR_2->priv_data;
    AVIOContext *VAR_5 = VAR_2->pb;
    uint64_t VAR_6 = FUNC_8(VAR_5);
    uint16_t VAR_7 = FUNC_6(VAR_5);
    int VAR_8, VAR_9;

    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
        uint16_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
        uint8_t *VAR_15 = ((void*)0);

        FUNC_9(VAR_5, 2);
        VAR_14 = FUNC_6(VAR_5);
        VAR_10 = FUNC_6(VAR_5);
        VAR_11 = 2 * VAR_10 + 1;
        if (!VAR_10)
            break;
        VAR_12 = FUNC_6(VAR_5);
        VAR_13 = FUNC_7(VAR_5);
        VAR_15 = FUNC_4(VAR_11);
        if (!VAR_15)
            return FUNC_0(VAR_1);
        FUNC_5(VAR_5, VAR_10, VAR_15,
                         VAR_11);
        if (!FUNC_11(VAR_15, "AspectRatioX") || !FUNC_11(VAR_15, "AspectRatioY")) {
            VAR_9 = FUNC_2(VAR_2, VAR_14, VAR_15, VAR_12);
            if (VAR_9 < 0) {
                FUNC_3(&VAR_15);
                break;
            }
        } else {
            if (VAR_14 < VAR_0) {
                if ((VAR_9 = FUNC_10(VAR_2, VAR_15, VAR_10, VAR_13, VAR_12,
                                            &VAR_4->asf_sd[VAR_14].asf_met)) < 0) {
                    FUNC_3(&VAR_15);
                    break;
                }
            }
        }
        FUNC_3(&VAR_15);
    }

    FUNC_1(VAR_5, VAR_4->offset, VAR_6);
    return 0;
}
