
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; scalar_t__ h; scalar_t__ w; } ;
struct TYPE_4__ {int pitch; TYPE_1__ viewport; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,int ) ;

void FUNC_6(void)
{
   int VAR_6;

   if (VAR_5 == VAR_0)
      FUNC_3(0);
   else if ((VAR_5 & VAR_2) == VAR_1)
      FUNC_2(0);
   else
      FUNC_4(0);

   FUNC_5(VAR_3.data, VAR_3.viewport.w + (VAR_3.viewport.x * 2), VAR_3.viewport.h + (VAR_3.viewport.y * 2), VAR_3.pitch);

   VAR_6 = FUNC_1(VAR_4) << 1;
   FUNC_0(VAR_4, VAR_6 >> 1);
}
