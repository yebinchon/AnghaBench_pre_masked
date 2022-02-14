
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_structp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void
FUNC_2(png_structp VAR_2, int VAR_3)
{



   int VAR_4 = VAR_0 & FUNC_1(256U);


   if (VAR_4 != 0)
   {
      if (VAR_3 && VAR_4 < VAR_1)
         VAR_4 |= VAR_1;

      FUNC_0(VAR_2, 0 , VAR_4);
   }
}
