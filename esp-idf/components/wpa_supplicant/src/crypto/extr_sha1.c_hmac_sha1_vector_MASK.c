
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef int k_pad ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (int,unsigned char const**,size_t*,unsigned char*) ;

int
FUNC_3(const u8 *VAR_1, size_t VAR_2, size_t VAR_3,
       const u8 *VAR_4[], const size_t *VAR_5, u8 *VAR_6)
{
 unsigned char VAR_7[64];
 unsigned char VAR_8[20];
 const u8 *VAR_9[6];
 size_t VAR_10[6], VAR_11;

 if (VAR_3 > 5) {




  return -1;
 }


        if (VAR_2 > 64) {
  if (FUNC_2(1, &VAR_1, &VAR_2, VAR_8))
   return -1;
  VAR_1 = VAR_8;
  VAR_2 = 20;
        }
 FUNC_1(VAR_7, 0, sizeof(VAR_7));
 FUNC_0(VAR_7, VAR_1, VAR_2);

 for (VAR_11 = 0; VAR_11 < 64; VAR_11++)
  VAR_7[VAR_11] ^= 0x36;


 VAR_9[0] = VAR_7;
 VAR_10[0] = 64;
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  VAR_9[VAR_11 + 1] = VAR_4[VAR_11];
  VAR_10[VAR_11 + 1] = VAR_5[VAR_11];
 }
 if (FUNC_2(1 + VAR_3, VAR_9, VAR_10, VAR_6))
  return -1;

 FUNC_1(VAR_7, 0, sizeof(VAR_7));
 FUNC_0(VAR_7, VAR_1, VAR_2);

 for (VAR_11 = 0; VAR_11 < 64; VAR_11++)
  VAR_7[VAR_11] ^= 0x5c;


 VAR_9[0] = VAR_7;
 VAR_10[0] = 64;
 VAR_9[1] = VAR_6;
 VAR_10[1] = VAR_0;
 return FUNC_2(2, VAR_9, VAR_10, VAR_6);
}
