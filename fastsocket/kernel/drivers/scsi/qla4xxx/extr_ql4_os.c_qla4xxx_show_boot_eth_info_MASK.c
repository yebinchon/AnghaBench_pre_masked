
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int my_mac; } ;
typedef int ssize_t ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_2(void *VAR_3, int VAR_4, char *VAR_5)
{
 struct scsi_qla_host *VAR_6 = VAR_3;
 char *VAR_7 = VAR_5;
 int VAR_8;

 switch (VAR_4) {
 case 130:
  VAR_8 = FUNC_0(VAR_7, "%d\n", VAR_2);
  break;
 case 129:
  VAR_8 = FUNC_0(VAR_7, "0\n");
  break;
 case 128:
  VAR_8 = FUNC_1(VAR_7, VAR_6->my_mac,
          VAR_1);
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }
 return VAR_8;
}
