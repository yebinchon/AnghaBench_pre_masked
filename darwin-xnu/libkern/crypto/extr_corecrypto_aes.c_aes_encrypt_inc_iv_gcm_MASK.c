
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccmode_gcm {int dummy; } ;
typedef int ccgcm_ctx ;
typedef int aes_rval ;
struct TYPE_2__ {int (* ccgcm_inc_iv_fn ) (struct ccmode_gcm const*,int *,unsigned char*) ;struct ccmode_gcm* ccaes_gcm_encrypt; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct ccmode_gcm const*,int *,unsigned char*) ;

aes_rval FUNC_1(unsigned char *VAR_2, ccgcm_ctx *VAR_3)
{
 const struct ccmode_gcm *VAR_4 = VAR_1->ccaes_gcm_encrypt;
 if (!VAR_4) {
  return VAR_0;
 }

 return VAR_1->ccgcm_inc_iv_fn(VAR_4, VAR_3, VAR_2);
}
