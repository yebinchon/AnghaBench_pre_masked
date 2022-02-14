
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gss_buffer_t ;
typedef int gss_OID ;
struct TYPE_3__ {int * value; scalar_t__ length; } ;
typedef scalar_t__ OM_uint32 ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char const** VAR_3 ;
 void* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int *) ;

OM_uint32 FUNC_2(OM_uint32 *VAR_4,
                             OM_uint32 VAR_5,
                             int VAR_6,
                             const gss_OID VAR_7,
                             OM_uint32 *VAR_8,
                             gss_buffer_t VAR_9)
{
  const char VAR_10[] = "Stub GSS error";
  (void)VAR_7;
  if(VAR_4)
    *VAR_4 = 0;

  if(VAR_8)
    *VAR_8 = 0;

  if(VAR_9) {
    VAR_9->value = ((void*)0);
    VAR_9->length = 0;

    if(VAR_5 >= VAR_0)
      return VAR_2;

    switch(VAR_6) {
      case 129:
        VAR_9->value = FUNC_0(VAR_10);
        break;
      case 128:
        VAR_9->value = FUNC_0(VAR_3[VAR_5]);
        break;
      default:
        return VAR_2;
    }

    if(VAR_9->value)
      VAR_9->length = FUNC_1(VAR_9->value);
    else
      return VAR_2;
  }

  return VAR_1;
}
