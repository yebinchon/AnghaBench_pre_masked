
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int non_blocking; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 TYPE_1__** VAR_5 ;

__attribute__((used)) static int FUNC_1(int VAR_6, int VAR_7, int VAR_8)
{
    FUNC_0(VAR_6 >=0 && VAR_6 < 3);
    int VAR_9 = 0;
    if (VAR_7 == VAR_1) {
        if (VAR_5[VAR_6]->non_blocking) {
            VAR_9 |= VAR_3;
        }
    } else if (VAR_7 == VAR_2) {
        VAR_5[VAR_6]->non_blocking = (VAR_8 & VAR_3) != 0;
    } else {

        VAR_9 = -1;
        VAR_4 = VAR_0;
    }
    return VAR_9;
}
