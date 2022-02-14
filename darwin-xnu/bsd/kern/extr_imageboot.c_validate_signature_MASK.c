
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int rsa_pub_ctx ;
typedef int exponent ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int*,int) ;
 int* FUNC_2 (size_t) ;
 int FUNC_3 (int*,int const*,size_t) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*,int,int const*,int ,int*) ;
 int FUNC_6 (int*,int ,int ,int*,size_t,int*,int*) ;

__attribute__((used)) static int
FUNC_7(const uint8_t *VAR_6, size_t VAR_7, uint8_t *VAR_8, size_t VAR_9, uint8_t *VAR_10)
{
 int VAR_11 = 0;
 bool VAR_12 = 0;
 uint8_t *VAR_13 = ((void*)0);

 const uint8_t VAR_14[] = { 0x01, 0x00, 0x01 };
 uint8_t *VAR_15 = FUNC_2(VAR_7);
 rsa_pub_ctx *VAR_16 = FUNC_2(sizeof(rsa_pub_ctx));
 VAR_13 = FUNC_2(VAR_9);

 if (VAR_15 == ((void*)0) || VAR_16 == ((void*)0) || VAR_13 == ((void*)0)) {
  VAR_11 = VAR_3;
  goto out;
 }

 FUNC_1(VAR_16, sizeof(rsa_pub_ctx));
 FUNC_3(VAR_15, VAR_6, VAR_7);
 FUNC_3(VAR_13, VAR_8, VAR_9);

 VAR_11 = FUNC_5(VAR_16,
   sizeof(VAR_14), VAR_14,
   VAR_1, VAR_15);
 if (VAR_11) {
  FUNC_0("rsa_make_pub() failed");
  goto out;
 }

 VAR_11 = FUNC_6(VAR_16, VAR_0,
   VAR_5, VAR_10,
   VAR_9, VAR_13,
   &VAR_12);
 if (VAR_11) {
  VAR_12 = 0;
  FUNC_0("rsa_verify() failed");
  VAR_11 = VAR_2;
  goto out;
 }

out:
 FUNC_4(VAR_13);
 FUNC_4(VAR_16);
 FUNC_4(VAR_15);

 if (VAR_11) {
  return VAR_11;
 } else if (VAR_12 == 1) {
  return 0;
 } else {
  return VAR_4;
 }
}
