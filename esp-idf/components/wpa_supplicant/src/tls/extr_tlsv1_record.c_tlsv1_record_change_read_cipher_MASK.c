
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlsv1_record_layer {scalar_t__ cipher_alg; int * read_cbc; int key_material_len; int read_key; int read_iv; int read_seq_num; int cipher_suite; int read_cipher_suite; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,...) ;

int FUNC_4(struct tlsv1_record_layer *VAR_3)
{
 FUNC_3(VAR_1, "TLSv1: Record Layer - New read cipher suite "
     "0x%04x \n", VAR_3->cipher_suite);
 VAR_3->read_cipher_suite = VAR_3->cipher_suite;
 FUNC_2(VAR_3->read_seq_num, 0, VAR_2);

 if (VAR_3->read_cbc) {
  FUNC_0(VAR_3->read_cbc);
  VAR_3->read_cbc = ((void*)0);
 }

 if (VAR_3->cipher_alg != VAR_0) {
  VAR_3->read_cbc = FUNC_1(VAR_3->cipher_alg,
         VAR_3->read_iv, VAR_3->read_key,
         VAR_3->key_material_len);
  if (VAR_3->read_cbc == ((void*)0)) {
   FUNC_3(VAR_1, "TLSv1: Failed to initialize "
       "cipher");
   return -1;
  }
 }

 return 0;
}
