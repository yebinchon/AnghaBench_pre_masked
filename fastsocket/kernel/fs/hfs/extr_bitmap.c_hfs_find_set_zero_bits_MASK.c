
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static u32 FUNC_3(__be32 *VAR_0, u32 VAR_1, u32 VAR_2, u32 *VAR_3)
{
 __be32 *VAR_4, *VAR_5;
 u32 VAR_6, VAR_7, VAR_8, VAR_9;
 __be32 VAR_10;
 int VAR_11;

 VAR_8 = *VAR_3;
 if (!VAR_8)
  return VAR_1;

 VAR_4 = VAR_0 + (VAR_2 / 32);
 VAR_5 = VAR_0 + ((VAR_1 + 31) / 32);


 VAR_10 = *VAR_4;
 if (~VAR_10) {
  VAR_9 = FUNC_0(VAR_10);
  VAR_11 = VAR_2 % 32;
  VAR_6 = (1U << 31) >> VAR_11;
  for (; VAR_11 < 32; VAR_6 >>= 1, VAR_11++) {
   if (!(VAR_9 & VAR_6))
    goto found;
  }
 }


 while (++VAR_4 < VAR_5) {
  VAR_10 = *VAR_4;
  if (~VAR_10) {
   VAR_9 = FUNC_0(VAR_10);
   VAR_6 = 1 << 31;
   for (VAR_11 = 0; VAR_11 < 32; VAR_6 >>= 1, VAR_11++) {
    if (!(VAR_9 & VAR_6))
     goto found;
   }
  }
 }
 return VAR_1;

found:
 VAR_7 = (VAR_4 - VAR_0) * 32 + VAR_11;
 if (VAR_7 >= VAR_1)
  return VAR_7;

 VAR_8 = FUNC_2(VAR_1 - VAR_7, VAR_8);
 while (1) {
  VAR_9 |= VAR_6;
  if (++VAR_11 >= 32)
   break;
  VAR_6 >>= 1;
  if (!--VAR_8 || VAR_9 & VAR_6)
   goto done;
 }
 if (!--VAR_8)
  goto done;
 *VAR_4++ = FUNC_1(VAR_9);

 while (1) {
  VAR_9 = FUNC_0(*VAR_4);
  if (VAR_8 < 32)
   break;
  if (VAR_9) {
   VAR_8 = 32;
   break;
  }
  *VAR_4++ = FUNC_1(0xffffffff);
  VAR_8 -= 32;
 }

 VAR_6 = 1U << 31;
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  if (VAR_9 & VAR_6)
   break;
  VAR_9 |= VAR_6;
  VAR_6 >>= 1;
 }
done:
 *VAR_4 = FUNC_1(VAR_9);
 *VAR_3 = (VAR_4 - VAR_0) * 32 + VAR_11 - VAR_7;
 return VAR_7;
}
