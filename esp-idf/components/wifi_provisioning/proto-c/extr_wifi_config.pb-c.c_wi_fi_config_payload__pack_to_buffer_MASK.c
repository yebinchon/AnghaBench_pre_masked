
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * descriptor; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
typedef TYPE_2__ WiFiConfigPayload ;
typedef int ProtobufCMessage ;
typedef int ProtobufCBuffer ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int const*,int *) ;
 int VAR_0 ;

size_t FUNC_2
                     (const WiFiConfigPayload *VAR_1,
                      ProtobufCBuffer *VAR_2)
{
  FUNC_0(VAR_1->base.descriptor == &VAR_0);
  return FUNC_1 ((const ProtobufCMessage*)VAR_1, VAR_2);
}
