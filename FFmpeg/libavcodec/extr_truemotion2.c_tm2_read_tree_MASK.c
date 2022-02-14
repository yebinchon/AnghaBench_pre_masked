
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int gb; int avctx; } ;
struct TYPE_5__ {int max_bits; size_t num; size_t max_num; int* bits; int* lens; int val_bits; int * nums; } ;
typedef TYPE_1__ TM2Huff ;
typedef TYPE_2__ TM2Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(TM2Context *VAR_3, uint32_t VAR_4, int VAR_5, TM2Huff *VAR_6)
{
    int VAR_7, VAR_8;
    if (VAR_5 > VAR_6->max_bits) {
        FUNC_1(VAR_3->avctx, VAR_2, "Tree exceeded its given depth (%i)\n",
               VAR_6->max_bits);
        return VAR_0;
    }

    if (!FUNC_2(&VAR_3->gb)) {
        if (VAR_5 == 0) {
            VAR_5 = 1;
        }
        if (VAR_6->num >= VAR_6->max_num) {
            FUNC_1(VAR_3->avctx, VAR_1, "Too many literals\n");
            return VAR_0;
        }
        VAR_6->nums[VAR_6->num] = FUNC_3(&VAR_3->gb, VAR_6->val_bits);
        VAR_6->bits[VAR_6->num] = VAR_4;
        VAR_6->lens[VAR_6->num] = VAR_5;
        VAR_6->num++;
        return VAR_5;
    } else {
        if ((VAR_8 = FUNC_4(VAR_3, VAR_4 << 1, VAR_5 + 1, VAR_6)) < 0)
            return VAR_8;
        if ((VAR_7 = FUNC_4(VAR_3, (VAR_4 << 1) | 1, VAR_5 + 1, VAR_6)) < 0)
            return VAR_7;
    }
    return FUNC_0(VAR_7, VAR_8);
}
