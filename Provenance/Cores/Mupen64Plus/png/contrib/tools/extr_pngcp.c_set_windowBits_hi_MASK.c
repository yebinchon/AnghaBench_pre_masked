
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct display {unsigned int size; int min_windowBits; } ;
struct TYPE_2__ {scalar_t__ name; int value; } ;


 int VAR_0 ;
 int FUNC_0 (struct display*,int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(struct display *VAR_5)
{



   int VAR_6 = VAR_0;
   int VAR_7 = FUNC_2(VAR_4);

   while (VAR_6 > 8 && VAR_5->size <= 1U<<(VAR_6-1)) --VAR_6;

   while (--VAR_7 >= 0) if (FUNC_1(VAR_4)[VAR_7].name == VAR_1) break;

   FUNC_3(VAR_7 > 1);
   FUNC_1(VAR_4)[VAR_7].value = VAR_6;

   FUNC_3(FUNC_1(VAR_4)[--VAR_7].name == VAR_2);
   FUNC_1(VAR_4)[VAR_7].value = VAR_6 > 8 ? 9 : 8;





   if (VAR_6 == 8)
      VAR_5->min_windowBits = FUNC_0(VAR_5, VAR_3);
}
