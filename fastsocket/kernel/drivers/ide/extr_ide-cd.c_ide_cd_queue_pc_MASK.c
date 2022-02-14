
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct request_sense {scalar_t__ sense_key; int asc; int ascq; } ;
struct request {unsigned int cmd_flags; int timeout; unsigned int resid_len; struct request_sense* sense; int cmd_type; int cmd; } ;
struct cdrom_info {int disk; } ;
struct TYPE_4__ {int queue; struct cdrom_info* driver_data; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,struct request*,int ) ;
 struct request* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (int ,struct request*,void*,unsigned int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*,unsigned char const,int,int,unsigned int) ;
 int FUNC_6 (int ,unsigned char const*,int ) ;
 int FUNC_7 (int) ;

int FUNC_8(ide_drive_t *VAR_9, const unsigned char *VAR_10,
      int VAR_11, void *VAR_12, unsigned *VAR_13,
      struct request_sense *VAR_14, int VAR_15,
      unsigned int VAR_16)
{
 struct cdrom_info *VAR_17 = VAR_9->driver_data;
 struct request_sense VAR_18;
 int VAR_19 = 10;
 unsigned int VAR_20 = 0;

 if (!VAR_14)
  VAR_14 = &VAR_18;

 FUNC_5(VAR_3, "cmd[0]: 0x%x, write: 0x%x, timeout: %d, "
      "cmd_flags: 0x%x",
      VAR_10[0], VAR_11, VAR_15, VAR_16);


 do {
  struct request *VAR_21;
  int VAR_22;

  VAR_21 = FUNC_1(VAR_9->queue, VAR_11, VAR_8);

  FUNC_6(VAR_21->cmd, VAR_10, VAR_0);
  VAR_21->cmd_type = VAR_6;
  VAR_21->sense = VAR_14;
  VAR_21->cmd_flags |= VAR_16;
  VAR_21->timeout = VAR_15;
  if (VAR_12) {
   VAR_22 = FUNC_3(VAR_9->queue, VAR_21, VAR_12,
      *VAR_13, VAR_2);
   if (VAR_22) {
    FUNC_2(VAR_21);
    return VAR_22;
   }
  }

  VAR_22 = FUNC_0(VAR_9->queue, VAR_17->disk, VAR_21, 0);

  if (VAR_12)
   *VAR_13 = VAR_21->resid_len;

  VAR_20 = VAR_21->cmd_flags;
  FUNC_2(VAR_21);





  if (VAR_20 & VAR_5) {




   struct request_sense *VAR_23 = VAR_14;

   if (VAR_23->sense_key == VAR_7)
    FUNC_4(VAR_9);
   else if (VAR_23->sense_key == VAR_4 &&
     VAR_23->asc == 4 && VAR_23->ascq != 4) {





    FUNC_7(2);
   } else {

    VAR_19 = 0;
   }
   --VAR_19;
  }


 } while ((VAR_20 & VAR_5) && VAR_19 >= 0);


 return (VAR_20 & VAR_5) ? -VAR_1 : 0;
}
