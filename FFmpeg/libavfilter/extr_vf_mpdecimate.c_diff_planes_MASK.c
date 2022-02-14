
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int frac; int (* sad ) (int *,int,int *,int) ;int hi; int lo; } ;
typedef TYPE_1__ DecimateContext ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,char*,int,...) ;
 int FUNC_1 (int *,int,int *,int) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_1,
                       uint8_t *VAR_2, int VAR_3,
                       uint8_t *VAR_4, int VAR_5,
                       int VAR_6, int VAR_7)
{
    DecimateContext *VAR_8 = VAR_1->priv;

    int VAR_9, VAR_10;
    int VAR_11, VAR_12 = 0;
    int VAR_13 = (VAR_6/16)*(VAR_7/16)*VAR_8->frac;


    for (VAR_10 = 0; VAR_10 < VAR_7-7; VAR_10 += 4) {
        for (VAR_9 = 8; VAR_9 < VAR_6-7; VAR_9 += 4) {
            VAR_11 = VAR_8->sad(VAR_2 + VAR_10*VAR_3 + VAR_9, VAR_3,
                              VAR_4 + VAR_10*VAR_5 + VAR_9, VAR_5);
            if (VAR_11 > VAR_8->hi) {
                FUNC_0(VAR_1, VAR_0, "%d>=hi ", VAR_11);
                return 1;
            }
            if (VAR_11 > VAR_8->lo) {
                VAR_12++;
                if (VAR_12 > VAR_13) {
                    FUNC_0(VAR_1, VAR_0, "lo:%d>=%d ", VAR_12, VAR_13);
                    return 1;
                }
            }
        }
    }

    FUNC_0(VAR_1, VAR_0, "lo:%d<%d ", VAR_12, VAR_13);
    return 0;
}
