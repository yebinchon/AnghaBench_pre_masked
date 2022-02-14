
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int) ;

u_int32_t
FUNC_3(const void *VAR_2, u_int32_t VAR_3, const u_int32_t VAR_4)
{
 const u_int8_t *VAR_5 = (const u_int8_t *)VAR_2;
 const u_int32_t VAR_6 = VAR_3 / 4;
 const u_int32_t *VAR_7;
 const u_int8_t *VAR_8;
 u_int32_t VAR_9 = VAR_4, VAR_10;
 int VAR_11;


 VAR_7 = (const u_int32_t *)(const void *)(VAR_5 + VAR_6 * 4);

 for (VAR_11 = -VAR_6; VAR_11; VAR_11++) {
  VAR_10 = FUNC_1(VAR_7, VAR_11);

  VAR_10 *= VAR_0;
  VAR_10 = FUNC_0(VAR_10, 15);
  VAR_10 *= VAR_1;

  VAR_9 ^= VAR_10;
  VAR_9 = FUNC_0(VAR_9, 13);
  VAR_9 = VAR_9 * 5 + 0xe6546b64;
 }


 VAR_8 = (const u_int8_t *)(const void *)(VAR_5 + VAR_6 * 4);
 VAR_10 = 0;

 switch (VAR_3 & 3) {
 case 3:
  VAR_10 ^= VAR_8[2] << 16;

 case 2:
  VAR_10 ^= VAR_8[1] << 8;

 case 1:
  VAR_10 ^= VAR_8[0];
  VAR_10 *= VAR_0;
  VAR_10 = FUNC_0(VAR_10, 15);
  VAR_10 *= VAR_1;
  VAR_9 ^= VAR_10;
 };


 VAR_9 ^= VAR_3;

 VAR_9 = FUNC_2(VAR_9);

 return (VAR_9);
}
