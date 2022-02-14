
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ata_taskfile {int flags; int hob_lbal; int hob_lbam; int hob_lbah; int device; int lbal; int lbam; int lbah; int feature; int protocol; int command; } ;
struct ata_device {int id; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct ata_device*,int ,char*,unsigned int) ;
 unsigned int FUNC_1 (struct ata_device*,struct ata_taskfile*,int *,int ,int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ata_device*,struct ata_taskfile*) ;

__attribute__((used)) static int FUNC_4(struct ata_device *VAR_14, u64 VAR_15)
{
 unsigned int VAR_16;
 struct ata_taskfile VAR_17;
 int VAR_18 = FUNC_2(VAR_14->id);

 VAR_15--;

 FUNC_3(VAR_14, &VAR_17);

 VAR_17.flags |= VAR_7 | VAR_8;

 if (VAR_18) {
  VAR_17.command = VAR_3;
  VAR_17.flags |= VAR_9;

  VAR_17.hob_lbal = (VAR_15 >> 24) & 0xff;
  VAR_17.hob_lbam = (VAR_15 >> 32) & 0xff;
  VAR_17.hob_lbah = (VAR_15 >> 40) & 0xff;
 } else {
  VAR_17.command = VAR_2;

  VAR_17.device |= (VAR_15 >> 24) & 0xf;
 }

 VAR_17.protocol |= VAR_6;
 VAR_17.device |= VAR_5;

 VAR_17.lbal = (VAR_15 >> 0) & 0xff;
 VAR_17.lbam = (VAR_15 >> 8) & 0xff;
 VAR_17.lbah = (VAR_15 >> 16) & 0xff;

 VAR_16 = FUNC_1(VAR_14, &VAR_17, ((void*)0), VAR_10, ((void*)0), 0, 0);
 if (VAR_16) {
  FUNC_0(VAR_14, VAR_13, "failed to set "
          "max address (err_mask=0x%x)\n", VAR_16);
  if (VAR_16 == VAR_0 &&
      (VAR_17.feature & (VAR_1 | VAR_4)))
   return -VAR_11;
  return -VAR_12;
 }

 return 0;
}
