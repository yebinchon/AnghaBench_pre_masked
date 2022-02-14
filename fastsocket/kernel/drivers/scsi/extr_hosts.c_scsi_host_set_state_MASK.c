
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int shost_state; } ;
typedef enum scsi_host_state { ____Placeholder_scsi_host_state } scsi_host_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;







 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct Scsi_Host*,char*,int ,int ) ;

int FUNC_3(struct Scsi_Host *VAR_2, enum scsi_host_state VAR_3)
{
 enum scsi_host_state VAR_4 = VAR_2->shost_state;

 if (VAR_3 == VAR_4)
  return 0;

 switch (VAR_3) {
 case 132:



  goto illegal;

 case 128:
  switch (VAR_4) {
  case 132:
  case 129:
   break;
  default:
   goto illegal;
  }
  break;

 case 129:
  switch (VAR_4) {
  case 128:
   break;
  default:
   goto illegal;
  }
  break;

 case 134:
  switch (VAR_4) {
  case 132:
  case 128:
  case 133:
   break;
  default:
   goto illegal;
  }
  break;

 case 131:
  switch (VAR_4) {
  case 134:
  case 130:
   break;
  default:
   goto illegal;
  }
  break;

 case 133:
  switch (VAR_4) {
  case 134:
  case 129:
   break;
  default:
   goto illegal;
  }
  break;

 case 130:
  switch (VAR_4) {
  case 133:
   break;
  default:
   goto illegal;
  }
  break;
 }
 VAR_2->shost_state = VAR_3;
 return 0;

 illegal:
 FUNC_0(1,
    FUNC_2(VAR_1, VAR_2,
          "Illegal host state transition"
          "%s->%s\n",
          FUNC_1(VAR_4),
          FUNC_1(VAR_3)));
 return -VAR_0;
}
