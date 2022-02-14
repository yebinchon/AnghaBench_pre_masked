
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {TYPE_1__* tp_ops; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_8__ {int name; TYPE_2__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_6__ {int (* read_status ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u8 FUNC_3(ide_drive_t *VAR_1)
{
 ide_hwif_t *VAR_2 = VAR_1->hwif;
 int VAR_3;
 u8 VAR_4;





 for (VAR_3 = 0; VAR_3 < 1000; VAR_3++) {
  VAR_4 = VAR_2->tp_ops->read_status(VAR_2);

  if (VAR_4 & VAR_0)
   FUNC_2(10);
  else
   break;
 }

 if (VAR_4 & VAR_0)
  FUNC_0("%s: drive still BUSY!\n", VAR_1->name);

 return VAR_4;
}
