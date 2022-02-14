
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Status_CDC; } ;
struct TYPE_4__ {int* s68k_regs; TYPE_1__ scd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (char*,unsigned int,int,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_1(void)
{
 unsigned int VAR_7 = 0;
 int VAR_8;

 VAR_8 = (VAR_1 & VAR_0) && (VAR_2&0x800) && !(VAR_3->s68k_regs[0x36] & 1) &&
   (VAR_3->scd.Status_CDC & 1) && VAR_4 >= 0;

 if (VAR_8) {
  VAR_7 = VAR_5 << 7;
  VAR_7 /= VAR_6 >> 3;
 }
 FUNC_0("offs1024=%u (%i/%i)\n", VAR_7, VAR_5, VAR_6);

 return VAR_7;
}
