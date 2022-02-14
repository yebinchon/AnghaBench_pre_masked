
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct secasvar {int sched; } ;
struct TYPE_2__ {int encrypt; } ;
typedef TYPE_1__ aes_gcm_ctx ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char*,unsigned int,int ) ;

int
FUNC_2(struct secasvar *VAR_1,
    unsigned char *VAR_2, unsigned int VAR_3)
{
 aes_gcm_ctx *VAR_4 = (aes_gcm_ctx*)FUNC_0(VAR_1->sched, VAR_0);
 return (FUNC_1(VAR_2, VAR_3, VAR_4->encrypt));
}
