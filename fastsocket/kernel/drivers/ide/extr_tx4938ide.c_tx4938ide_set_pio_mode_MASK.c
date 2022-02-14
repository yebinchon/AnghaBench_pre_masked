
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct tx4938ide_platform_info {int gbus_clock; int ebus_ch; } ;
struct TYPE_9__ {TYPE_1__* dev; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_10__ {TYPE_2__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_8__ {struct tx4938ide_platform_info* platform_data; } ;


 int FUNC_0 (TYPE_3__*,int,int) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(ide_drive_t *VAR_0, const u8 VAR_1)
{
 ide_hwif_t *VAR_2 = VAR_0->hwif;
 struct tx4938ide_platform_info *VAR_3 = VAR_2->dev->platform_data;
 u8 VAR_4 = VAR_1;
 ide_drive_t *VAR_5;

 VAR_5 = FUNC_1(VAR_0);
 if (VAR_5)
  VAR_4 = FUNC_2(VAR_4, FUNC_0(VAR_5, 255, 5));
 FUNC_3(VAR_3->ebus_ch, VAR_3->gbus_clock, VAR_4);
}
