
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 unsigned short FUNC_2 (int *,int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (int *,int ,unsigned short) ;

__attribute__((used)) static void FUNC_4(int VAR_5, unsigned short VAR_6)
{
 unsigned short VAR_7 = FUNC_2(&VAR_4.dev, VAR_0);

 if (VAR_6 & 0x0007) {
  FUNC_0(VAR_1, 1);
  if (!(VAR_7 & 0x0002) && !(VAR_7 & 0x0004))
          FUNC_1(5);
  if (VAR_5 == VAR_2)
          VAR_7 |= 0x0002;
  if (VAR_5 == VAR_3)
          VAR_7 |= 0x0004;
         FUNC_3(&VAR_4.dev, VAR_0, VAR_7 | VAR_6);
 } else {
  if (VAR_5 == VAR_2)
          VAR_7 &= ~0x0002;
  if (VAR_5 == VAR_3)
          VAR_7 &= ~0x0004;
  if (!(VAR_7 & 0x0002) && !(VAR_7 & 0x0004)) {
   FUNC_3(&VAR_4.dev, VAR_0, 0x0000);
          FUNC_1(1);
   FUNC_0(VAR_1, 0);
  } else {
          FUNC_3(&VAR_4.dev, VAR_0, VAR_7 | VAR_6);
  }
 }
}
