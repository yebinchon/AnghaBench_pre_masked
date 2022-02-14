
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_ctrl_blk {scalar_t__ tastat; int hastat; } ;
struct initio_host {struct scsi_ctrl_blk* active; int index; } ;


 int VAR_0 ;
 int FUNC_0 (struct initio_host*,struct scsi_ctrl_blk*) ;
 int FUNC_1 (struct initio_host*) ;
 int FUNC_2 (struct initio_host*,int) ;
 int FUNC_3 (struct initio_host*) ;
 int FUNC_4 (struct initio_host*,struct scsi_ctrl_blk*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int FUNC_6(struct initio_host * VAR_1)
{
 struct scsi_ctrl_blk *VAR_2;

 FUNC_5("initio_bad_seg c=%d\n", VAR_1->index);

 if ((VAR_2 = VAR_1->active) != ((void*)0)) {
  FUNC_4(VAR_1, VAR_2);
  VAR_2->hastat = VAR_0;
  VAR_2->tastat = 0;
  FUNC_0(VAR_1, VAR_2);
 }
 FUNC_3(VAR_1);
 FUNC_2(VAR_1, 8);
 return FUNC_1(VAR_1);
}
