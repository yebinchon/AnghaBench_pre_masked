
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(int VAR_0,
            unsigned int *VAR_1,
            unsigned int *VAR_2,
            unsigned int *VAR_3,
            int VAR_4)
{
 int VAR_5;
 int VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;
 int VAR_14;

 VAR_5 = (*VAR_3 + VAR_0 / 2) / VAR_0;




 VAR_11 = VAR_12 = 0;
 VAR_8 = VAR_9 = 0;

 VAR_10 = 0;
 VAR_13 = 0xffffffff;

 VAR_7 = 0x10000;
 for (VAR_6 = VAR_5 / 65536 + 1; VAR_6 < VAR_7; VAR_6++) {
  VAR_7 = VAR_5 / VAR_6;

  VAR_14 = VAR_0 * VAR_6 * VAR_7;
  if (VAR_14 <= *VAR_3 && VAR_14 > VAR_10) {
   VAR_10 = VAR_14;
   VAR_8 = VAR_6;
   VAR_9 = VAR_7;
  }

  VAR_7++;
  if (VAR_7 <= 65536) {
   VAR_14 = VAR_0 * VAR_6 * VAR_7;
   if (VAR_14 > *VAR_3 && VAR_14 < VAR_13) {
    VAR_13 = VAR_14;
    VAR_11 = VAR_6;
    VAR_12 = VAR_7;
   }
  }
 }

 *VAR_3 = VAR_11 * VAR_12 * VAR_0;
 *VAR_1 = VAR_11 & 0xffff;
 *VAR_2 = VAR_12 & 0xffff;
 return;
}
