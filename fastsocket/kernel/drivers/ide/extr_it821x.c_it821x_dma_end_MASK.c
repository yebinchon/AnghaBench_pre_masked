
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct it821x_dev {scalar_t__* mwdma; int * pio; } ;
typedef int ide_hwif_t ;
struct TYPE_5__ {int dn; int * hwif; } ;
typedef TYPE_1__ ide_drive_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct it821x_dev* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(ide_drive_t *VAR_1)
{
 ide_hwif_t *VAR_2 = VAR_1->hwif;
 struct it821x_dev *VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = FUNC_0(VAR_1);
 u8 VAR_5 = VAR_1->dn & 1;

 if(VAR_3->mwdma[VAR_5] != VAR_0)
  FUNC_2(VAR_1, VAR_3->pio[VAR_5]);
 return VAR_4;
}
