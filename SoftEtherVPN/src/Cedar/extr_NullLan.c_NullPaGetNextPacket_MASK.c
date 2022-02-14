
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_11__ {int Size; void* Buf; } ;
struct TYPE_10__ {int PacketQueue; } ;
struct TYPE_9__ {TYPE_1__* PacketAdapter; } ;
struct TYPE_8__ {TYPE_3__* Param; } ;
typedef TYPE_2__ SESSION ;
typedef TYPE_3__ NULL_LAN ;
typedef TYPE_4__ BLOCK ;


 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

UINT FUNC_4(SESSION *VAR_1, void **VAR_2)
{
 UINT VAR_3 = 0;

 NULL_LAN *VAR_4;
 if (VAR_1 == ((void*)0) || (VAR_4 = VAR_1->PacketAdapter->Param) == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_2(VAR_4->PacketQueue);
 {
  BLOCK *VAR_5 = FUNC_1(VAR_4->PacketQueue);

  if (VAR_5 != ((void*)0))
  {
   *VAR_2 = VAR_5->Buf;
   VAR_3 = VAR_5->Size;
   FUNC_0(VAR_5);
  }
 }
 FUNC_3(VAR_4->PacketQueue);

 return VAR_3;
}
