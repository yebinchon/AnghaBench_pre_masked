
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void stbi_uc ;
typedef int stbi__result_info ;
typedef int stbi__context ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*,int,int) ;
 scalar_t__ FUNC_3 (int *) ;
 void* FUNC_4 (void*,int,int,int,int) ;
 void* FUNC_5 (char*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,int,int,int ) ;
 scalar_t__ FUNC_10 (int,int,int,int ) ;
 int FUNC_11 (int *,int,int,int*,void*) ;

__attribute__((used)) static void *FUNC_12(stbi__context *VAR_0,int *VAR_1,int *VAR_2,int *VAR_3,int VAR_4, stbi__result_info *VAR_5)
{
   stbi_uc *VAR_6;
   int VAR_7, VAR_8,VAR_9, VAR_10;
   FUNC_1(VAR_5);

   if (!VAR_3) VAR_3 = &VAR_10;

   for (VAR_7=0; VAR_7<92; ++VAR_7)
      FUNC_8(VAR_0);

   VAR_8 = FUNC_6(VAR_0);
   VAR_9 = FUNC_6(VAR_0);
   if (FUNC_3(VAR_0)) return FUNC_5("bad file","file too short (pic header)");
   if (!FUNC_9(VAR_8, VAR_9, 4, 0)) return FUNC_5("too large", "PIC image too large to decode");

   FUNC_7(VAR_0);
   FUNC_6(VAR_0);
   FUNC_6(VAR_0);


   VAR_6 = (stbi_uc *) FUNC_10(VAR_8, VAR_9, 4, 0);
   FUNC_2(VAR_6, 0xff, VAR_8*VAR_9*4);

   if (!FUNC_11(VAR_0,VAR_8,VAR_9,VAR_3, VAR_6)) {
      FUNC_0(VAR_6);
      VAR_6=0;
   }
   *VAR_1 = VAR_8;
   *VAR_2 = VAR_9;
   if (VAR_4 == 0) VAR_4 = *VAR_3;
   VAR_6=FUNC_4(VAR_6,4,VAR_4,VAR_8,VAR_9);

   return VAR_6;
}
