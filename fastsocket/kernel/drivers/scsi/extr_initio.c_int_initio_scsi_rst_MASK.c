
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_ctrl_blk {int hastat; } ;
struct initio_host {int max_tar; TYPE_1__* targets; int * active_tc; int * active; scalar_t__ addr; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct initio_host*,struct scsi_ctrl_blk*) ;
 struct scsi_ctrl_blk* FUNC_3 (struct initio_host*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct initio_host * VAR_10)
{
 struct scsi_ctrl_blk *VAR_11;
 int VAR_12;


 if (FUNC_1(VAR_10->addr + VAR_9) & 0x01) {
  FUNC_4(VAR_1 | VAR_2, VAR_10->addr + VAR_8);

  while ((FUNC_1(VAR_10->addr + VAR_6) & 0x04) == 0)
   FUNC_0();
  FUNC_4(VAR_5, VAR_10->addr + VAR_7);
 }

 while ((VAR_11 = FUNC_3(VAR_10)) != ((void*)0)) {
  VAR_11->hastat = VAR_0;
  FUNC_2(VAR_10, VAR_11);
 }
 VAR_10->active = ((void*)0);
 VAR_10->active_tc = ((void*)0);


 for (VAR_12 = 0; VAR_12 < VAR_10->max_tar; VAR_12++)
  VAR_10->targets[VAR_12].flags &= ~(VAR_3 | VAR_4);
 return -1;
}
