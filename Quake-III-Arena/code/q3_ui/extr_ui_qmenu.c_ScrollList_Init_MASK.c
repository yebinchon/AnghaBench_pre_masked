
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int left; int x; int right; int flags; scalar_t__ y; scalar_t__ bottom; scalar_t__ top; } ;
struct TYPE_5__ {int columns; int seperation; int width; int height; TYPE_1__ generic; scalar_t__ top; scalar_t__ curvalue; scalar_t__ oldvalue; } ;
typedef TYPE_2__ menulist_s ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0( menulist_s *VAR_3 )
{
 int VAR_4;

 VAR_3->oldvalue = 0;
 VAR_3->curvalue = 0;
 VAR_3->top = 0;

 if( !VAR_3->columns ) {
  VAR_3->columns = 1;
  VAR_3->seperation = 0;
 }
 else if( !VAR_3->seperation ) {
  VAR_3->seperation = 3;
 }

 VAR_4 = ( (VAR_3->width + VAR_3->seperation) * VAR_3->columns - VAR_3->seperation) * VAR_2;

 VAR_3->generic.left = VAR_3->generic.x;
 VAR_3->generic.top = VAR_3->generic.y;
 VAR_3->generic.right = VAR_3->generic.x + VAR_4;
 VAR_3->generic.bottom = VAR_3->generic.y + VAR_3->height * VAR_1;

 if( VAR_3->generic.flags & VAR_0 ) {
  VAR_3->generic.left -= VAR_4 / 2;
  VAR_3->generic.right -= VAR_4 / 2;
 }
}
