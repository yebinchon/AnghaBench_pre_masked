
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int width; unsigned int height; } ;
typedef TYPE_1__ XWindowAttributes ;
typedef int Display ;


 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *,int) ;
 unsigned int FUNC_2 (int *,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_6(void *VAR_3, unsigned *VAR_4, unsigned *VAR_5)
{
   if (!VAR_1 || VAR_2 == VAR_0)
   {
      Display *VAR_6 = (Display*)FUNC_5(((void*)0));
      *VAR_4 = 0;
      *VAR_5 = 0;

      if (VAR_6)
      {
         int VAR_7 = FUNC_0(VAR_6);
         *VAR_4 = FUNC_2(VAR_6, VAR_7);
         *VAR_5 = FUNC_1(VAR_6, VAR_7);
         FUNC_3(VAR_6);
      }
   }
   else
   {
      XWindowAttributes VAR_8;
      FUNC_4(VAR_1, VAR_2, &VAR_8);

      *VAR_4 = VAR_8.width;
      *VAR_5 = VAR_8.height;
   }
}
