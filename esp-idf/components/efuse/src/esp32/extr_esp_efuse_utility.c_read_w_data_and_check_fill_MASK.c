
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef size_t esp_efuse_block_t ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ end; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static bool FUNC_2(esp_efuse_block_t VAR_1, uint32_t *VAR_2)
{
    bool VAR_3 = 0;
    int VAR_4 = 0;
    for (uint32_t VAR_5 = VAR_0[VAR_1].start; VAR_5 <= VAR_0[VAR_1].end; VAR_5 += 4, ++VAR_4) {
        VAR_2[VAR_4] = FUNC_0(VAR_5);
        if (VAR_2[VAR_4] != 0) {
            FUNC_1(VAR_5, 0);
            VAR_3 = 1;
        }
    }
    return VAR_3;
}
