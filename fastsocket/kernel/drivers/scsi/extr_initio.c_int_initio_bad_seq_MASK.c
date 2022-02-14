
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_ctrl_blk {int hastat; } ;
struct initio_host {int max_tar; TYPE_1__* targets; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct initio_host*,struct scsi_ctrl_blk*) ;
 struct scsi_ctrl_blk* FUNC_1 (struct initio_host*) ;
 int FUNC_2 (struct initio_host*,int) ;

__attribute__((used)) static int FUNC_3(struct initio_host * VAR_3)
{
 struct scsi_ctrl_blk *VAR_4;
 int VAR_5;

 FUNC_2(VAR_3, 10);

 while ((VAR_4 = FUNC_1(VAR_3)) != ((void*)0)) {
  VAR_4->hastat = VAR_0;
  FUNC_0(VAR_3, VAR_4);
 }
 for (VAR_5 = 0; VAR_5 < VAR_3->max_tar; VAR_5++)
  VAR_3->targets[VAR_5].flags &= ~(VAR_1 | VAR_2);
 return -1;
}
