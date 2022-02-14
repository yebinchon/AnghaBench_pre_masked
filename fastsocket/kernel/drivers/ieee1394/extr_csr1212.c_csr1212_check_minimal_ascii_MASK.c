
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const char *VAR_1)
{
 static const char VAR_2[] = {

  128,
  4 + 16 + 32,
  0,
  0,
  255 - 8 - 16,
  255,
  255,
  255,
  255,
  255,
  255,
  1 + 2 + 4 + 128,
  255 - 1,
  255,
  255,
  1 + 2 + 4,
 };
 int VAR_3, VAR_4;

 for (; *VAR_1; VAR_1++) {
  VAR_3 = *VAR_1 >> 3;
  VAR_4 = 1 << (*VAR_1 & 3);

  if (VAR_3 >= FUNC_0(VAR_2) ||
      !(VAR_2[VAR_3] & VAR_4))
   return -VAR_0;
 }
 return 0;
}
