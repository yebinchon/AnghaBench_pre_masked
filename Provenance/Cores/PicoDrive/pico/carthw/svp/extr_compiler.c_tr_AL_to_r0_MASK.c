
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int emu_status; } ;


 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static void FUNC_4(int VAR_7)
{
 if (VAR_7 == 0x000f) {
  if (VAR_5 & VAR_0) {
   VAR_6.emu_status &= ~(VAR_3|VAR_2);
  } else {
   FUNC_1(0,7,0x484);
   FUNC_0(0,0,0,VAR_3|VAR_2);
   FUNC_3(0,7,0x484);
  }
 }

 if (VAR_4[0] != (VAR_1<<16)) {
  FUNC_2(0, 5);
  VAR_4[0] = VAR_1<<16;
 }
}
