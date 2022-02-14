
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ size; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int esp_flash_t ;


 int FUNC_0 (int ,char*,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int *,TYPE_1__ const*,int const*,size_t) ;
 int FUNC_4 (int *,TYPE_1__ const*,int const*,size_t) ;

__attribute__((used)) static void FUNC_5(esp_flash_t *VAR_2, const uint8_t *VAR_3, size_t VAR_4)
{
    FUNC_0(VAR_1, "Testing chip %p...", VAR_2);
    const esp_partition_t *VAR_5 = FUNC_2();
    FUNC_1(VAR_5->size > VAR_4 + 2 + VAR_0);

    FUNC_4(VAR_2, VAR_5, VAR_3, VAR_4);
    FUNC_3(VAR_2, VAR_5, VAR_3, VAR_4);
}
