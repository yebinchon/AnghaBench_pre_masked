
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int __data_mapped; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0, struct scsi_cmnd *VAR_1)
{
 switch(VAR_1->__data_mapped) {
 case 2:
  FUNC_0(VAR_1);
  break;
 }
 VAR_1->__data_mapped = 0;
}
