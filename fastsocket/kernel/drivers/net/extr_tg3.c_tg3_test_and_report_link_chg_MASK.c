
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int link_up; int phy_flags; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tg3*) ;

__attribute__((used)) static bool FUNC_3(struct tg3 *VAR_2, bool VAR_3)
{
 if (VAR_3 != VAR_2->link_up) {
  if (VAR_3) {
   FUNC_1(VAR_2->dev);
  } else {
   FUNC_0(VAR_2->dev);
   if (VAR_2->phy_flags & VAR_0)
    VAR_2->phy_flags &= ~VAR_1;
  }

  FUNC_2(VAR_2);
  return 1;
 }

 return 0;
}
