
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t r; size_t g; size_t b; int a; } ;
typedef TYPE_1__ Pixel ;
typedef int Background ;


 int FUNC_0 (int ,int ,int ) ;
 size_t FUNC_1 (size_t,int) ;
 int * VAR_0 ;
 size_t FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(Pixel *VAR_1, const Pixel *VAR_2, const Background *VAR_3)
{
   (void)VAR_3;

   if (VAR_2->r == VAR_2->g && VAR_2->g == VAR_2->b)
      VAR_1->r = VAR_1->g = VAR_1->b = FUNC_1(VAR_2->g, VAR_2->a);

   else
      VAR_1->r = VAR_1->g = VAR_1->b = FUNC_2(VAR_2->a * 257 *
         FUNC_0(VAR_0[VAR_2->r], VAR_0[VAR_2->g], VAR_0[VAR_2->b]));

   VAR_1->a = 257 * VAR_2->a;
}
