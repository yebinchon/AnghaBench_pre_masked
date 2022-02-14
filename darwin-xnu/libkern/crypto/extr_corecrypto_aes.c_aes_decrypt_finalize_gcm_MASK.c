
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
 int FUNC_0 (struct ccmode_gcm const*,int *,unsigned int,unsigned char*) ;
 int FUNC_1 (struct ccmode_gcm const*,int *) ;
 TYPE_1__* VAR_1 ;

aes_rval FUNC_2(unsigned char *VAR_2, unsigned int VAR_3, ccgcm_ctx *VAR_4)
{
 int VAR_5;
 const struct ccmode_gcm *VAR_6 = VAR_1->ccaes_gcm_decrypt;
 if (!VAR_6) {
         return VAR_0;
 }

 VAR_5 = FUNC_0(VAR_6, VAR_4, VAR_3, VAR_2);
 VAR_5 |= FUNC_1(VAR_6, VAR_4);
 return VAR_5;
}
