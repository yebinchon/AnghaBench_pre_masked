
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int strict_std_compliance; } ;
typedef TYPE_1__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int) ;
 int FUNC_1 (int **,int ,int) ;
 int* VAR_6 ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_7,
                                      uint8_t (*VAR_8)[3],
                                      int *VAR_9,
                                      int VAR_10)
{
    if (VAR_10 < 1 || (VAR_10 > 7 && VAR_10 < 11) ||
        VAR_10 > 12) {
        FUNC_0(VAR_7, VAR_2,
               "invalid default channel configuration (%d)\n",
               VAR_10);
        return VAR_1;
    }
    *VAR_9 = VAR_6[VAR_10];
    FUNC_1(VAR_8, VAR_5[VAR_10 - 1],
           *VAR_9 * sizeof(*VAR_8));
    if (VAR_10 == 7 && VAR_7->strict_std_compliance < VAR_4) {
        FUNC_0(VAR_7, VAR_3, "Assuming an incorrectly encoded 7.1 channel layout"
               " instead of a spec-compliant 7.1(wide) layout, use -strict %d to decode"
               " according to the specification instead.\n", VAR_4);
        VAR_8[2][2] = VAR_0;
    }

    return 0;
}
