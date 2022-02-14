
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ x; scalar_t__ width; scalar_t__ y; scalar_t__ height; } ;
struct TYPE_8__ {int neighbors; TYPE_3__** letters; TYPE_1__ rect; } ;
typedef TYPE_2__ ccv_textline_t ;
struct TYPE_9__ {TYPE_1__ rect; } ;
typedef TYPE_3__ ccv_letter_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__**,int) ;

__attribute__((used)) static void FUNC_2(ccv_textline_t* VAR_0, ccv_letter_t* VAR_1)
{
 if (VAR_0->neighbors == 0)
 {
  VAR_0->rect = VAR_1->rect;
  VAR_0->neighbors = 1;
  VAR_0->letters = (ccv_letter_t**)FUNC_0(sizeof(ccv_letter_t*) * VAR_0->neighbors);
  VAR_0->letters[0] = VAR_1;
 } else {
  int VAR_2, VAR_3 = 0;
  for (VAR_2 = 0; VAR_2 < VAR_0->neighbors; VAR_2++)
   if (VAR_0->letters[VAR_2] == VAR_1)
   {
    VAR_3 = 1;
    break;
   }
  if (VAR_3)
   return;
  if (VAR_1->rect.x < VAR_0->rect.x)
  {
   VAR_0->rect.width += VAR_0->rect.x - VAR_1->rect.x;
   VAR_0->rect.x = VAR_1->rect.x;
  }
  if (VAR_1->rect.x + VAR_1->rect.width > VAR_0->rect.x + VAR_0->rect.width)
   VAR_0->rect.width = VAR_1->rect.x + VAR_1->rect.width - VAR_0->rect.x;
  if (VAR_1->rect.y < VAR_0->rect.y)
  {
   VAR_0->rect.height += VAR_0->rect.y - VAR_1->rect.y;
   VAR_0->rect.y = VAR_1->rect.y;
  }
  if (VAR_1->rect.y + VAR_1->rect.height > VAR_0->rect.y + VAR_0->rect.height)
   VAR_0->rect.height = VAR_1->rect.y + VAR_1->rect.height - VAR_0->rect.y;
  VAR_0->neighbors++;
  VAR_0->letters = (ccv_letter_t**)FUNC_1(VAR_0->letters, sizeof(ccv_letter_t*) * VAR_0->neighbors);
  VAR_0->letters[VAR_0->neighbors - 1] = VAR_1;
 }
}
