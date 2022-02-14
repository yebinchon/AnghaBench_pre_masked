
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(char * VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_2 = VAR_0[0] - 70;
 VAR_3 = VAR_0[1];
 VAR_4 = VAR_0[2];
 VAR_5 = VAR_0[3];
 VAR_6 = VAR_0[4];
 VAR_7 = VAR_0[5];
 if (VAR_1 == 0) VAR_8 = VAR_0[6];
 else VAR_8 = 0;

 if (VAR_2 < 0) {
  VAR_9 = 0;
 } else {
  int VAR_12[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

  VAR_10 = VAR_2 * 365;
  if (VAR_2 > 2)
   VAR_10 += (VAR_2+1) / 4;
  for (VAR_11 = 1; VAR_11 < VAR_3; VAR_11++)
   VAR_10 += VAR_12[VAR_11-1];
  if (((VAR_2+2) % 4) == 0 && VAR_3 > 2)
   VAR_10++;
  VAR_10 += VAR_4 - 1;
  VAR_9 = ((((VAR_10 * 24) + VAR_5) * 60 + VAR_6) * 60)
   + VAR_7;


  if (VAR_8 & 0x80)
   VAR_8 |= (-1 << 8);
  if (-52 <= VAR_8 && VAR_8 <= 52)
   VAR_9 -= VAR_8 * 15 * 60;
 }
 return VAR_9;
}
