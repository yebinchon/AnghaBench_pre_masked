
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpx {int cpx_flags; int cpx_iv_aes_ctx; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (void*,int *) ;

void FUNC_3(struct cpx *VAR_3, void *VAR_4)
{
 FUNC_2(VAR_4, &VAR_3->cpx_iv_aes_ctx);
 FUNC_1(VAR_3->cpx_flags, VAR_0 | VAR_2);
 FUNC_0(VAR_3->cpx_flags, VAR_1);
}
