
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ y; scalar_t__ bottom; scalar_t__ top; scalar_t__ x; scalar_t__ right; scalar_t__ left; scalar_t__ name; } ;
struct TYPE_5__ {TYPE_1__ generic; } ;
typedef TYPE_2__ menuradiobutton_s ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1( menuradiobutton_s *VAR_2 )
{
 int VAR_3;


 if (VAR_2->generic.name)
  VAR_3 = FUNC_0(VAR_2->generic.name);
 else
  VAR_3 = 0;

 VAR_2->generic.left = VAR_2->generic.x - (VAR_3+1)*VAR_1;
 VAR_2->generic.right = VAR_2->generic.x + 6*VAR_1;
 VAR_2->generic.top = VAR_2->generic.y;
 VAR_2->generic.bottom = VAR_2->generic.y + VAR_0;
}
