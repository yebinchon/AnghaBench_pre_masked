
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t esp_efuse_block_t ;
struct TYPE_2__ {int end; int start; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;
 int ** VAR_2 ;

uint32_t FUNC_2(esp_efuse_block_t VAR_3, unsigned int VAR_4)
{
    FUNC_1(VAR_3 >= 0 && VAR_3 < VAR_0);
    unsigned int VAR_5 = (VAR_1[VAR_3].end - VAR_1[VAR_3].start) / sizeof(uint32_t);
    FUNC_1(VAR_4 <= VAR_5);
    uint32_t VAR_6;



    VAR_6 = FUNC_0(VAR_1[VAR_3].start + VAR_4 * 4);

    return VAR_6;
}
