
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ata_taskfile {int flags; unsigned int nsect; int hob_feature; int feature; int hob_lbah; int hob_lbam; int hob_lbal; int lbah; int lbam; int lbal; int device; int hob_nsect; int command; int protocol; } ;
struct ata_device {int flags; int sectors; int heads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*,int,int,int,int,int) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (struct ata_device*) ;
 scalar_t__ FUNC_2 (struct ata_taskfile*,struct ata_device*) ;
 scalar_t__ FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct ata_taskfile *VAR_15, struct ata_device *VAR_16,
      u64 VAR_17, u32 VAR_18, unsigned int VAR_19,
      unsigned int VAR_20)
{
 VAR_15->flags |= VAR_9 | VAR_7;
 VAR_15->flags |= VAR_19;

 if (FUNC_1(VAR_16) && FUNC_5(VAR_20 != VAR_6)) {

  if (!FUNC_4(VAR_17, VAR_18))
   return -VAR_14;

  VAR_15->protocol = VAR_5;
  VAR_15->flags |= VAR_10 | VAR_11;

  if (VAR_15->flags & VAR_12)
   VAR_15->command = VAR_1;
  else
   VAR_15->command = VAR_0;

  VAR_15->nsect = VAR_20 << 3;
  VAR_15->hob_feature = (VAR_18 >> 8) & 0xff;
  VAR_15->feature = VAR_18 & 0xff;

  VAR_15->hob_lbah = (VAR_17 >> 40) & 0xff;
  VAR_15->hob_lbam = (VAR_17 >> 32) & 0xff;
  VAR_15->hob_lbal = (VAR_17 >> 24) & 0xff;
  VAR_15->lbah = (VAR_17 >> 16) & 0xff;
  VAR_15->lbam = (VAR_17 >> 8) & 0xff;
  VAR_15->lbal = VAR_17 & 0xff;

  VAR_15->device = 1 << 6;
  if (VAR_15->flags & VAR_8)
   VAR_15->device |= 1 << 7;
 } else if (VAR_16->flags & VAR_2) {
  VAR_15->flags |= VAR_10;

  if (FUNC_3(VAR_17, VAR_18)) {

   VAR_15->device |= (VAR_17 >> 24) & 0xf;
  } else if (FUNC_4(VAR_17, VAR_18)) {
   if (!(VAR_16->flags & VAR_3))
    return -VAR_14;


   VAR_15->flags |= VAR_11;

   VAR_15->hob_nsect = (VAR_18 >> 8) & 0xff;

   VAR_15->hob_lbah = (VAR_17 >> 40) & 0xff;
   VAR_15->hob_lbam = (VAR_17 >> 32) & 0xff;
   VAR_15->hob_lbal = (VAR_17 >> 24) & 0xff;
  } else

   return -VAR_14;

  if (FUNC_6(FUNC_2(VAR_15, VAR_16) < 0))
   return -VAR_13;

  VAR_15->nsect = VAR_18 & 0xff;

  VAR_15->lbah = (VAR_17 >> 16) & 0xff;
  VAR_15->lbam = (VAR_17 >> 8) & 0xff;
  VAR_15->lbal = VAR_17 & 0xff;

  VAR_15->device |= VAR_4;
 } else {

  u32 VAR_21, VAR_22, VAR_23, VAR_24;


  if (!FUNC_3(VAR_17, VAR_18))
   return -VAR_14;

  if (FUNC_6(FUNC_2(VAR_15, VAR_16) < 0))
   return -VAR_13;


  VAR_24 = (u32)VAR_17 / VAR_16->sectors;
  VAR_23 = VAR_24 / VAR_16->heads;
  VAR_22 = VAR_24 % VAR_16->heads;
  VAR_21 = (u32)VAR_17 % VAR_16->sectors + 1;

  FUNC_0("block %u track %u cyl %u head %u sect %u\n",
   (u32)VAR_17, VAR_24, VAR_23, VAR_22, VAR_21);





  if ((VAR_23 >> 16) || (VAR_22 >> 4) || (VAR_21 >> 8) || (!VAR_21))
   return -VAR_14;

  VAR_15->nsect = VAR_18 & 0xff;
  VAR_15->lbal = VAR_21;
  VAR_15->lbam = VAR_23;
  VAR_15->lbah = VAR_23 >> 8;
  VAR_15->device |= VAR_22;
 }

 return 0;
}
