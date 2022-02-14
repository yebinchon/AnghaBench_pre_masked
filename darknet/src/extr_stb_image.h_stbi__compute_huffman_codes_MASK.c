
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int stbi_uc ;
typedef int stbi__zhuffman ;
struct TYPE_5__ {int z_distance; int z_length; } ;
typedef TYPE_1__ stbi__zbuf ;
typedef int codelength_sizes ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_6(stbi__zbuf *VAR_0)
{
   static const stbi_uc VAR_1[19] = { 16,17,18,0,8,7,9,6,10,5,11,4,12,3,13,2,14,1,15 };
   stbi__zhuffman VAR_2;
   stbi_uc VAR_3[286+32+137];
   stbi_uc VAR_4[19];
   int VAR_5,VAR_6;

   int VAR_7 = FUNC_5(VAR_0,5) + 257;
   int VAR_8 = FUNC_5(VAR_0,5) + 1;
   int VAR_9 = FUNC_5(VAR_0,4) + 4;
   int VAR_10 = VAR_7 + VAR_8;

   FUNC_1(VAR_4, 0, sizeof(VAR_4));
   for (VAR_5=0; VAR_5 < VAR_9; ++VAR_5) {
      int VAR_11 = FUNC_5(VAR_0,3);
      VAR_4[VAR_1[VAR_5]] = (stbi_uc) VAR_11;
   }
   if (!FUNC_3(&VAR_2, VAR_4, 19)) return 0;

   VAR_6 = 0;
   while (VAR_6 < VAR_10) {
      int VAR_12 = FUNC_4(VAR_0, &VAR_2);
      if (VAR_12 < 0 || VAR_12 >= 19) return FUNC_2("bad codelengths", "Corrupt PNG");
      if (VAR_12 < 16)
         VAR_3[VAR_6++] = (stbi_uc) VAR_12;
      else {
         stbi_uc VAR_13 = 0;
         if (VAR_12 == 16) {
            VAR_12 = FUNC_5(VAR_0,2)+3;
            if (VAR_6 == 0) return FUNC_2("bad codelengths", "Corrupt PNG");
            VAR_13 = VAR_3[VAR_6-1];
         } else if (VAR_12 == 17)
            VAR_12 = FUNC_5(VAR_0,3)+3;
         else {
            FUNC_0(VAR_12 == 18);
            VAR_12 = FUNC_5(VAR_0,7)+11;
         }
         if (VAR_10 - VAR_6 < VAR_12) return FUNC_2("bad codelengths", "Corrupt PNG");
         FUNC_1(VAR_3+VAR_6, VAR_13, VAR_12);
         VAR_6 += VAR_12;
      }
   }
   if (VAR_6 != VAR_10) return FUNC_2("bad codelengths","Corrupt PNG");
   if (!FUNC_3(&VAR_0->z_length, VAR_3, VAR_7)) return 0;
   if (!FUNC_3(&VAR_0->z_distance, VAR_3+VAR_7, VAR_8)) return 0;
   return 1;
}
