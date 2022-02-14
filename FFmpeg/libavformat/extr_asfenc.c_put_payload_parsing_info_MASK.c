
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {scalar_t__ multi_payloads_present; } ;
struct TYPE_4__ {int * pb; TYPE_2__* priv_data; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ ASFContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_9,
                                    unsigned VAR_10, unsigned VAR_11,
                                    int VAR_12, int VAR_13)
{
    ASFContext *VAR_14 = VAR_9->priv_data;
    AVIOContext *VAR_15 = VAR_9->pb;
    int VAR_16, VAR_17;
    int64_t VAR_18 = FUNC_1(VAR_15);

    int VAR_19 = VAR_6;

    VAR_13 -= VAR_8;
    if (VAR_14->multi_payloads_present)
        VAR_13--;
    FUNC_0(VAR_13 >= 0);

    FUNC_2(VAR_15, VAR_1);
    for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++)
        FUNC_2(VAR_15, 0x0);

    if (VAR_14->multi_payloads_present)
        VAR_19 |= VAR_3;

    if (VAR_13 > 0) {
        if (VAR_13 < 256)
            VAR_19 |= VAR_4;
        else
            VAR_19 |= VAR_5;
    }
    FUNC_2(VAR_15, VAR_19);

    FUNC_2(VAR_15, VAR_7);

    if (VAR_19 & VAR_5)
        FUNC_3(VAR_15, VAR_13 - 2);
    if (VAR_19 & VAR_4)
        FUNC_2(VAR_15, VAR_13 - 1);

    FUNC_4(VAR_15, VAR_10);
    FUNC_3(VAR_15, VAR_11);
    if (VAR_14->multi_payloads_present)
        FUNC_2(VAR_15, VAR_12 | VAR_2);

    VAR_16 = FUNC_1(VAR_15) - VAR_18;

    return VAR_16;
}
