
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t esp_efuse_block_t ;
struct TYPE_4__ {int end; int start; } ;
struct TYPE_3__ {int start; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_3(esp_efuse_block_t VAR_3, unsigned int VAR_4, uint32_t VAR_5)
{
    FUNC_2(VAR_3 >= 0 && VAR_3 < VAR_0);
    unsigned int VAR_6 = (VAR_1[VAR_3].end - VAR_1[VAR_3].start) / sizeof(uint32_t);
    FUNC_2(VAR_4 <= VAR_6);
    uint32_t VAR_7 = VAR_2[VAR_3].start + VAR_4 * 4;
    uint32_t VAR_8 = FUNC_0(VAR_7) | VAR_5;

    FUNC_1(VAR_7, VAR_8);
}
