
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ address; } ;
typedef TYPE_1__ esp_partition_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_2(void)
{
    if (VAR_0 == 0) {
        const esp_partition_t *VAR_1 = FUNC_0();
        VAR_0 = VAR_1->address;
        FUNC_1("Test data partition @ 0x%x\n", VAR_0);
    }
}
