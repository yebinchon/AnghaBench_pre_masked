
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bus_pick_width; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_2)
{
 unsigned long VAR_3 = VAR_2 / (VAR_1.bus_pick_width / 8);

 FUNC_0((VAR_3 - 1) & ~0x3ffff);

 FUNC_1(VAR_0, 0x3ffff);
 FUNC_2(VAR_0, (VAR_3 - 1) & 0x3ffff);
}
