
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;



 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct scsi_cmnd*,int ) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_5, int VAR_6)
{
 int VAR_7 = 0;

 switch(FUNC_0(VAR_6)) {
 case 128:
  VAR_7 = -VAR_3;
  break;
 case 129:
  FUNC_1(VAR_5, VAR_0);
  VAR_7 = -VAR_4;
  break;
 case 130:
  FUNC_1(VAR_5, VAR_0);
  VAR_7 = -VAR_1;
  break;
 default:
  VAR_7 = -VAR_2;
  break;
 }

 return VAR_7;
}
