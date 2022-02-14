
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ide_hw {unsigned long* io_ports_array; } ;
struct TYPE_3__ {int regbase; } ;
typedef TYPE_1__ _auide_hwif ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ide_hw *VAR_1, _auide_hwif *VAR_2)
{
 int VAR_3;
 unsigned long *VAR_4 = VAR_1->io_ports_array;


 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
  *VAR_4++ = VAR_2->regbase + (VAR_3 << VAR_0);


 *VAR_4 = VAR_2->regbase + (14 << VAR_0);
}
