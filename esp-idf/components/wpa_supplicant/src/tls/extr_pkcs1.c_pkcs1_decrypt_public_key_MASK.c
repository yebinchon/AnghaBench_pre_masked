
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_rsa_key {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,size_t,int*,size_t*,struct crypto_rsa_key*,int ) ;
 int FUNC_1 (int*,int*,size_t) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(struct crypto_rsa_key *VAR_1,
        const u8 *VAR_2, size_t VAR_3,
        u8 *VAR_4, size_t *VAR_5)
{
 size_t VAR_6;
 u8 *VAR_7;

 VAR_6 = *VAR_5;
 if (FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_6, VAR_1, 0) < 0)
  return -1;
 if (VAR_6 < 3 + 8 + 16 ||
     VAR_4[0] != 0x00 || (VAR_4[1] != 0x00 && VAR_4[1] != 0x01)) {
  FUNC_2(VAR_0, "LibTomCrypt: Invalid signature EB "
      "structure");
  return -1;
 }

 VAR_7 = VAR_4 + 3;
 if (VAR_4[1] == 0x00) {

  if (VAR_4[2] != 0x00) {
   FUNC_2(VAR_0, "LibTomCrypt: Invalid signature "
       "PS (BT=00)");
   return -1;
  }
  while (VAR_7 + 1 < VAR_4 + VAR_6 && *VAR_7 == 0x00 && VAR_7[1] == 0x00)
   VAR_7++;
 } else {

  if (VAR_4[2] != 0xff) {
   FUNC_2(VAR_0, "LibTomCrypt: Invalid signature "
       "PS (BT=01)");
   return -1;
  }
  while (VAR_7 < VAR_4 + VAR_6 && *VAR_7 == 0xff)
   VAR_7++;
 }

 if (VAR_7 - VAR_4 - 2 < 8) {

  FUNC_2(VAR_0, "LibTomCrypt: Too short signature "
      "padding");
  return -1;
 }

 if (VAR_7 + 16 >= VAR_4 + VAR_6 || *VAR_7 != 0x00) {
  FUNC_2(VAR_0, "LibTomCrypt: Invalid signature EB "
      "structure (2)");
  return -1;
 }
 VAR_7++;
 VAR_6 -= VAR_7 - VAR_4;


 FUNC_1(VAR_4, VAR_7, VAR_6);
 *VAR_5 = VAR_6;

 return 0;
}
