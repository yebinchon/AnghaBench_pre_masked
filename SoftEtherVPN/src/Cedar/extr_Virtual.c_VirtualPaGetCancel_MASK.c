
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* Cancel; } ;
typedef TYPE_2__ VH ;
struct TYPE_10__ {int ref; } ;
struct TYPE_9__ {TYPE_1__* PacketAdapter; } ;
struct TYPE_7__ {scalar_t__ Param; } ;
typedef TYPE_3__ SESSION ;
typedef TYPE_4__ CANCEL ;


 int FUNC_0 (int ) ;

CANCEL *FUNC_1(SESSION *VAR_0)
{
 VH *VAR_1;

 if (VAR_0 == ((void*)0) || (VAR_1 = (VH *)VAR_0->PacketAdapter->Param) == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_0(VAR_1->Cancel->ref);
 return VAR_1->Cancel;
}
