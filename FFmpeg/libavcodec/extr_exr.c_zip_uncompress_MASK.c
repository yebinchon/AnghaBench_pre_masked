
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int (* reorder_pixels ) (int ,int ,int) ;int (* predictor ) (int ,int) ;} ;
struct TYPE_8__ {TYPE_1__ dsp; } ;
struct TYPE_7__ {int tmp; int uncompressed_data; } ;
typedef TYPE_2__ EXRThreadData ;
typedef TYPE_3__ EXRContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int ,unsigned long*,int const*,int) ;

__attribute__((used)) static int FUNC_4(EXRContext *VAR_2, const uint8_t *VAR_3, int VAR_4,
                          int VAR_5, EXRThreadData *VAR_6)
{
    unsigned long VAR_7 = VAR_5;

    if (FUNC_3(VAR_6->tmp, &VAR_7, VAR_3, VAR_4) != VAR_1 ||
        VAR_7 != VAR_5)
        return VAR_0;

    FUNC_0(VAR_5 % 2 == 0);

    VAR_2->dsp.predictor(VAR_6->tmp, VAR_5);
    VAR_2->dsp.reorder_pixels(VAR_6->uncompressed_data, VAR_6->tmp, VAR_5);

    return 0;
}
