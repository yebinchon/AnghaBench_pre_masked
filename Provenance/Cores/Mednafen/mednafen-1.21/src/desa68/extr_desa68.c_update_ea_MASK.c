
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ea_src; int ea_dst; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_0(unsigned int VAR_1)
{
  VAR_1 &= 0xFFFFFF;
  if (VAR_0.ea_src == -1) {
    VAR_0.ea_src = VAR_1;
  } else if (VAR_0.ea_dst == -1) {
    VAR_0.ea_dst = VAR_1;
  }
}
