
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ left; scalar_t__ right; int dy; int dx; } ;
typedef TYPE_1__ ccv_letter_pair_t ;



__attribute__((used)) static int FUNC_0(const void* VAR_0, const void* VAR_1, void* VAR_2)
{
 ccv_letter_pair_t* VAR_3 = (ccv_letter_pair_t*)VAR_0;
 ccv_letter_pair_t* VAR_4 = (ccv_letter_pair_t*)VAR_1;
 if (VAR_3->left == VAR_4->left || VAR_3->right == VAR_4->right)
 {
  int VAR_5 = VAR_3->dy * VAR_4->dx - VAR_3->dx * VAR_4->dy;
  int VAR_6 = VAR_3->dx * VAR_4->dx + VAR_3->dy * VAR_4->dy;

  if (VAR_5 * 7 < -VAR_6 * 4 && VAR_5 * 7 > VAR_6 * 4)
   return 1;
 } else if (VAR_3->left == VAR_4->right || VAR_3->right == VAR_4->left) {
  int VAR_7 = VAR_3->dy * VAR_4->dx - VAR_3->dx * VAR_4->dy;
  int VAR_8 = VAR_3->dx * VAR_4->dx + VAR_3->dy * VAR_4->dy;

  if (VAR_7 * 7 < VAR_8 * 4 && VAR_7 * 7 > -VAR_8 * 4)
   return 1;
 }
 return 0;
}
