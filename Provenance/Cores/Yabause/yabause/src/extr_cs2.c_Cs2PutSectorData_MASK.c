
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int CR3; int HIRQ; } ;
struct TYPE_4__ {TYPE_1__ reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

void FUNC_1(void) {
  u32 VAR_5;

  VAR_5 = VAR_3->reg.CR3 >> 8;

  if (VAR_5 < VAR_4)
  {

     VAR_3->reg.HIRQ |= VAR_0 | VAR_1;
  }
  else
  {
     FUNC_0(VAR_2);
     VAR_3->reg.HIRQ |= VAR_0 | VAR_1;
  }
}
