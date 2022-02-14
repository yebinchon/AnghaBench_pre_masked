
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,size_t,char*,unsigned char) ;
 size_t FUNC_1 (char*,char*,size_t) ;
 size_t FUNC_2 (char*,char*,size_t) ;

void FUNC_3(char *VAR_0, size_t VAR_1, char VAR_2, unsigned char VAR_3, bool VAR_4)
{
   size_t VAR_5 = 0;

   if (!VAR_0 || VAR_1 == 0)
      return;

   if (VAR_4)
   {
      VAR_5 = FUNC_2(VAR_0, "cdrom://drive", VAR_1);

      if (VAR_1 > VAR_5 + 1)
      {
         VAR_0[VAR_5++] = VAR_2;
         VAR_0[VAR_5] = '\0';
      }

      VAR_5 = FUNC_1(VAR_0, ".cue", VAR_1);


   }
   else
   {
      VAR_5 = FUNC_2(VAR_0, "cdrom://drive", VAR_1);

      if (VAR_1 > VAR_5)
         VAR_0[VAR_5++] = VAR_2;

      VAR_5 += FUNC_0(VAR_0 + VAR_5, VAR_1 - VAR_5, "-track%02d.bin", VAR_3);


   }
}
