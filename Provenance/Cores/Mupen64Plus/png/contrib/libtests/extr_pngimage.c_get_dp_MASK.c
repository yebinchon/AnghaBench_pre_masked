
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {int dummy; } ;
typedef int png_structp ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static struct display *
FUNC_3(png_structp VAR_1)

{
   struct display *VAR_2 = (struct display*)FUNC_2(VAR_1);

   if (VAR_2 == ((void*)0))
   {
      FUNC_1(VAR_0, "pngimage: internal error (no display)\n");
      FUNC_0(99);
   }

   return VAR_2;
}
