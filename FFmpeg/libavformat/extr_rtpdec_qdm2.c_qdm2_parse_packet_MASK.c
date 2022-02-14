
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_14__ {TYPE_1__* codecpar; } ;
struct TYPE_13__ {scalar_t__ n_pkts; scalar_t__* len; scalar_t__ subpkts_per_block; scalar_t__ cache; int timestamp; } ;
struct TYPE_12__ {scalar_t__ codec_id; } ;
typedef TYPE_2__ PayloadContext ;
typedef TYPE_3__ AVStream ;
typedef int AVPacket ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,int const*,int const*) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,int const*,int const*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_6, PayloadContext *VAR_7,
                             AVStream *VAR_8, AVPacket *VAR_9,
                             uint32_t *VAR_10,
                             const uint8_t *VAR_11, int VAR_12, uint16_t VAR_13,
                             int VAR_14)
{
    int VAR_15 = VAR_0, VAR_16;
    const uint8_t *VAR_17 = VAR_11 + VAR_12, *VAR_18 = VAR_11;

    if (VAR_12 > 0) {
        if (VAR_12 < 2)
            return VAR_0;


        if (*VAR_18 == 0xff) {
            if (VAR_7->n_pkts > 0) {
                FUNC_1(VAR_6, VAR_3,
                       "Out of sequence config - dropping queue\n");
                VAR_7->n_pkts = 0;
                FUNC_2(VAR_7->len, 0, sizeof(VAR_7->len));
            }

            if ((VAR_15 = FUNC_3(VAR_7, VAR_8, ++VAR_18, VAR_17)) < 0)
                return VAR_15;
            VAR_18 += VAR_15;






            VAR_8->codecpar->codec_id = VAR_2;
        }
        if (VAR_8->codecpar->codec_id == VAR_1)
            return FUNC_0(VAR_4);


        while (VAR_17 - VAR_18 >= 4) {
            if ((VAR_15 = FUNC_4(VAR_7, VAR_8, VAR_18, VAR_17)) < 0)
                return VAR_15;
            VAR_18 += VAR_15;
        }

        VAR_7->timestamp = *VAR_10;
        if (++VAR_7->n_pkts < VAR_7->subpkts_per_block)
            return FUNC_0(VAR_4);
        VAR_7->cache = 0;
        for (VAR_16 = 0; VAR_16 < 0x80; VAR_16++)
            if (VAR_7->len[VAR_16] > 0)
                VAR_7->cache++;
    }


    if (!VAR_7->cache || (VAR_15 = FUNC_5(VAR_7, VAR_8, VAR_9)) < 0)
        return VAR_15;
    if (--VAR_7->cache == 0)
        VAR_7->n_pkts = 0;

    *VAR_10 = VAR_7->timestamp;
    VAR_7->timestamp = VAR_5;

    return (VAR_7->cache > 0) ? 1 : 0;
}
