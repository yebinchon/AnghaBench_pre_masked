
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * gss_ctx_id_t ;
typedef int gss_buffer_t ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;

OM_uint32 FUNC_1(OM_uint32 *VAR_3,
                                 gss_ctx_id_t *VAR_4,
                                 gss_buffer_t VAR_5)
{
  (void)VAR_5;

  if(!VAR_3)
    return VAR_2;

  if(!VAR_4) {
    *VAR_3 = VAR_0;
    return VAR_2;
  }

  FUNC_0(*VAR_4);
  *VAR_4 = ((void*)0);
  *VAR_3 = 0;

  return VAR_1;
}
