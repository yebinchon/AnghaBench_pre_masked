
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bluey; int bluex; int greeny; int greenx; int redy; int redx; int whitey; int whitex; } ;
typedef TYPE_1__ png_xy ;


 scalar_t__ FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_1(const png_xy *VAR_0, const png_xy *VAR_1, int VAR_2)
{

   if (FUNC_0(VAR_0->whitex, VAR_1->whitex,VAR_2) ||
       FUNC_0(VAR_0->whitey, VAR_1->whitey,VAR_2) ||
       FUNC_0(VAR_0->redx, VAR_1->redx, VAR_2) ||
       FUNC_0(VAR_0->redy, VAR_1->redy, VAR_2) ||
       FUNC_0(VAR_0->greenx, VAR_1->greenx,VAR_2) ||
       FUNC_0(VAR_0->greeny, VAR_1->greeny,VAR_2) ||
       FUNC_0(VAR_0->bluex, VAR_1->bluex, VAR_2) ||
       FUNC_0(VAR_0->bluey, VAR_1->bluey, VAR_2))
      return 0;
   return 1;
}
