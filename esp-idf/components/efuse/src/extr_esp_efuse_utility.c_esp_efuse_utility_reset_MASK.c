
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ end; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_1 ;

void FUNC_2(void)
{
    FUNC_1();
    for (int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        for (uint32_t VAR_3 = VAR_1[VAR_2].start; VAR_3 <= VAR_1[VAR_2].end; VAR_3 += 4) {
            FUNC_0(VAR_3, 0);
        }
    }
}
