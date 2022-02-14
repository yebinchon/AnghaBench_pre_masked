
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tGATT_STATUS ;
struct TYPE_2__ {int gatt_if; int handle_srvc; int enabled; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static tGATT_STATUS FUNC_4(void)
{
    if (!VAR_2.enabled) {
        FUNC_3("BLUFI already de-initialized");
        return VAR_0;
    }

    FUNC_2(VAR_2.handle_srvc);
    FUNC_1(VAR_2.handle_srvc);

    FUNC_0(VAR_2.gatt_if);

    return VAR_1;
}
