
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Lock; int Ref; } ;
typedef TYPE_1__ TUBEPAIR_DATA ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int) ;

TUBEPAIR_DATA *FUNC_3()
{
 TUBEPAIR_DATA *VAR_0 = FUNC_2(sizeof(TUBEPAIR_DATA));

 VAR_0->Ref = FUNC_1();

 VAR_0->Lock = FUNC_0();

 return VAR_0;
}
