
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quicc {int cp_cr; int sdma_sdcr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct quicc* VAR_7 ;

void FUNC_0()
{


 VAR_7 = (struct quicc *)(VAR_4);


 VAR_7->cp_cr = (VAR_3 | VAR_0);


 while (VAR_7->cp_cr & VAR_0);





 VAR_7->sdma_sdcr = 0x0740;




 VAR_5 = VAR_1;
 VAR_6 = VAR_5 + VAR_2;
}
