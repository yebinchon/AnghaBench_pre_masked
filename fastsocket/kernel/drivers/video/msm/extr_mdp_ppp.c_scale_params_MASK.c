
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int int64_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5,
   uint32_t *VAR_6, uint32_t *VAR_7)
{


 int64_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 uint64_t VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 unsigned VAR_20 = 0;
 int64_t VAR_21, VAR_22;

 if (VAR_4 % 3 == 0)
  VAR_20 = !(VAR_3 % (VAR_4 / 3));

 VAR_13 = ((uint64_t)VAR_4) << 34;
 VAR_14 = VAR_3;
 if (!VAR_14)
  return -1;
 FUNC_2(VAR_13, VAR_14);
 VAR_10 = (VAR_13 + 1) >> 1;
 if ((VAR_10 >> 4) < (1LL << 27) || (VAR_10 >> 4) > (1LL << 31)) {
  FUNC_0("crap bad scale\n");
  return -1;
 }
 VAR_13 = ((uint64_t)VAR_3) << 34;
 VAR_14 = (uint64_t)VAR_4;
 if (!VAR_14)
  return -1;
 FUNC_2(VAR_13, VAR_14);
 VAR_8 = (VAR_13 + 1) >> 1;
 VAR_9 = (VAR_8 - VAR_1) >> 1;

 *VAR_6 = (int)(VAR_9 >> 4);
 VAR_11 = (VAR_10 - VAR_1) >> 1;

 if (VAR_20) {
  VAR_15 = ((uint64_t)VAR_5 << 33) - VAR_2;
  VAR_12 = (VAR_4 * VAR_15) + VAR_2;
  if (!VAR_3)
   return -1;
  FUNC_2(VAR_12, VAR_3);
  VAR_17 = VAR_12 - VAR_2;
 } else {
  VAR_15 = ((uint64_t)VAR_5 << 1) - 1;
  VAR_17 = (((VAR_10 * VAR_15) >> 1) + VAR_11);
 }

 VAR_18 = VAR_17 & VAR_0;
 if (VAR_18 != VAR_17)
  VAR_18 += VAR_1;

 if (VAR_20) {
  VAR_12 = (VAR_3 * VAR_18) + VAR_2;
  if (!VAR_3)
   return -1;
  FUNC_2(VAR_12, VAR_3);
  VAR_16 = VAR_12 - VAR_2;
 } else {
  VAR_16 = ((VAR_8 * (VAR_18 >> 33)) + VAR_9);
 }

 VAR_19 = (VAR_16 & VAR_0) - VAR_1;

 VAR_21 = VAR_16 - VAR_19;
 VAR_22 = ((int64_t)(VAR_5) << 33) - VAR_19;
 VAR_21 -= VAR_22;

 VAR_22 = (VAR_21 & (1LL << 63)) ? 4 : -4;
 VAR_22 <<= 33;
 while (FUNC_1((int)(VAR_21 >> 33)) > 4)
  VAR_21 += VAR_22;
 *VAR_6 = (int)(VAR_21 >> 4);
 *VAR_7 = (uint32_t)(VAR_8 >> 4);
 return 0;
}
