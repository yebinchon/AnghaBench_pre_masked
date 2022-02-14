
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptocop_transform_init {int alg; int keylen; int cipher_mode; int csum_mode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;



 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(struct cryptocop_transform_init *VAR_3)
{
 switch (VAR_3->alg){
 case 135:
  switch (VAR_3->csum_mode){
  case 129:
  case 130:
   break;
  default:
   FUNC_0(FUNC_1("transform_ok: Bad mode set for csum transform\n"));
   return -VAR_0;
  }
 case 132:
 case 133:
 case 131:
  if (VAR_3->keylen != 0) {
   FUNC_0(FUNC_1("transform_ok: non-zero keylength, %d, for a digest/csum algorithm\n", VAR_3->keylen));
   return -VAR_0;
  }
  break;
 case 134:
  if (VAR_3->keylen != 64) {
   FUNC_0(FUNC_1("transform_ok: keylen %d invalid for DES\n", VAR_3->keylen));
   return -VAR_0;
  }
  break;
 case 137:
  if (VAR_3->keylen != 192) {
   FUNC_0(FUNC_1("transform_ok: keylen %d invalid for 3DES\n", VAR_3->keylen));
   return -VAR_0;
  }
  break;
 case 136:
  if (VAR_3->keylen != 128 && VAR_3->keylen != 192 && VAR_3->keylen != 256) {
   FUNC_0(FUNC_1("transform_ok: keylen %d invalid for AES\n", VAR_3->keylen));
   return -VAR_0;
  }
  break;
 case 128:
 default:
  FUNC_0(FUNC_1("transform_ok: no such algorithm %d\n", VAR_3->alg));
  return -VAR_0;
 }

 switch (VAR_3->alg){
 case 134:
 case 137:
 case 136:
  if (VAR_3->cipher_mode != VAR_2 && VAR_3->cipher_mode != VAR_1) return -VAR_0;
 default:
   break;
 }
 return 0;
}
