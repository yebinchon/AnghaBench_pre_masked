
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int charge_mode; scalar_t__ full_count; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(void)
{
 FUNC_0(VAR_2.dev, "Turning Charger On\n");

 VAR_2.full_count = 0;
 VAR_2.charge_mode = VAR_0;
 FUNC_2(&VAR_3, FUNC_1(250));
 FUNC_2(&VAR_1, FUNC_1(500));
}
