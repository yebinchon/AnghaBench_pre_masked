
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int * descriptor; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
typedef int ProtobufCMessage ;
typedef TYPE_2__ CmdSetPropertyValues ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t FUNC_1 (int const*,int *) ;

size_t FUNC_2
                     (const CmdSetPropertyValues *VAR_1,
                      uint8_t *VAR_2)
{
  FUNC_0(VAR_1->base.descriptor == &VAR_0);
  return FUNC_1 ((const ProtobufCMessage*)VAR_1, VAR_2);
}
