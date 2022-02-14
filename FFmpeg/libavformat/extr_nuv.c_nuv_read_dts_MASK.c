
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int nuv_frametype ;
typedef scalar_t__ int64_t ;
struct TYPE_6__ {int * streams; int * pb; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int v_id; int a_id; } ;
typedef TYPE_1__ NUVContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int*) ;
 int VAR_2 ;



 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int*,int) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int64_t FUNC_9(AVFormatContext *VAR_4, int VAR_5,
                            int64_t *VAR_6, int64_t VAR_7)
{
    NUVContext *VAR_8 = VAR_4->priv_data;
    AVIOContext *VAR_9 = VAR_4->pb;
    uint8_t VAR_10[VAR_2];
    nuv_frametype VAR_11;
    int VAR_12, VAR_13, VAR_14;
    int64_t VAR_15, VAR_16;

    if (FUNC_5(VAR_9, *VAR_6, VAR_3) < 0)
        return VAR_1;

    if (!FUNC_8(VAR_4, VAR_7))
        return VAR_1;

    while (!FUNC_3(VAR_9) && FUNC_7(VAR_9) < VAR_7) {
        if (FUNC_4(VAR_9, VAR_10, VAR_2) < VAR_2)
            return VAR_1;
        VAR_11 = VAR_10[0];
        VAR_12 = FUNC_1(FUNC_0(&VAR_10[8]));
        switch (VAR_11) {
            case 129:
                break;
            case 130:
            case 128:
                if (VAR_11 == 128) {
                    VAR_14 = VAR_8->v_id;
                    VAR_13 = VAR_10[2] == 0;
                } else {
                    VAR_14 = VAR_8->a_id;
                    VAR_13 = 1;
                }
                if (VAR_5 == VAR_14) {

                    VAR_15 = FUNC_7(VAR_4->pb) - VAR_2;
                    VAR_16 = FUNC_0(&VAR_10[4]);


                    FUNC_2(VAR_4->streams[VAR_5], VAR_15, VAR_16, VAR_12 + VAR_2, 0,
                            VAR_13 ? VAR_0 : 0);

                    *VAR_6 = VAR_15;
                    return VAR_16;
                }
            default:
                FUNC_6(VAR_9, VAR_12);
                break;
        }
    }
    return VAR_1;
}
