
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {void* csty; } ;
struct TYPE_7__ {int ncomponents; int g; int avctx; } ;
typedef TYPE_1__ Jpeg2000DecoderContext ;
typedef TYPE_2__ Jpeg2000CodingStyle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(Jpeg2000DecoderContext *VAR_3, Jpeg2000CodingStyle *VAR_4,
                   uint8_t *VAR_5)
{
    int VAR_6, VAR_7;

    if (FUNC_1(&VAR_3->g) < 2) {
        FUNC_0(VAR_3->avctx, VAR_1, "Insufficient space for COC\n");
        return VAR_0;
    }

    VAR_6 = FUNC_2(&VAR_3->g);

    if (VAR_6 >= VAR_3->ncomponents) {
        FUNC_0(VAR_3->avctx, VAR_1,
               "Invalid compno %d. There are %d components in the image.\n",
               VAR_6, VAR_3->ncomponents);
        return VAR_0;
    }

    VAR_4 += VAR_6;
    VAR_4->csty = FUNC_2(&VAR_3->g);

    if ((VAR_7 = FUNC_3(VAR_3, VAR_4)) < 0)
        return VAR_7;

    VAR_5[VAR_6] |= VAR_2;
    return 0;
}
