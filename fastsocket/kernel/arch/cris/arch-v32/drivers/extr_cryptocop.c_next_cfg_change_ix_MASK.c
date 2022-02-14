
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strcop_crypto_op {size_t cipher_start; size_t cipher_len; size_t digest_start; size_t digest_len; size_t csum_start; size_t csum_len; scalar_t__ do_csum; scalar_t__ do_digest; scalar_t__ do_cipher; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (char*,size_t,size_t) ;

__attribute__((used)) static size_t FUNC_2(struct strcop_crypto_op *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = VAR_0;
 size_t VAR_4 = 0;

 if (VAR_1->do_cipher && ((VAR_1->cipher_start + VAR_1->cipher_len) > VAR_2)){
  if (VAR_1->cipher_start > VAR_2) {
   VAR_3 = VAR_1->cipher_start;
  } else {
   VAR_3 = VAR_1->cipher_start + VAR_1->cipher_len;
  }
 }
 if (VAR_1->do_digest && ((VAR_1->digest_start + VAR_1->digest_len) > VAR_2)){
  if (VAR_1->digest_start > VAR_2) {
   VAR_4 = VAR_1->digest_start;
  } else {
   VAR_4 = VAR_1->digest_start + VAR_1->digest_len;
  }
  if (VAR_4 < VAR_3) VAR_3 = VAR_4;
 }
 if (VAR_1->do_csum && ((VAR_1->csum_start + VAR_1->csum_len) > VAR_2)){
  if (VAR_1->csum_start > VAR_2) {
   VAR_4 = VAR_1->csum_start;
  } else {
   VAR_4 = VAR_1->csum_start + VAR_1->csum_len;
  }
  if (VAR_4 < VAR_3) VAR_3 = VAR_4;
 }
 if (VAR_3 == VAR_0) VAR_3 = VAR_2;
 FUNC_0(FUNC_1("next_cfg_change_ix prev ix=%d, next ix=%d\n", VAR_2, VAR_3));
 return VAR_3;
}
