
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * descriptor; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
typedef int ProtobufCMessage ;
typedef int ProtobufCAllocator ;
typedef TYPE_2__ CmdScanStart ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;

void FUNC_2
                     (CmdScanStart *VAR_1,
                      ProtobufCAllocator *VAR_2)
{
  if(!VAR_1)
    return;
  FUNC_0(VAR_1->base.descriptor == &VAR_0);
  FUNC_1 ((ProtobufCMessage*)VAR_1, VAR_2);
}
