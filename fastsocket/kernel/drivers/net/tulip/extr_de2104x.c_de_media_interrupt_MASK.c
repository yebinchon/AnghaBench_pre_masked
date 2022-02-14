
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct de_private {int media_timer; int dev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct de_private*) ;
 int FUNC_2 (struct de_private*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5 (struct de_private *VAR_5, u32 VAR_6)
{
 if (VAR_6 & VAR_3) {
  FUNC_2(VAR_5);
  FUNC_3(&VAR_5->media_timer, VAR_4 + VAR_0);
  return;
 }

 FUNC_0(!(VAR_6 & VAR_2));

 if (FUNC_4(VAR_5->dev)) {
  FUNC_1(VAR_5);
  FUNC_3(&VAR_5->media_timer, VAR_4 + VAR_1);
 }
}
