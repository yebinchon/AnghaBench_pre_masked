
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static const char *FUNC_2(int VAR_3, int *VAR_4)
{
 static const char *VAR_5[] = { "Auto", "      Japan NTSC", "      Japan PAL", "      USA", "      Europe" };
 static const char *VAR_6[] = { "", " JP", " JP", " US", " EU" };
 int VAR_7 = VAR_1;
 int VAR_8, VAR_9 = 0;

 *VAR_4 = -6;
 if (VAR_7) {
  VAR_7 <<= 1;
  while ((VAR_7 >>= 1)) VAR_9++;
  if (VAR_9 > 4)
   return "unknown";
  return VAR_5[VAR_9];
 } else {
  FUNC_1(VAR_2, "Auto:");
  for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
   VAR_7 = (VAR_0 >> VAR_8*4) & 0xf;
   for (VAR_9 = 0; VAR_7; VAR_7 >>= 1, VAR_9++)
    ;
   FUNC_0(VAR_2, VAR_6[VAR_9]);
  }
  return VAR_2;
 }
}
