
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VH ;
typedef int UINT ;
struct TYPE_5__ {TYPE_1__* PacketAdapter; } ;
struct TYPE_4__ {scalar_t__ Param; } ;
typedef TYPE_2__ SESSION ;


 int FUNC_0 (int *,void*,int ) ;

bool FUNC_1(SESSION *VAR_0, void *VAR_1, UINT VAR_2)
{
 VH *VAR_3;

 if (VAR_0 == ((void*)0) || (VAR_3 = (VH *)VAR_0->PacketAdapter->Param) == ((void*)0))
 {
  return 0;
 }

 return FUNC_0(VAR_3, VAR_1, VAR_2);
}
