
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int mcieb; int scieb; scalar_t__ scipd; scalar_t__ mcipd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_1(u16 VAR_3, int VAR_4)
{
   int VAR_5;

   for (VAR_5 = 0; VAR_5 < 11; VAR_5++)
   {
      if ((1<<VAR_5) & VAR_3 & VAR_2.mcieb && VAR_2.mcipd)
         FUNC_0(VAR_5, VAR_0 & VAR_4);
      if ((1<<VAR_5) & VAR_3 & VAR_2.scieb && VAR_2.scipd)
         FUNC_0(VAR_5, VAR_1 & VAR_4);
   }
}
