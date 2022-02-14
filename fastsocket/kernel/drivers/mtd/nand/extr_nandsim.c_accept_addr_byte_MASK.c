
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
typedef int u_char ;
struct TYPE_4__ {int pgaddrbytes; int secaddrbytes; } ;
struct TYPE_3__ {int count; int column; int row; } ;
struct nandsim {TYPE_2__ geom; TYPE_1__ regs; } ;



__attribute__((used)) static inline void FUNC_0(struct nandsim *VAR_0, u_char VAR_1)
{
 uint VAR_2 = (uint)VAR_1;

 if (VAR_0->regs.count < (VAR_0->geom.pgaddrbytes - VAR_0->geom.secaddrbytes))
  VAR_0->regs.column |= (VAR_2 << 8 * VAR_0->regs.count);
 else {
  VAR_0->regs.row |= (VAR_2 << 8 * (VAR_0->regs.count -
      VAR_0->geom.pgaddrbytes +
      VAR_0->geom.secaddrbytes));
 }

 return;
}
