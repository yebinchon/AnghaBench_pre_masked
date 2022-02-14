
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static void FUNC_0(const unsigned char *VAR_1,
         unsigned char *VAR_2,
         int VAR_3, int VAR_4,
         int VAR_5)
{
 unsigned char *VAR_6;
 unsigned char *VAR_7;
 unsigned char *VAR_8;
 unsigned long VAR_9 = VAR_4 * VAR_3;
 unsigned int VAR_10;
 VAR_6 = (unsigned char *)VAR_1;
 VAR_8 = (unsigned char *)VAR_1 + VAR_4 * VAR_3;
 VAR_7 = (unsigned char *)VAR_1 + VAR_4 * VAR_3 + (VAR_4 * VAR_3 / 2);
 for (VAR_10 = 0; VAR_10 < VAR_9 * 2; VAR_10 += 4) {
  VAR_2[VAR_10] = (VAR_5 == VAR_0) ? *VAR_6++ : *VAR_8++;
  VAR_2[VAR_10 + 1] = (VAR_5 == VAR_0) ? *VAR_8++ : *VAR_6++;
  VAR_2[VAR_10 + 2] = (VAR_5 == VAR_0) ? *VAR_6++ : *VAR_7++;
  VAR_2[VAR_10 + 3] = (VAR_5 == VAR_0) ? *VAR_7++ : *VAR_6++;
 }
 return;
}
