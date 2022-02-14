
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int (* add_left_pred ) (int*,int*,int,int ) ;} ;
struct TYPE_7__ {TYPE_1__* avctx; TYPE_2__ llviddsp; } ;
struct TYPE_5__ {scalar_t__ pix_fmt; } ;
typedef TYPE_3__ LagarithContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,int*,int*,int,int*,int*) ;
 int FUNC_1 (int*,int*,int,int ) ;

__attribute__((used)) static void FUNC_2(LagarithContext *VAR_1, uint8_t *VAR_2,
                          int VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;

    if (!VAR_5) {

        VAR_6 = VAR_1->llviddsp.add_left_pred(VAR_2, VAR_2, VAR_3, 0);
    } else {

        VAR_6 = VAR_2[VAR_3 - VAR_4 - 1];

        if (VAR_5 == 1) {


            VAR_7 = VAR_1->avctx->pix_fmt == VAR_0 ? VAR_2[-VAR_4] : VAR_6;
        } else {

            VAR_7 = VAR_2[VAR_3 - (2 * VAR_4) - 1];
        }

        FUNC_0(VAR_2, VAR_2 - VAR_4, VAR_2,
                                  VAR_3, &VAR_6, &VAR_7);
    }
}
