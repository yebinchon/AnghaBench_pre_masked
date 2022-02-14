
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* reg; } ;
struct TYPE_5__ {scalar_t__ dirtyPal; } ;
struct TYPE_6__ {TYPE_1__ video; TYPE_2__ m; } ;


 unsigned char* VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_1(void)
{
 VAR_0 = (unsigned char *)VAR_3 + 8;
 if (!(VAR_2.video.reg[1]&8)) VAR_0 += 8*512;

 if (VAR_7 > 0)
  VAR_7--;

 if (VAR_2.m.dirtyPal)
  FUNC_0(1, 1);
 if ((VAR_8 & VAR_1) && !(VAR_2.video.reg[0xC]&8))
      VAR_6 = VAR_5;
 else VAR_6 = VAR_4;
}
