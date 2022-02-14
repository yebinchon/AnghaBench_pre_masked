
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_control {int flags; } ;
struct scsi_ctrl_blk {int* cdb; int next_state; scalar_t__ cdblen; } ;
struct initio_host {int phase; scalar_t__ addr; struct target_control* active_tc; struct scsi_ctrl_blk* active; } ;



 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct initio_host*) ;
 int FUNC_2 (struct initio_host*) ;
 int* VAR_13 ;
 int FUNC_3 (struct initio_host*) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct initio_host*) ;

__attribute__((used)) static int FUNC_7(struct initio_host * VAR_14)
{
 struct scsi_ctrl_blk *VAR_15 = VAR_14->active;
 struct target_control *VAR_16 = VAR_14->active_tc;
 int VAR_17;




 for (;;) {
  switch (VAR_14->phase) {
  case 131:
   for (VAR_17 = 0; VAR_17 < (int) VAR_15->cdblen; VAR_17++)
    FUNC_4(VAR_15->cdb[VAR_17], VAR_14->addr + VAR_11);
   FUNC_4(VAR_8, VAR_14->addr + VAR_9);
   if (FUNC_6(VAR_14) == -1)
    return -1;
   if (VAR_14->phase == 131)
    return FUNC_1(VAR_14);
   return 4;

  case 130:
   VAR_15->next_state = 3;
   if (FUNC_2(VAR_14) == -1)
    return -1;
   break;

  case 128:
   if (FUNC_3(VAR_14) == -1)
    return -1;
   break;

  case 129:
   if (VAR_16->flags & (VAR_5 | VAR_3)) {
    FUNC_4(VAR_2, VAR_14->addr + VAR_11);
    FUNC_4(VAR_8, VAR_14->addr + VAR_9);
    if (FUNC_6(VAR_14) == -1)
     return -1;
   } else {
    VAR_16->flags |= VAR_5;

    FUNC_4(VAR_1, VAR_14->addr + VAR_11);
    FUNC_4(3, VAR_14->addr + VAR_11);
    FUNC_4(1, VAR_14->addr + VAR_11);
    FUNC_4(VAR_13[VAR_16->flags & VAR_4], VAR_14->addr + VAR_11);
    FUNC_4(VAR_0, VAR_14->addr + VAR_11);
    FUNC_4(VAR_8, VAR_14->addr + VAR_9);
    if (FUNC_6(VAR_14) == -1)
     return -1;
    FUNC_4(VAR_6, VAR_14->addr + VAR_10);
    FUNC_4(FUNC_0(VAR_14->addr + VAR_12) & (VAR_7 | 7), VAR_14->addr + VAR_12);

   }
   break;
  default:
   return FUNC_1(VAR_14);
  }
 }
}
