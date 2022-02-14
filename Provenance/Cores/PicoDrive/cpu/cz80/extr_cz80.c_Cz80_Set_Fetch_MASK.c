
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* Fetch; scalar_t__* OPFetch; } ;
typedef TYPE_1__ cz80_struc ;
typedef int UINT32 ;
typedef int FPTR ;


 int VAR_0 ;

void FUNC_0(cz80_struc *VAR_1, UINT32 VAR_2, UINT32 VAR_3, FPTR VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = VAR_2 >> VAR_0;
 VAR_6 = VAR_3 >> VAR_0;
 VAR_4 -= VAR_5 << VAR_0;

 while (VAR_5 <= VAR_6)
 {
  VAR_1->Fetch[VAR_5] = VAR_4;



  VAR_5++;
 }
}
