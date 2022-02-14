
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct scsi_cmnd {int* cmnd; int cmd_len; } ;
struct ata_taskfile {int hob_nsect; int nsect; int flags; int command; int feature; scalar_t__ hob_feature; int protocol; } ;
struct ata_queued_cmd {struct ata_device* dev; struct scsi_cmnd* scsicmd; struct ata_taskfile tf; } ;
struct ata_device {int dma_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (struct scsi_cmnd*,int ,int,int) ;
 int FUNC_2 (void*,int,int ,int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int const*,int *,int*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static unsigned int FUNC_9(struct ata_queued_cmd *VAR_8)
{
 struct ata_taskfile *VAR_9 = &VAR_8->tf;
 struct scsi_cmnd *VAR_10 = VAR_8->scsicmd;
 struct ata_device *VAR_11 = VAR_8->dev;
 const u8 *VAR_12 = VAR_10->cmnd;
 u64 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 void *VAR_16;


 if (FUNC_8(!VAR_11->dma_mode))
  goto invalid_fld;

 if (FUNC_8(VAR_10->cmd_len < 16))
  goto invalid_fld;
 FUNC_4(VAR_12, &VAR_13, &VAR_14);


 if (FUNC_8(!(VAR_12[1] & 0x8)))
  goto invalid_fld;





 if (!FUNC_5(VAR_10))
  goto invalid_fld;

 VAR_16 = FUNC_3(FUNC_7(FUNC_6(VAR_10)));
 VAR_15 = FUNC_2(VAR_16, 512, VAR_13, VAR_14);

 VAR_9->protocol = VAR_2;
 VAR_9->hob_feature = 0;
 VAR_9->feature = VAR_1;
 VAR_9->hob_nsect = (VAR_15 / 512) >> 8;
 VAR_9->nsect = VAR_15 / 512;
 VAR_9->command = VAR_0;
 VAR_9->flags |= VAR_4 | VAR_3 | VAR_5 |
       VAR_6;

 FUNC_0(VAR_8);

 return 0;

 invalid_fld:
 FUNC_1(VAR_10, VAR_7, 0x24, 0x00);

 return 1;
}
