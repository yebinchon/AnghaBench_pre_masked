
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int pixel_t ;


 int VAR_0 ;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int) ;

pixel_t *FUNC_6(u32 VAR_1, int * VAR_2, int * VAR_3)
{
   pixel_t * VAR_4;

   FUNC_1();
   FUNC_3(VAR_0);
   FUNC_4(VAR_1);

   if ((VAR_4 = (pixel_t *)FUNC_5(sizeof(pixel_t), 704 * 512)) == ((void*)0))
      return ((void*)0);

   FUNC_0(VAR_2, VAR_3);

   FUNC_2(VAR_4);

   return VAR_4;
}
