
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct scsi_cmnd {int* cmnd; int cmd_len; int result; TYPE_1__* device; } ;
struct ata_queued_cmd {int nbytes; int tag; int dev; int tf; int flags; struct scsi_cmnd* scsicmd; } ;
struct TYPE_2__ {int sector_size; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;



 int FUNC_1 (int *,int ,int ,int,unsigned int,int ) ;
 int FUNC_2 (struct scsi_cmnd*,int ,int,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int const*,int *,int*) ;
 int FUNC_5 (int const*,int *,int*) ;
 int FUNC_6 (int const*,int *,int*) ;
 int FUNC_7 (int const) ;

__attribute__((used)) static unsigned int FUNC_8(struct ata_queued_cmd *VAR_6)
{
 struct scsi_cmnd *VAR_7 = VAR_6->scsicmd;
 const u8 *VAR_8 = VAR_7->cmnd;
 unsigned int VAR_9 = 0;
 u64 VAR_10;
 u32 VAR_11;
 int VAR_12;

 if (VAR_8[0] == 130 || VAR_8[0] == 128 || VAR_8[0] == 129)
  VAR_9 |= VAR_2;


 switch (VAR_8[0]) {
 case 133:
 case 130:
  if (FUNC_7(VAR_7->cmd_len < 10))
   goto invalid_fld;
  FUNC_4(VAR_8, &VAR_10, &VAR_11);
  if (FUNC_7(VAR_8[1] & (1 << 3)))
   VAR_9 |= VAR_1;
  break;
 case 131:
 case 128:
  if (FUNC_7(VAR_7->cmd_len < 6))
   goto invalid_fld;
  FUNC_6(VAR_8, &VAR_10, &VAR_11);




  if (!VAR_11)
   VAR_11 = 256;
  break;
 case 132:
 case 129:
  if (FUNC_7(VAR_7->cmd_len < 16))
   goto invalid_fld;
  FUNC_5(VAR_8, &VAR_10, &VAR_11);
  if (FUNC_7(VAR_8[1] & (1 << 3)))
   VAR_9 |= VAR_1;
  break;
 default:
  FUNC_0("no-byte command\n");
  goto invalid_fld;
 }


 if (!VAR_11)







  goto nothing_to_do;

 VAR_6->flags |= VAR_0;
 VAR_6->nbytes = VAR_11 * VAR_7->device->sector_size;

 VAR_12 = FUNC_1(&VAR_6->tf, VAR_6->dev, VAR_10, VAR_11, VAR_9,
        VAR_6->tag);
 if (FUNC_3(VAR_12 == 0))
  return 0;

 if (VAR_12 == -VAR_3)
  goto out_of_range;

invalid_fld:
 FUNC_2(VAR_7, VAR_4, 0x24, 0x0);

 return 1;

out_of_range:
 FUNC_2(VAR_7, VAR_4, 0x21, 0x0);

 return 1;

nothing_to_do:
 VAR_7->result = VAR_5;
 return 1;
}
