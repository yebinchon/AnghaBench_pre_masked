
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ end; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,...) ;
 TYPE_1__* VAR_1 ;
 int** VAR_2 ;

void FUNC_2(void)
{
    FUNC_1("EFUSE_BLKx:\n");
    for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        FUNC_1("%d) ", VAR_3);
        for (uint32_t VAR_4 = VAR_1[VAR_3].start; VAR_4 <= VAR_1[VAR_3].end; VAR_4 += 4) {
            FUNC_1("0x%08x ", FUNC_0(VAR_4));
        }
        FUNC_1("\n");
    }

    FUNC_1("\n");
}
