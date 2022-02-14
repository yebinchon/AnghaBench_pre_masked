
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int k_pad ;


 size_t VAR_0 ;
 int FUNC_0 (int,int const**,size_t*,int*) ;
 int FUNC_1 (int*,int const*,size_t) ;
 int FUNC_2 (int*,int ,int) ;

int
FUNC_3(const u8 *VAR_1, size_t VAR_2, size_t VAR_3,
      const u8 *VAR_4[], const size_t *VAR_5, u8 *VAR_6)
{
 u8 VAR_7[64];
 u8 VAR_8[16];
 const u8 *VAR_9[6];
 size_t VAR_10, VAR_11[6];

 if (VAR_3 > 5) {




  return -1;
 }


        if (VAR_2 > 64) {
  if (FUNC_0(1, &VAR_1, &VAR_2, VAR_8))
   return -1;
  VAR_1 = VAR_8;
  VAR_2 = 16;
        }
 FUNC_2(VAR_7, 0, sizeof(VAR_7));
 FUNC_1(VAR_7, VAR_1, VAR_2);


 for (VAR_10 = 0; VAR_10 < 64; VAR_10++)
  VAR_7[VAR_10] ^= 0x36;


 VAR_9[0] = VAR_7;
 VAR_11[0] = 64;
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  VAR_9[VAR_10 + 1] = VAR_4[VAR_10];
  VAR_11[VAR_10 + 1] = VAR_5[VAR_10];
 }
 if (FUNC_0(1 + VAR_3, VAR_9, VAR_11, VAR_6))
  return -1;

 FUNC_2(VAR_7, 0, sizeof(VAR_7));
 FUNC_1(VAR_7, VAR_1, VAR_2);

 for (VAR_10 = 0; VAR_10 < 64; VAR_10++)
  VAR_7[VAR_10] ^= 0x5c;


 VAR_9[0] = VAR_7;
 VAR_11[0] = 64;
 VAR_9[1] = VAR_6;
 VAR_11[1] = VAR_0;
 return FUNC_0(2, VAR_9, VAR_11, VAR_6);
}
