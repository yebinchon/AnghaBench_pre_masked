
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tulip_private {int flags; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2 (struct tulip_private *VAR_4,
       int VAR_5, int VAR_6)
{
 if (VAR_4->flags & VAR_3) {
  u32 VAR_7, VAR_8;
  FUNC_0 (VAR_4->pdev, VAR_0, &VAR_7);
  VAR_8 = VAR_7 & ~(VAR_1 | VAR_2);
  if (VAR_5)
   VAR_8 |= VAR_1;
  else if (VAR_6)
   VAR_8 |= VAR_2;
  if (VAR_7 != VAR_8)
   FUNC_1 (VAR_4->pdev, VAR_0, VAR_8);
 }

}
