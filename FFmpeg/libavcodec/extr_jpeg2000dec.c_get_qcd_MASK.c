
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int tmp ;
struct TYPE_4__ {int ncomponents; } ;
typedef int Jpeg2000QuantStyle ;
typedef TYPE_1__ Jpeg2000DecoderContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int FUNC_3(Jpeg2000DecoderContext *VAR_1, int VAR_2, Jpeg2000QuantStyle *VAR_3,
                   uint8_t *VAR_4)
{
    Jpeg2000QuantStyle VAR_5;
    int VAR_6, VAR_7;

    FUNC_2(&VAR_5, 0, sizeof(VAR_5));

    if ((VAR_7 = FUNC_0(VAR_1, VAR_2, &VAR_5)) < 0)
        return VAR_7;
    for (VAR_6 = 0; VAR_6 < VAR_1->ncomponents; VAR_6++)
        if (!(VAR_4[VAR_6] & VAR_0))
            FUNC_1(VAR_3 + VAR_6, &VAR_5, sizeof(VAR_5));
    return 0;
}
