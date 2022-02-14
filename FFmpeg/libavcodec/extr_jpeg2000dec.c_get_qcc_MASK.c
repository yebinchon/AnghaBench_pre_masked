
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int ncomponents; int avctx; int g; } ;
typedef int Jpeg2000QuantStyle ;
typedef TYPE_1__ Jpeg2000DecoderContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int,int *) ;

__attribute__((used)) static int FUNC_4(Jpeg2000DecoderContext *VAR_3, int VAR_4, Jpeg2000QuantStyle *VAR_5,
                   uint8_t *VAR_6)
{
    int VAR_7;

    if (FUNC_1(&VAR_3->g) < 1)
        return VAR_0;

    VAR_7 = FUNC_2(&VAR_3->g);

    if (VAR_7 >= VAR_3->ncomponents) {
        FUNC_0(VAR_3->avctx, VAR_1,
               "Invalid compno %d. There are %d components in the image.\n",
               VAR_7, VAR_3->ncomponents);
        return VAR_0;
    }

    VAR_6[VAR_7] |= VAR_2;
    return FUNC_3(VAR_3, VAR_4 - 1, VAR_5 + VAR_7);
}
