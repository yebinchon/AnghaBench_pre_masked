
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_2__ {int is_alloced; int is_mapped; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_1(int VAR_2, uint16_t *VAR_3)
{
    int VAR_4 = 0;
    for (int VAR_5 = 0; VAR_5 < VAR_1 && VAR_4 != VAR_2; VAR_5++) {
        if (!VAR_0[VAR_5].is_alloced) {
            VAR_3[VAR_4] = VAR_5;
            VAR_4++;
        }
    }
    if (VAR_4 == VAR_2) {

        for (int VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
            VAR_0[VAR_3[VAR_6]].is_alloced = 1;
            FUNC_0(VAR_0[VAR_3[VAR_6]].is_mapped == 0);
        }
        return 1;
    } else {

        return 0;
    }
}
