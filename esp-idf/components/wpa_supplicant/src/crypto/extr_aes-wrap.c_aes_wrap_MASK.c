
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int mbedtls_aes_context ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (void*,int*,int*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int const*,int) ;
 int FUNC_3 (void**) ;
 int FUNC_4 (void**) ;
 scalar_t__ FUNC_5 (void**,int const*,int) ;
 scalar_t__ FUNC_6 (void**,int*,int*) ;
 int FUNC_7 (int*,int const*,int) ;
 int FUNC_8 (int*,int,int) ;

int FUNC_9(const u8 *VAR_0, int VAR_1, const u8 *VAR_2, u8 *VAR_3)
{
 u8 *VAR_4, *VAR_5, VAR_6[16];
 int VAR_7, VAR_8;




 void *VAR_9;


 VAR_4 = VAR_3;
 VAR_5 = VAR_3 + 8;


 FUNC_8(VAR_4, 0xa6, 8);
 FUNC_7(VAR_5, VAR_2, 8 * VAR_1);
 VAR_9 = FUNC_2(VAR_0, 16);
 if (VAR_9 == ((void*)0))
  return -1;
 for (VAR_8 = 0; VAR_8 <= 5; VAR_8++) {
  VAR_5 = VAR_3 + 8;
  for (VAR_7 = 1; VAR_7 <= VAR_1; VAR_7++) {
   FUNC_7(VAR_6, VAR_4, 8);
   FUNC_7(VAR_6 + 8, VAR_5, 8);





   FUNC_0(VAR_9, VAR_6, VAR_6);

   FUNC_7(VAR_4, VAR_6, 8);
   VAR_4[7] ^= VAR_1 * VAR_8 + VAR_7;
   FUNC_7(VAR_5, VAR_6 + 8, 8);
   VAR_5 += 8;
  }
 }



 FUNC_1(VAR_9);
 return 0;
}
