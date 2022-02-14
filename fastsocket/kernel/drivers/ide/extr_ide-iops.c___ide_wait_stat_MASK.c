
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct ide_tp_ops {int (* read_status ) (TYPE_1__*) ;} ;
struct TYPE_8__ {struct ide_tp_ops* tp_ops; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_9__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (scalar_t__,unsigned long) ;
 int FUNC_9 (int) ;

int FUNC_10(ide_drive_t *VAR_4, u8 VAR_5, u8 VAR_6,
      unsigned long VAR_7, u8 *VAR_8)
{
 ide_hwif_t *VAR_9 = VAR_4->hwif;
 const struct ide_tp_ops *VAR_10 = VAR_9->tp_ops;
 unsigned long VAR_11;
 int VAR_12;
 u8 VAR_13;

 FUNC_9(1);
 VAR_13 = VAR_10->read_status(VAR_9);

 if (VAR_13 & VAR_0) {
  FUNC_3(VAR_11);
  FUNC_1();
  VAR_7 += VAR_3;
  while ((VAR_13 = VAR_10->read_status(VAR_9)) & VAR_0) {
   if (FUNC_8(VAR_3, VAR_7)) {





    VAR_13 = VAR_10->read_status(VAR_9);
    if ((VAR_13 & VAR_0) == 0)
     break;

    FUNC_2(VAR_11);
    *VAR_8 = VAR_13;
    return -VAR_1;
   }
  }
  FUNC_2(VAR_11);
 }







 for (VAR_12 = 0; VAR_12 < 10; VAR_12++) {
  FUNC_9(1);
  VAR_13 = VAR_10->read_status(VAR_9);

  if (FUNC_0(VAR_13, VAR_5, VAR_6)) {
   *VAR_8 = VAR_13;
   return 0;
  }
 }
 *VAR_8 = VAR_13;
 return -VAR_2;
}
