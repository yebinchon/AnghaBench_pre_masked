
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct scsi_cmnd {int* cmnd; scalar_t__ sc_data_direction; TYPE_1__* device; } ;
struct ata_taskfile {scalar_t__ protocol; int hob_feature; int hob_nsect; int hob_lbal; int hob_lbam; int hob_lbah; int flags; int feature; int nsect; int lbal; int lbam; int lbah; int device; int command; } ;
struct ata_queued_cmd {int flags; int sect_size; struct ata_device* dev; struct scsi_cmnd* scsicmd; struct ata_taskfile tf; } ;
struct ata_device {scalar_t__ dma_mode; unsigned int multi_count; scalar_t__ devno; } ;
struct TYPE_2__ {int sector_size; } ;


 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct ata_device*,int ,char*,unsigned int) ;
 int FUNC_1 (struct ata_queued_cmd*) ;
 scalar_t__ FUNC_2 (int const) ;
 int FUNC_3 (struct scsi_cmnd*,int ,int,int) ;
 scalar_t__ FUNC_4 (struct ata_taskfile*) ;
 int VAR_17 ;
 int FUNC_5 (struct scsi_cmnd*) ;

__attribute__((used)) static unsigned int FUNC_6(struct ata_queued_cmd *VAR_18)
{
 struct ata_taskfile *VAR_19 = &(VAR_18->tf);
 struct scsi_cmnd *VAR_20 = VAR_18->scsicmd;
 struct ata_device *VAR_21 = VAR_18->dev;
 const u8 *VAR_22 = VAR_20->cmnd;

 if ((VAR_19->protocol = FUNC_2(VAR_22[1])) == VAR_5)
  goto invalid_fld;





 if (VAR_22[0] == VAR_0) {





  if (VAR_22[1] & 0x01) {
   VAR_19->hob_feature = VAR_22[3];
   VAR_19->hob_nsect = VAR_22[5];
   VAR_19->hob_lbal = VAR_22[7];
   VAR_19->hob_lbam = VAR_22[9];
   VAR_19->hob_lbah = VAR_22[11];
   VAR_19->flags |= VAR_11;
  } else
   VAR_19->flags &= ~VAR_11;




  VAR_19->feature = VAR_22[4];
  VAR_19->nsect = VAR_22[6];
  VAR_19->lbal = VAR_22[8];
  VAR_19->lbam = VAR_22[10];
  VAR_19->lbah = VAR_22[12];
  VAR_19->device = VAR_22[13];
  VAR_19->command = VAR_22[14];
 } else {



  VAR_19->flags &= ~VAR_11;

  VAR_19->feature = VAR_22[3];
  VAR_19->nsect = VAR_22[4];
  VAR_19->lbal = VAR_22[5];
  VAR_19->lbam = VAR_22[6];
  VAR_19->lbah = VAR_22[7];
  VAR_19->device = VAR_22[8];
  VAR_19->command = VAR_22[9];
 }


 VAR_19->device = VAR_21->devno ?
  VAR_19->device | VAR_2 : VAR_19->device & ~VAR_2;

 switch (VAR_19->command) {

 case 148:
 case 147:
 case 136:
 case 135:
  if (VAR_19->protocol != VAR_4 || VAR_19->nsect != 1)
   goto invalid_fld;
  VAR_18->sect_size = FUNC_5(VAR_20);
  break;


 case 157:
 case 159:
 case 158:

 case 150:
 case 149:
 case 144:

 case 156:
 case 146:
 case 145:
 case 154:
 case 153:
 case 143:
 case 142:
 case 141:
 case 140:
 case 139:
 case 138:
 case 137:
 case 131:
 case 130:
 case 155:
 case 134:
 case 133:
 case 132:
 case 152:
 case 151:
 case 129:
 case 128:
  VAR_18->sect_size = VAR_20->device->sector_size;
  break;


 default:
  VAR_18->sect_size = VAR_8;
 }






 VAR_19->flags |= VAR_10 | VAR_9;
 if (VAR_20->sc_data_direction == VAR_13)
  VAR_19->flags |= VAR_12;

 VAR_18->flags |= VAR_7 | VAR_6;







 FUNC_1(VAR_18);


 if (VAR_19->protocol == VAR_3 && VAR_21->dma_mode == 0)
  goto invalid_fld;


 if ((VAR_22[1] & 0xe0) && !FUNC_4(VAR_19))
  goto invalid_fld;

 if (FUNC_4(VAR_19)) {
  unsigned int VAR_23 = 1 << (VAR_22[1] >> 5);




  if (VAR_23 != VAR_21->multi_count)
   FUNC_0(VAR_21, VAR_15,
           "invalid multi_count %u ignored\n",
           VAR_23);
 }
 if (VAR_19->command == VAR_1 &&
     VAR_19->feature == VAR_16)
  goto invalid_fld;
 if (VAR_19->command >= 0x5C && VAR_19->command <= 0x5F && !VAR_17)
  goto invalid_fld;

 return 0;

 invalid_fld:
 FUNC_3(VAR_20, VAR_14, 0x24, 0x00);

 return 1;
}
