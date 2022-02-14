
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* name; int left; int x; int right; scalar_t__ y; scalar_t__ bottom; scalar_t__ top; } ;
struct TYPE_5__ {int numitems; char** itemnames; TYPE_1__ generic; } ;
typedef TYPE_2__ menulist_s ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static void FUNC_1( menulist_s *VAR_2 ) {
 int VAR_3;
 int VAR_4;
 const char* VAR_5;

 if (VAR_2->generic.name)
  VAR_3 = FUNC_0(VAR_2->generic.name) * VAR_1;
 else
  VAR_3 = 0;

 VAR_2->generic.left = VAR_2->generic.x - VAR_1 - VAR_3;

 VAR_3 = VAR_2->numitems = 0;
 while ( (VAR_5 = VAR_2->itemnames[VAR_2->numitems]) != 0 )
 {
  VAR_4 = FUNC_0(VAR_5);
  if (VAR_4 > VAR_3)
   VAR_3 = VAR_4;

  VAR_2->numitems++;
 }

 VAR_2->generic.top = VAR_2->generic.y;
 VAR_2->generic.right = VAR_2->generic.x + (VAR_3+1)*VAR_1;
 VAR_2->generic.bottom = VAR_2->generic.y + VAR_0;
}
