
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int UseNat; TYPE_4__* NatTable; TYPE_3__* NativeNat; } ;
typedef TYPE_5__ VH ;
struct TYPE_11__ {scalar_t__ num_item; } ;
struct TYPE_10__ {TYPE_2__* NatTableForRecv; } ;
struct TYPE_9__ {TYPE_1__* AllList; } ;
struct TYPE_8__ {scalar_t__ num_item; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;

bool FUNC_1(VH *VAR_2)
{

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 if (VAR_2->UseNat == 0)
 {

  return 0;
 }

 if (FUNC_0(VAR_2) && VAR_2->NativeNat != ((void*)0) && VAR_2->NativeNat->NatTableForRecv != ((void*)0))
 {
  if (VAR_2->NativeNat->NatTableForRecv->AllList->num_item > VAR_1)
  {

   return 0;
  }
 }
 else
 {
  if (VAR_2->NatTable->num_item > VAR_0)
  {

   return 0;
  }
 }

 return 1;
}
