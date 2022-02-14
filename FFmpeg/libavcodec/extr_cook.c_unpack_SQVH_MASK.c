
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int gb; TYPE_1__* sqvh; } ;
struct TYPE_7__ {scalar_t__ bits_per_subpacket; } ;
struct TYPE_6__ {int bits; int table; } ;
typedef TYPE_2__ COOKSubpacket ;
typedef TYPE_3__ COOKContext ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_3(COOKContext *VAR_4, COOKSubpacket *VAR_5, int VAR_6,
                       int *VAR_7, int *VAR_8)
{
    int VAR_9, VAR_10;
    int VAR_11, VAR_12, VAR_13, VAR_14;

    VAR_12 = VAR_2[VAR_6];
    VAR_14 = 0;
    for (VAR_9 = 0; VAR_9 < VAR_3[VAR_6]; VAR_9++) {
        VAR_11 = FUNC_2(&VAR_4->gb, VAR_4->sqvh[VAR_6].table, VAR_4->sqvh[VAR_6].bits, 3);
        if (VAR_5->bits_per_subpacket < FUNC_1(&VAR_4->gb)) {
            VAR_11 = 0;
            VAR_14 = 1;
        }
        for (VAR_10 = VAR_12 - 1; VAR_10 >= 0; VAR_10--) {
            VAR_13 = (VAR_11 * VAR_0[VAR_6]) / 0x100000;
            VAR_7[VAR_12 * VAR_9 + VAR_10] = VAR_11 - VAR_13 * (VAR_1[VAR_6] + 1);
            VAR_11 = VAR_13;
        }
        for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
            if (VAR_7[VAR_9 * VAR_12 + VAR_10]) {
                if (FUNC_1(&VAR_4->gb) < VAR_5->bits_per_subpacket) {
                    VAR_8[VAR_9 * VAR_12 + VAR_10] = FUNC_0(&VAR_4->gb);
                } else {
                    VAR_14 = 1;
                    VAR_8[VAR_9 * VAR_12 + VAR_10] = 0;
                }
            } else {
                VAR_8[VAR_9 * VAR_12 + VAR_10] = 0;
            }
        }
    }
    return VAR_14;
}
