
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_3__ {int CR3; int HIRQ; } ;
struct TYPE_4__ {TYPE_1__ reg; int status; scalar_t__ outconcddevnum; int * filter; int * outconcddev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int ) ;

void FUNC_1(void) {
  u32 VAR_3;

  VAR_3 = (VAR_2->reg.CR3 >> 8);

  if (VAR_3 == 0xFF)
     VAR_2->outconcddev = ((void*)0);
  else if (VAR_3 < 0x24)
     VAR_2->outconcddev = VAR_2->filter + VAR_3;

  VAR_2->outconcddevnum = (u8)VAR_3;

  FUNC_0(VAR_2->status);
  VAR_2->reg.HIRQ |= VAR_0 | VAR_1;
}
