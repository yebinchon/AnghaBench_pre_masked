
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int low; int high; int grew; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;

void FUNC_3(int VAR_7)
{
 unsigned VAR_8;







 if((VAR_8 = FUNC_0(VAR_0)) & VAR_3){
  if(VAR_8 & VAR_2){
   if (VAR_5[VAR_7].low >= VAR_4){
    VAR_5[VAR_7].low -= VAR_4;
    VAR_5[VAR_7].high -= (VAR_4 - VAR_6);
   }
   VAR_5[VAR_7].grew = 1;



  }
 }
 if((VAR_8 = FUNC_0(VAR_1)) & VAR_3){
  if(VAR_8 & VAR_2){
   if (VAR_5[VAR_7].high <= 127-VAR_4){
    VAR_5[VAR_7].low += (VAR_4 - VAR_6);
    VAR_5[VAR_7].high += VAR_4;
   }
   VAR_5[VAR_7].grew = 1;



  }
 }






 FUNC_2(VAR_7);


}
