
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {char* buf; scalar_t__ max_payload_size; } ;
typedef TYPE_1__ RTPMuxContext ;
typedef int GetBitContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int const*,int) ;
 int FUNC_7 (TYPE_2__*,int ,int,int const*,int,int,int,int) ;

__attribute__((used)) static void FUNC_8(AVFormatContext *VAR_2, const uint8_t *VAR_3, int VAR_4, int VAR_5)
{
    RTPMuxContext *VAR_6 = VAR_2->priv_data;
    GetBitContext VAR_7;
    int VAR_8, VAR_9;
    uint32_t VAR_10, VAR_11, VAR_12, VAR_13;
    uint16_t VAR_14;
    char *VAR_15 = &VAR_6->buf[4];

    VAR_10 = FUNC_0(&VAR_3[0]);
    VAR_3 += VAR_0;
    VAR_4 -= VAR_0;
    VAR_9 = VAR_5 && (VAR_10 & 0x01);

    FUNC_6(&VAR_7, VAR_3, 8 * VAR_4);
                    FUNC_5(&VAR_7);
    VAR_11 = FUNC_5(&VAR_7);
                    FUNC_5(&VAR_7);
                    FUNC_5(&VAR_7);
    VAR_12 = FUNC_5(&VAR_7);
    VAR_13 = FUNC_5(&VAR_7);

    FUNC_5(&VAR_7);
    for(VAR_8 = 0; VAR_8 < VAR_11; VAR_8++)
    {
        FUNC_5(&VAR_7);
        FUNC_5(&VAR_7);
        FUNC_5(&VAR_7);
    }

    VAR_14 = (FUNC_4(&VAR_7) + 7) / 8;

    FUNC_2(&VAR_15[ 0], VAR_10);
    FUNC_1(&VAR_15[ 4], VAR_12);
    FUNC_1(&VAR_15[ 6], VAR_13);
    FUNC_1(&VAR_15[ 8], VAR_14);
    FUNC_1(&VAR_15[10], 0 );
    FUNC_7(VAR_2, VAR_1, 12, VAR_3, VAR_14, VAR_5, VAR_9, 0);
    VAR_3 += VAR_14;
    VAR_4 -= VAR_14;

    while (VAR_4 > 0) {
        VAR_14 = FUNC_3(VAR_6->max_payload_size - 20 , VAR_4);
        FUNC_1(&VAR_15[ 8], VAR_14);
        FUNC_1(&VAR_15[10], 1 );
        FUNC_1(&VAR_15[12], 0 );
        FUNC_1(&VAR_15[14], 0 );

        VAR_4 -= VAR_14;
        FUNC_7(VAR_2, VAR_1, 16, VAR_3, VAR_14, VAR_5, VAR_9, VAR_4 > 0 ? 0 : 1);
        VAR_3 += VAR_14;
    }
}
