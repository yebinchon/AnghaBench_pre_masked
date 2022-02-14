
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int subtype; } ;
typedef TYPE_1__ esp_partition_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void)
{
    VAR_3 = 5;
    FUNC_0(VAR_2, "boot count %d", VAR_3);
    const esp_partition_t *VAR_4 = FUNC_5();
    FUNC_0(VAR_2, "erase_last_app");
    FUNC_1(VAR_1, VAR_4->subtype);
    FUNC_2(VAR_0, FUNC_4());
    FUNC_3();
}
