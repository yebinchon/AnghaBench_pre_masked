
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef size_t esp_efuse_block_t ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ end; } ;


 scalar_t__ FUNC_0 (size_t,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(esp_efuse_block_t VAR_1, uint32_t* VAR_2)
{
    int VAR_3 = 0;
    for (uint32_t VAR_4 = VAR_0[VAR_1].start; VAR_4 <= VAR_0[VAR_1].end; VAR_4 += 4, ++VAR_3) {
        VAR_2[VAR_3] = FUNC_0(VAR_1, VAR_3);
    }
}
