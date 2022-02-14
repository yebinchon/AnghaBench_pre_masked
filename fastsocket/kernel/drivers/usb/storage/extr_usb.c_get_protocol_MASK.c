
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int subclass; char* protocol_name; void* proto_handler; int max_lun; } ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;

__attribute__((used)) static void FUNC_0(struct us_data *VAR_3)
{
 switch (VAR_3->subclass) {
 case 130:
  VAR_3->protocol_name = "Reduced Block Commands (RBC)";
  VAR_3->proto_handler = VAR_1;
  break;

 case 133:
  VAR_3->protocol_name = "8020i";
  VAR_3->proto_handler = VAR_0;
  VAR_3->max_lun = 0;
  break;

 case 131:
  VAR_3->protocol_name = "QIC-157";
  VAR_3->proto_handler = VAR_0;
  VAR_3->max_lun = 0;
  break;

 case 132:
  VAR_3->protocol_name = "8070i";
  VAR_3->proto_handler = VAR_0;
  VAR_3->max_lun = 0;
  break;

 case 129:
  VAR_3->protocol_name = "Transparent SCSI";
  VAR_3->proto_handler = VAR_1;
  break;

 case 128:
  VAR_3->protocol_name = "Uniform Floppy Interface (UFI)";
  VAR_3->proto_handler = VAR_2;
  break;
 }
}
