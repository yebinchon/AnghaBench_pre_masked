
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * endptctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(unsigned char VAR_5, unsigned char VAR_6, int VAR_7)
{
 u32 VAR_8 = 0;

 VAR_8 = FUNC_0(&VAR_4->endptctrl[VAR_5]);

 if (VAR_7) {

  if (VAR_6)
   VAR_8 |= VAR_3;
  else
   VAR_8 |= VAR_1;
 } else {

  if (VAR_6) {
   VAR_8 &= ~VAR_3;
   VAR_8 |= VAR_2;
  } else {
   VAR_8 &= ~VAR_1;
   VAR_8 |= VAR_0;
  }
 }
 FUNC_1(VAR_8, &VAR_4->endptctrl[VAR_5]);
}
