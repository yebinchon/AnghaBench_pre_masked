
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned short addr; scalar_t__* reg; } ;
struct TYPE_4__ {TYPE_1__ video; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static __inline void FUNC_0(void)
{
  VAR_0.video.addr=(unsigned short)(VAR_0.video.addr+VAR_0.video.reg[0xf]);
}
