
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccmode_cbc {int dummy; } ;
typedef int cccbc_iv ;
typedef int cccbc_ctx ;
struct TYPE_2__ {size_t (* ccpad_cts3_encrypt_fn ) (struct ccmode_cbc const*,int *,int *,size_t,void const*,void*) ;} ;


 TYPE_1__* VAR_0 ;
 size_t FUNC_0 (struct ccmode_cbc const*,int *,int *,size_t,void const*,void*) ;

size_t
FUNC_1(const struct ccmode_cbc *VAR_1, cccbc_ctx *VAR_2,
     cccbc_iv *VAR_3, size_t VAR_4, const void *VAR_5, void *VAR_6)
{
 if (VAR_0)
  return (*VAR_0->ccpad_cts3_encrypt_fn)(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 return (0);
}
