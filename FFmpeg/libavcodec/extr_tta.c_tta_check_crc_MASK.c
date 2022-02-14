
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int avctx; int crc_table; } ;
typedef TYPE_1__ TTAContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,int,int const*,int) ;
 int FUNC_2 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_3(TTAContext *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
    uint32_t VAR_5, VAR_6;

    VAR_6 = FUNC_0(VAR_3 + VAR_4);
    VAR_5 = FUNC_1(VAR_2->crc_table, 0xFFFFFFFFU, VAR_3, VAR_4);
    if (VAR_6 != (VAR_5 ^ 0xFFFFFFFFU)) {
        FUNC_2(VAR_2->avctx, VAR_1, "CRC error\n");
        return VAR_0;
    }

    return 0;
}
