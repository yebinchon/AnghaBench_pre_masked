
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned char *VAR_0, unsigned char *VAR_1,
        unsigned VAR_2, unsigned VAR_3, unsigned *VAR_4,
        unsigned *VAR_5)
{
 unsigned VAR_6, VAR_7;
 int VAR_8 = -1;

 for (VAR_6 = VAR_2; VAR_6 < VAR_2 + VAR_3; VAR_6++)
  if (VAR_0[VAR_6] != VAR_1[VAR_6]) {
   VAR_8 = VAR_6;
   break;
  }

 while (VAR_6 < VAR_2 + VAR_3) {
  if (VAR_0[VAR_6] != VAR_1[VAR_6]) {
   (*VAR_4)++;
   VAR_7 = 1;
   while (VAR_7 < 256) {
    if ((VAR_0[VAR_6] & VAR_7) != (VAR_1[VAR_6] & VAR_7))
     (*VAR_5)++;
    VAR_7 <<= 1;
   }
  }
  VAR_6++;
 }

 return VAR_8;
}
