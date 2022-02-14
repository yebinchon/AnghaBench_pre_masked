
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long addr_data; int regspacing; int regsize; scalar_t__ addr; } ;
struct smi_info {int io_size; TYPE_1__ io; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,int) ;

__attribute__((used)) static void FUNC_2(struct smi_info *VAR_0)
{
 unsigned long VAR_1 = VAR_0->io.addr_data;
 int VAR_2;

 if (VAR_0->io.addr) {
  FUNC_0(VAR_0->io.addr);

  VAR_2 = ((VAR_0->io_size * VAR_0->io.regspacing)
      - (VAR_0->io.regspacing - VAR_0->io.regsize));

  FUNC_1(VAR_1, VAR_2);
 }
}
