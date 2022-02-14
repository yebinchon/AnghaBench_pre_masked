
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct scsi_ctrl_blk {int tastat; } ;
struct initio_host {scalar_t__ phase; int jsstatus0; scalar_t__ addr; struct scsi_ctrl_blk* active; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct initio_host*) ;
 int FUNC_2 (struct initio_host*) ;
 int FUNC_3 (struct initio_host*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct initio_host*) ;

int FUNC_6(struct initio_host * VAR_14)
{
 struct scsi_ctrl_blk *VAR_15 = VAR_14->active;
 u8 VAR_16;

 FUNC_4(VAR_6, VAR_14->addr + VAR_11);
 if (FUNC_5(VAR_14) == -1)
  return -1;


 VAR_15->tastat = FUNC_0(VAR_14->addr + VAR_13);

 if (VAR_14->phase == VAR_4) {
  if (VAR_14->jsstatus0 & VAR_10)
   FUNC_4(VAR_5, VAR_14->addr + VAR_13);
  else
   FUNC_4(VAR_3, VAR_14->addr + VAR_13);
  FUNC_4(VAR_9, VAR_14->addr + VAR_11);
  return FUNC_5(VAR_14);
 }
 if (VAR_14->phase == VAR_0) {
  VAR_16 = FUNC_0(VAR_14->addr + VAR_13);
  if (VAR_14->jsstatus0 & VAR_10) {
   if ((FUNC_2(VAR_14)) == -1)
    return -1;
   if (VAR_14->phase != VAR_4)
    return FUNC_1(VAR_14);
   FUNC_4(VAR_5, VAR_14->addr + VAR_13);
   FUNC_4(VAR_9, VAR_14->addr + VAR_11);
   return FUNC_5(VAR_14);
  }
  if (VAR_16 == 0) {

   if ((VAR_15->tastat & 0x18) == 0x10)
    return FUNC_1(VAR_14);
   FUNC_4(VAR_7, VAR_14->addr + VAR_12);
   FUNC_4(VAR_8, VAR_14->addr + VAR_11);
   return FUNC_3(VAR_14);

  }
  if (VAR_16 == VAR_1 || VAR_16 == VAR_2) {
   if ((VAR_15->tastat & 0x18) == 0x10)
    return FUNC_2(VAR_14);
  }
 }
 return FUNC_1(VAR_14);
}
