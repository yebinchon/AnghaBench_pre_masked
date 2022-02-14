
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*,size_t,char*,...) ;

__attribute__((used)) static char *FUNC_3(char *VAR_0, size_t VAR_1,
     const u8 * VAR_2, u32 VAR_3, u32 VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 char VAR_9;

 VAR_5 = FUNC_2(VAR_0, VAR_1, "%08X", VAR_4);

 for (VAR_8 = 0, VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  VAR_5 += FUNC_2(VAR_0 + VAR_5, VAR_1 - VAR_5, " ");
  for (VAR_7 = 0; VAR_7 < 8 && VAR_8 < VAR_3; VAR_7++, VAR_8++)
   VAR_5 += FUNC_2(VAR_0 + VAR_5, VAR_1 - VAR_5, "%02X ",
     VAR_2[(VAR_6 * 8 + VAR_7)]);
  for (; VAR_7 < 8; VAR_7++)
   VAR_5 += FUNC_2(VAR_0 + VAR_5, VAR_1 - VAR_5, "   ");
 }

 VAR_5 += FUNC_2(VAR_0 + VAR_5, VAR_1 - VAR_5, " ");
 for (VAR_8 = 0, VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  VAR_5 += FUNC_2(VAR_0 + VAR_5, VAR_1 - VAR_5, " ");
  for (VAR_7 = 0; VAR_7 < 8 && VAR_8 < VAR_3; VAR_7++, VAR_8++) {
   VAR_9 = VAR_2[(VAR_6 * 8 + VAR_7)];
   if (!FUNC_0(VAR_9) || !FUNC_1(VAR_9))
    VAR_9 = '.';

   VAR_5 += FUNC_2(VAR_0 + VAR_5, VAR_1 - VAR_5, "%c", VAR_9);
  }

  for (; VAR_7 < 8; VAR_7++)
   VAR_5 += FUNC_2(VAR_0 + VAR_5, VAR_1 - VAR_5, " ");
 }

 return VAR_0;
}
