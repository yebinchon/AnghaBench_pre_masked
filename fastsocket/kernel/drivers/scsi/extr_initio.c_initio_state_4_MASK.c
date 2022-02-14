
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_ctrl_blk {int flags; scalar_t__ buflen; int next_state; void* hastat; } ;
struct initio_host {int phase; int jsstatus0; scalar_t__ addr; struct scsi_ctrl_blk* active; } ;




 void* VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct initio_host*) ;
 int FUNC_1 (struct initio_host*) ;
 int FUNC_2 (struct initio_host*) ;
 int FUNC_3 (struct initio_host*) ;
 int FUNC_4 (struct initio_host*) ;
 int FUNC_5 (struct initio_host*) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct initio_host*) ;

__attribute__((used)) static int FUNC_9(struct initio_host * VAR_8)
{
 struct scsi_ctrl_blk *VAR_9 = VAR_8->active;




 if ((VAR_9->flags & VAR_2) == VAR_3) {
  return 6;
 }
 for (;;) {
  if (VAR_9->buflen == 0)
   return 6;

  switch (VAR_8->phase) {

  case 128:
   if ((VAR_9->flags & VAR_2) != 0)
    VAR_9->hastat = VAR_0;
   if ((FUNC_3(VAR_8)) == -1)
    return -1;
   break;

  case 130:
   VAR_9->next_state = 0x4;
   if (FUNC_1(VAR_8) == -1)
    return -1;
   break;

  case 129:
   if (VAR_8->jsstatus0 & VAR_5) {
    VAR_9->buflen = 0;
    VAR_9->hastat = VAR_0;
    if (FUNC_2(VAR_8) == -1)
     return -1;
    return 6;
   } else {
    FUNC_6(VAR_1, VAR_8->addr + VAR_7);
    FUNC_6(VAR_4, VAR_8->addr + VAR_6);
    if (FUNC_8(VAR_8) == -1)
     return -1;
   }
   break;

  case 132:
   return FUNC_4(VAR_8);

  case 131:
   return FUNC_5(VAR_8);

  default:
   return FUNC_0(VAR_8);
  }
 }
}
