
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* cpx_t ;
struct TYPE_3__ {int cpx_max_key_len; scalar_t__ cpx_key_len; scalar_t__ cpx_flags; int cpx_iv_aes_ctx; int * cpx_cached_key; } ;


 int FUNC_0 (int *,int) ;

void FUNC_1(cpx_t VAR_0)
{
 FUNC_0(VAR_0->cpx_cached_key, VAR_0->cpx_max_key_len);
 FUNC_0(&VAR_0->cpx_iv_aes_ctx, sizeof(VAR_0->cpx_iv_aes_ctx));
 VAR_0->cpx_flags = 0;
 VAR_0->cpx_key_len = 0;
}
