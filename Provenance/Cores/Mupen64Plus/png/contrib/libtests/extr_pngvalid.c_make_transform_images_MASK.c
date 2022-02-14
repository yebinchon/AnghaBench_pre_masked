
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int test; } ;
struct TYPE_4__ {TYPE_3__ this; } ;
typedef TYPE_1__ png_modifier ;
typedef int png_byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,int ,unsigned int,int,char*) ;
 scalar_t__ FUNC_1 (int *,int *,unsigned int*,int,int) ;
 int FUNC_2 (int ,int,int ,char*) ;
 int FUNC_3 (char*,int,int ,int ,int ,unsigned int,int,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(png_modifier *VAR_4)
{
   png_byte VAR_5 = 0;
   png_byte VAR_6 = 0;
   unsigned int VAR_7 = 0;


   FUNC_2(VAR_4->this.test, sizeof VAR_4->this.test, 0, "make standard images");





   while (FUNC_1(&VAR_5, &VAR_6, &VAR_7, 1, 1))
   {
      int VAR_8;

      for (VAR_8 = VAR_2;
           VAR_8 < VAR_1; ++VAR_8)
      {
         char VAR_9[VAR_0];

         FUNC_3(VAR_9, sizeof VAR_9, 0, VAR_5, VAR_6,
            VAR_7, VAR_8, 0, 0, VAR_3);
         FUNC_0(&VAR_4->this, VAR_5, VAR_6, VAR_7,
            VAR_8, VAR_9);
      }
   }
}
