
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int NetBufferListPool; int NetBufferList; } ;
typedef TYPE_1__ PACKET_BUFFER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(PACKET_BUFFER *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }


 FUNC_0(VAR_0->NetBufferList);

 FUNC_1(VAR_0->NetBufferListPool);

 FUNC_2(VAR_0);
}
