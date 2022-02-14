
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_10__ {int table; } ;
typedef TYPE_2__ VLC ;
struct TYPE_9__ {int (* bswap_buf ) (int *,int const*,int) ;} ;
struct TYPE_12__ {scalar_t__ tmpbuf; TYPE_1__ bdsp; int avctx; } ;
struct TYPE_11__ {int count; } ;
typedef TYPE_3__ Node ;
typedef int GetBitContext ;
typedef TYPE_4__ FrapsContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__ const**) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*,int,int ,TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int) ;
 int VAR_3 ;
 int FUNC_5 (int *,scalar_t__,int) ;
 int FUNC_6 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_7(FrapsContext *VAR_4, uint8_t *VAR_5, int VAR_6, int VAR_7,
                               int VAR_8, const uint8_t *VAR_9, int VAR_10, int VAR_11,
                               const int VAR_12)
{
    int VAR_13, VAR_14, VAR_15;
    GetBitContext VAR_16;
    VLC VAR_17;
    Node VAR_18[512];

    for (VAR_13 = 0; VAR_13 < 256; VAR_13++)
        VAR_18[VAR_13].count = FUNC_0(&VAR_9);
    VAR_10 -= 1024;
    if ((VAR_15 = FUNC_2(VAR_4->avctx, &VAR_17, 256, VAR_2,
                                  VAR_18, VAR_3,
                                  VAR_1)) < 0)
        return VAR_15;



    VAR_4->bdsp.bswap_buf((uint32_t *) VAR_4->tmpbuf,
                      (const uint32_t *) VAR_9, VAR_10 >> 2);

    if ((VAR_15 = FUNC_5(&VAR_16, VAR_4->tmpbuf, VAR_10)) < 0)
        return VAR_15;

    for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
        for (VAR_13 = 0; VAR_13 < VAR_7*VAR_12; VAR_13 += VAR_12) {
            VAR_5[VAR_13] = FUNC_4(&VAR_16, VAR_17.table, VAR_2, 3);



            if (VAR_14)
                VAR_5[VAR_13] += VAR_5[VAR_13 - VAR_6];
            else if (VAR_11)
                VAR_5[VAR_13] += 0x80;
            if (FUNC_3(&VAR_16) < 0) {
                FUNC_1(&VAR_17);
                return VAR_0;
            }
        }
        VAR_5 += VAR_6;
    }
    FUNC_1(&VAR_17);
    return 0;
}
