
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_cmnd {int* cmnd; int result; } ;
struct ata_scsi_args {void (* done ) (struct scsi_cmnd*) ;struct scsi_cmnd* cmd; int id; struct ata_device* dev; } ;
struct ata_device {int id; } ;


 int VAR_0 ;

 int VAR_1 ;
 int const VAR_2 ;






 int FUNC_0 (struct scsi_cmnd*,void (*) (struct scsi_cmnd*)) ;
 int FUNC_1 (struct ata_scsi_args*,int ) ;
 int FUNC_2 (struct scsi_cmnd*,int ,int,int) ;
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
 int VAR_14 ;

void FUNC_3(struct ata_device *VAR_15, struct scsi_cmnd *VAR_16,
        void (*VAR_17)(struct scsi_cmnd *))
{
 struct ata_scsi_args VAR_18;
 const u8 *VAR_19 = VAR_16->cmnd;
 u8 VAR_20;

 VAR_18.dev = VAR_15;
 VAR_18.id = VAR_15->id;
 VAR_18.cmd = VAR_16;
 VAR_18.done = VAR_17;

 switch(VAR_19[0]) {

 case 143:
  FUNC_0(VAR_16, VAR_17);
  break;

 case 142:
  if (VAR_19[1] & 2)
   FUNC_0(VAR_16, VAR_17);
  else if ((VAR_19[1] & 1) == 0)
   FUNC_1(&VAR_18, VAR_10);
  else switch (VAR_19[2]) {
  case 0x00:
   FUNC_1(&VAR_18, VAR_3);
   break;
  case 0x80:
   FUNC_1(&VAR_18, VAR_4);
   break;
  case 0x83:
   FUNC_1(&VAR_18, VAR_5);
   break;
  case 0x89:
   FUNC_1(&VAR_18, VAR_6);
   break;
  case 0xb0:
   FUNC_1(&VAR_18, VAR_7);
   break;
  case 0xb1:
   FUNC_1(&VAR_18, VAR_8);
   break;
  case 0xb2:
   FUNC_1(&VAR_18, VAR_9);
   break;
  default:
   FUNC_0(VAR_16, VAR_17);
   break;
  }
  break;

 case 139:
 case 138:
  FUNC_1(&VAR_18, VAR_11);
  break;

 case 141:
 case 140:
  FUNC_0(VAR_16, VAR_17);
  break;

 case 137:
  FUNC_1(&VAR_18, VAR_13);
  break;

 case 130:
  if ((VAR_19[1] & 0x1f) == VAR_2)
   FUNC_1(&VAR_18, VAR_13);
  else
   FUNC_0(VAR_16, VAR_17);
  break;

 case 136:
  FUNC_1(&VAR_18, VAR_14);
  break;

 case 135:
  FUNC_2(VAR_16, 0, 0, 0);
  VAR_16->result = (VAR_0 << 24);
  VAR_17(VAR_16);
  break;




 case 129:



 case 134:
 case 132:
 case 133:
 case 128:
  FUNC_1(&VAR_18, VAR_12);
  break;

 case 131:
  VAR_20 = VAR_19[1] & ~(1 << 3);
  if ((VAR_20 == 0x4) && (!VAR_19[3]) && (!VAR_19[4]))
   FUNC_1(&VAR_18, VAR_12);
  else
   FUNC_0(VAR_16, VAR_17);
  break;


 default:
  FUNC_2(VAR_16, VAR_1, 0x20, 0x0);

  VAR_17(VAR_16);
  break;
 }
}
