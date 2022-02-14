
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctl_addr; } ;
struct ide_hw {scalar_t__ irq; TYPE_1__ io_ports; scalar_t__* io_ports_array; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ide_hw*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct ide_hw *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_5, 0, sizeof(*VAR_5));
 for (VAR_6 = 0; VAR_6 <= 7; VAR_6++)
  VAR_5->io_ports_array[VAR_6] = VAR_1 + VAR_4*VAR_6;
 VAR_5->io_ports.ctl_addr = VAR_0;
 VAR_5->irq = VAR_3 + VAR_2;
}
