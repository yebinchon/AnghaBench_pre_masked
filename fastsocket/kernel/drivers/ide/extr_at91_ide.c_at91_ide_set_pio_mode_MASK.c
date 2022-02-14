
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ide_timing {int dummy; } ;
struct TYPE_6__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_5__ {scalar_t__ select_data; } ;


 int FUNC_0 (int) ;
 scalar_t__ const VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__ const,struct ide_timing*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__ const) ;
 struct ide_timing* FUNC_3 (scalar_t__ const) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__ const) ;

__attribute__((used)) static void FUNC_5(ide_drive_t *VAR_1, const u8 VAR_2)
{
 struct ide_timing *VAR_3;
 u8 VAR_4 = VAR_1->hwif->select_data;
 int VAR_5 = 0;

 FUNC_4("chipselect %u pio %u\n", VAR_4, VAR_2);

 VAR_3 = FUNC_3(VAR_0 + VAR_2);
 FUNC_0(!VAR_3);

 if (FUNC_2(VAR_1, VAR_2))
  VAR_5 = 1;

 FUNC_1(VAR_4, VAR_2, VAR_3, VAR_5);
}
