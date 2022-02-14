
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccmode_gcm {int dummy; } ;
typedef int ccgcm_ctx ;
typedef int aes_rval ;
struct TYPE_2__ {struct ccmode_gcm* ccaes_gcm_decrypt; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccmode_gcm const*,int *,unsigned int,unsigned char const*) ;
 TYPE_1__* VAR_1 ;

aes_rval FUNC_1(const unsigned char *VAR_2, unsigned int VAR_3, ccgcm_ctx *VAR_4)
{
 const struct ccmode_gcm *VAR_5 = VAR_1->ccaes_gcm_decrypt;
 if (!VAR_5) {
         return VAR_0;
 }

 return FUNC_0(VAR_5, VAR_4, VAR_3, VAR_2);
}
