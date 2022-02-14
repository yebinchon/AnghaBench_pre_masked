
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int CR3; int HIRQ; int CR4; } ;
struct TYPE_4__ {TYPE_1__ reg; int status; scalar_t__ filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,int,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(void) {
  u32 VAR_4;

  VAR_4 = (VAR_3->reg.CR3 >> 8);

  if (VAR_4 == 0xFF)
  {
     FUNC_2(VAR_2);
     VAR_3->reg.HIRQ |= VAR_0 | VAR_1;
     return;
  }
  else if (VAR_4 < 0x24)
  {
     if (FUNC_1(VAR_3->filter + VAR_4, ((VAR_3->reg.CR3 & 0xFF) << 16) | VAR_3->reg.CR4, 0) != 0)
     {
        FUNC_0("cs2\t: ReadFileSystem failed\n");
        FUNC_2(VAR_2);
        VAR_3->reg.HIRQ |= VAR_0 | VAR_1;
        return;
     }
  }

  FUNC_2(VAR_3->status);
  VAR_3->reg.HIRQ |= VAR_0 | VAR_1;
}
