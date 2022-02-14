
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_xy ;
typedef int png_XYZ ;


 int FUNC_0 (int *,int const*) ;
 scalar_t__ FUNC_1 (int const*,int *,int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int
FUNC_3(png_XYZ *VAR_0, const png_xy *VAR_1)
{
   int VAR_2;
   png_xy VAR_3;


   VAR_2 = FUNC_0(VAR_0, VAR_1);
   if (VAR_2 != 0)
      return VAR_2;

   VAR_2 = FUNC_2(&VAR_3, VAR_0);
   if (VAR_2 != 0)
      return VAR_2;

   if (FUNC_1(VAR_1, &VAR_3,
       5 ) != 0)
      return 0;


   return 1;
}
