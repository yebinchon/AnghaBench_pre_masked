
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Destroy; int Open; } ;
typedef TYPE_1__ SexyAL ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;

void *FUNC_1(int VAR_2)
{
 SexyAL *VAR_3;
 if(!(VAR_2 != 1)) return(0);

 VAR_3=FUNC_0(sizeof(SexyAL));

 VAR_3->Open=VAR_1;
 VAR_3->Destroy=VAR_0;
 return((void *)VAR_3);
}
