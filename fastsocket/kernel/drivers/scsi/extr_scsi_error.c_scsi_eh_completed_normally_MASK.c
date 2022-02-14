
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int device; int * cmnd; int result; } ;




 scalar_t__ VAR_0 ;


 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd *VAR_7)
{




 if (FUNC_0(VAR_7->result) == VAR_2) {






  return FUNC_2(VAR_7);
 }
 if (FUNC_0(VAR_7->result) != VAR_1)
  return VAR_3;




 if (FUNC_1(VAR_7->result) != VAR_0)
  return VAR_3;





 switch (FUNC_5(VAR_7->result)) {
 case 132:
  FUNC_4(VAR_7->device);
 case 134:
  return VAR_5;
 case 135:
  return FUNC_2(VAR_7);
 case 133:
 case 130:
 case 131:



  return VAR_5;
 case 128:
  if (VAR_7->cmnd[0] == VAR_6)


   return VAR_5;

  return VAR_3;
 case 129:
  FUNC_3(VAR_7->device);

 case 136:
  return VAR_4;
 default:
  return VAR_3;
 }
 return VAR_3;
}
