
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strcop_crypto_op {size_t cipher_start; size_t digest_start; size_t csum_start; scalar_t__ do_csum; scalar_t__ do_digest; scalar_t__ do_cipher; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t) ;

__attribute__((used)) static size_t FUNC_2(struct strcop_crypto_op *VAR_0)
{
 size_t VAR_1 = 0;

 if (VAR_0->do_cipher) VAR_1 = VAR_0->cipher_start;
 if (VAR_0->do_digest && (VAR_0->digest_start < VAR_1)) VAR_1 = VAR_0->digest_start;
 if (VAR_0->do_csum && (VAR_0->csum_start < VAR_1)) VAR_1 = VAR_0->csum_start;

 FUNC_0(FUNC_1("first_cfg_change_ix: ix=%d\n", VAR_1));
 return VAR_1;
}
