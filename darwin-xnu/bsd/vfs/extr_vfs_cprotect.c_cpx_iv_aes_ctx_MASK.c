
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct cpx {int cpx_iv_aes_ctx; int cpx_flags; int cpx_key_len; int cpx_cached_key; } ;
typedef int aes_encrypt_ctx ;
typedef int SHA1_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (struct cpx*,int *) ;

aes_encrypt_ctx *FUNC_6(struct cpx *VAR_3)
{
 if (FUNC_0(VAR_3->cpx_flags, VAR_0))
 return &VAR_3->cpx_iv_aes_ctx;

 SHA1_CTX VAR_4;
 uint8_t VAR_5[VAR_2];


 FUNC_3(&VAR_4);





 FUNC_4(&VAR_4, VAR_3->cpx_cached_key, VAR_3->cpx_key_len);
 FUNC_2(VAR_5, &VAR_4);

 FUNC_5(VAR_3, VAR_5);
 FUNC_1(VAR_3->cpx_flags, VAR_1);

 return &VAR_3->cpx_iv_aes_ctx;
}
