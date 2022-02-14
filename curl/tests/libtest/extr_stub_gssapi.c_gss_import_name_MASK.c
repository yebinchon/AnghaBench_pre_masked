
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ gss_name_t ;
typedef TYPE_1__* gss_buffer_t ;
typedef int gss_OID ;
struct TYPE_3__ {int length; int value; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (int ,int ) ;

OM_uint32 FUNC_1(OM_uint32 *VAR_4,
                          const gss_buffer_t VAR_5,
                          const gss_OID VAR_6,
                          gss_name_t *VAR_7)
{
  char *VAR_8 = ((void*)0);
  (void)VAR_6;

  if(!VAR_4)
    return VAR_3;

  if(!VAR_5 || !VAR_7) {
    *VAR_4 = VAR_0;
    return VAR_3;
  }

  VAR_8 = FUNC_0(VAR_5->value, VAR_5->length);
  if(!VAR_8) {
    *VAR_4 = VAR_1;
    return VAR_3;
  }

  *VAR_7 = (gss_name_t) VAR_8;
  *VAR_4 = 0;

  return VAR_2;
}
