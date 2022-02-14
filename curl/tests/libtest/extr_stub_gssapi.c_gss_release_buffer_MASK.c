
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gss_buffer_t ;
struct TYPE_3__ {scalar_t__ length; int value; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

OM_uint32 FUNC_1(OM_uint32 *VAR_1,
                             gss_buffer_t VAR_2)
{
  if(VAR_1)
    *VAR_1 = 0;

  if(VAR_2 && VAR_2->length) {
    FUNC_0(VAR_2->value);
    VAR_2->length = 0;
  }

  return VAR_0;
}
