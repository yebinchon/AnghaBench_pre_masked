
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int codes_count; int current_codes_count; int avctx; TYPE_1__* codes; void* max_codes_bits; } ;
struct TYPE_5__ {void* delta; } ;
typedef TYPE_2__ MotionPixelsContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(MotionPixelsContext *VAR_2, GetBitContext *VAR_3)
{
    if (VAR_2->codes_count == 1) {
        VAR_2->codes[0].delta = FUNC_1(VAR_3, 4);
    } else {
        int VAR_4;
        int VAR_5;

        VAR_2->max_codes_bits = FUNC_1(VAR_3, 4);
        for (VAR_4 = 0; VAR_4 < VAR_2->codes_count; ++VAR_4)
            VAR_2->codes[VAR_4].delta = FUNC_1(VAR_3, 4);
        VAR_2->current_codes_count = 0;
        if ((VAR_5 = FUNC_2(VAR_2, VAR_3, 0, 0)) < 0)
            return VAR_5;
        if (VAR_2->current_codes_count < VAR_2->codes_count) {
            FUNC_0(VAR_2->avctx, VAR_1, "too few codes\n");
            return VAR_0;
        }
   }
   return 0;
}
