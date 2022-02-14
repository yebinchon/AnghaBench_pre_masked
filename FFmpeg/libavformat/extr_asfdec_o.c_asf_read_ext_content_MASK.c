
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_6__ {int offset; } ;
struct TYPE_5__ {int metadata; int * pb; TYPE_2__* priv_data; } ;
typedef int GUIDParseTable ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ ASFContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int **) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int *,int,int,int,int *) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_4, const GUIDParseTable *VAR_5)
{
    ASFContext *VAR_6 = VAR_4->priv_data;
    AVIOContext *VAR_7 = VAR_4->pb;
    uint64_t VAR_8 = FUNC_6(VAR_7);
    uint16_t VAR_9 = FUNC_5(VAR_7);
    int VAR_10, VAR_11;

    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
        uint16_t VAR_12, VAR_13, VAR_14;
        uint8_t *VAR_15 = ((void*)0);

        VAR_12 = FUNC_5(VAR_7);
        if (!VAR_12)
            return VAR_2;
        VAR_15 = FUNC_3(VAR_12);
        if (!VAR_15)
            return FUNC_0(VAR_3);
        FUNC_4(VAR_7, VAR_12, VAR_15,
                         VAR_12);
        VAR_13 = FUNC_5(VAR_7);


        if (VAR_13 == VAR_0)
            VAR_13 = VAR_1;
        VAR_14 = FUNC_5(VAR_7);

        VAR_11 = FUNC_7(VAR_4, VAR_15, VAR_12, VAR_14, VAR_13, &VAR_4->metadata);
        FUNC_2(&VAR_15);
        if (VAR_11 < 0)
            return VAR_11;
    }

    FUNC_1(VAR_7, VAR_6->offset, VAR_8);
    return 0;
}
