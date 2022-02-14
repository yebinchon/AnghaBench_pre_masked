
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VGfloat ;
typedef int VGbitfield ;
typedef int VGFT_FONT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,int,int ,int) ;
 int FUNC_1 (int ,int,int *) ;

__attribute__((used)) static void FUNC_2(VGFT_FONT_T *VAR_2, VGfloat VAR_3, VGfloat VAR_4, const char *VAR_5, int VAR_6, VGbitfield VAR_7) {
   if (VAR_6 == 0) return;


   VGfloat VAR_8[] = { VAR_3, VAR_4 };
   FUNC_1(VAR_1, 2, VAR_8);


   const char *VAR_9 = VAR_5;
   int VAR_10 = VAR_6;
   while (VAR_10 > VAR_0) {
      FUNC_0(VAR_2, VAR_9, VAR_0, VAR_7, 1);
      VAR_10 -= VAR_0;
      VAR_9 += VAR_0;
   }


   FUNC_0(VAR_2, VAR_9, VAR_10, VAR_7, 0);
}
