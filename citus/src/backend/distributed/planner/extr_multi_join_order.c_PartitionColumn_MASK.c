
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32 ;
struct TYPE_4__ {void* varnoold; void* varno; } ;
typedef TYPE_1__ Var ;
typedef int Oid ;


 TYPE_1__* FUNC_0 (int ) ;

Var *
FUNC_1(Oid VAR_0, uint32 VAR_1)
{
 Var *VAR_2 = FUNC_0(VAR_0);
 Var *VAR_3 = ((void*)0);


 if (VAR_2 == ((void*)0))
 {
  return VAR_3;
 }

 VAR_3 = VAR_2;
 VAR_3->varno = VAR_1;
 VAR_3->varnoold = VAR_1;

 return VAR_3;
}
