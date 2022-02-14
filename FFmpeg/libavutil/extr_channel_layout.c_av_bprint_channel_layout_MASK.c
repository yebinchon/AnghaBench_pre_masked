
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct AVBPrint {int dummy; } ;
struct TYPE_3__ {int nb_channels; scalar_t__ layout; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct AVBPrint*,char*,...) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 char* FUNC_4 (int) ;

void FUNC_5(struct AVBPrint *VAR_1,
                              int VAR_2, uint64_t VAR_3)
{
    int VAR_4;

    if (VAR_2 <= 0)
        VAR_2 = FUNC_3(VAR_3);

    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
        if (VAR_2 == VAR_0[VAR_4].nb_channels &&
            VAR_3 == VAR_0[VAR_4].layout) {
            FUNC_2(VAR_1, "%s", VAR_0[VAR_4].name);
            return;
        }

    FUNC_2(VAR_1, "%d channels", VAR_2);
    if (VAR_3) {
        int VAR_5, VAR_6;
        FUNC_2(VAR_1, " (");
        for (VAR_5 = 0, VAR_6 = 0; VAR_5 < 64; VAR_5++) {
            if ((VAR_3 & (FUNC_1(1) << VAR_5))) {
                const char *VAR_7 = FUNC_4(VAR_5);
                if (VAR_7) {
                    if (VAR_6 > 0)
                        FUNC_2(VAR_1, "+");
                    FUNC_2(VAR_1, "%s", VAR_7);
                }
                VAR_6++;
            }
        }
        FUNC_2(VAR_1, ")");
    }
}
