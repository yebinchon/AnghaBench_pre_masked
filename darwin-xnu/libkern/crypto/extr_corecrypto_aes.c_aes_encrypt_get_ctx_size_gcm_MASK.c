
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccmode_gcm {int size; } ;
struct TYPE_2__ {struct ccmode_gcm* ccaes_gcm_encrypt; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

unsigned FUNC_1(void)
{
 const struct ccmode_gcm *VAR_2 = VAR_1->ccaes_gcm_encrypt;
 if (!VAR_2) {
         return 0;
 }
 return (FUNC_0(VAR_0, VAR_2->size));
}
