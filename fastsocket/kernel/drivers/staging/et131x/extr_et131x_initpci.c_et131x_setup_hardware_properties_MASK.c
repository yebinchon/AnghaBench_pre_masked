
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et131x_adapter {int* PermanentAddress; int* CurrentAddress; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int*,int ) ;

void FUNC_2(struct et131x_adapter *VAR_1)
{




 if (VAR_1->PermanentAddress[0] == 0x00 &&
     VAR_1->PermanentAddress[1] == 0x00 &&
     VAR_1->PermanentAddress[2] == 0x00 &&
     VAR_1->PermanentAddress[3] == 0x00 &&
     VAR_1->PermanentAddress[4] == 0x00 &&
     VAR_1->PermanentAddress[5] == 0x00) {





  FUNC_0(&VAR_1->CurrentAddress[5], 1);





  FUNC_1(VAR_1->PermanentAddress,
   VAR_1->CurrentAddress, VAR_0);
 } else {




  FUNC_1(VAR_1->CurrentAddress,
         VAR_1->PermanentAddress, VAR_0);
 }
}
