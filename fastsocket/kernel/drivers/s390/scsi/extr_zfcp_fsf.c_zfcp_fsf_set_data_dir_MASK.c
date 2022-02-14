
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scsi_cmnd {int sc_data_direction; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int FUNC_0 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_1(struct scsi_cmnd *VAR_8, u32 *VAR_9)
{
 switch (FUNC_0(VAR_8)) {
 case 132:
  switch (VAR_8->sc_data_direction) {
  case 134:
   *VAR_9 = VAR_1;
   break;
  case 135:
   *VAR_9 = VAR_6;
   break;
  case 133:
   *VAR_9 = VAR_7;
   break;
  case 136:
   return -VAR_0;
  }
  break;

 case 130:
  *VAR_9 = VAR_3;
  break;
 case 129:
  *VAR_9 = VAR_5;
  break;
 case 131:
  *VAR_9 = VAR_2;
  break;
 case 128:
  *VAR_9 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
