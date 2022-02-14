
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int addr_data; int regspacing; int regsize; } ;
struct smi_info {int io_size; TYPE_1__ io; } ;


 int FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_1(struct smi_info *VAR_0)
{
 unsigned int VAR_1 = VAR_0->io.addr_data;
 int VAR_2;

 if (VAR_1) {
  for (VAR_2 = 0; VAR_2 < VAR_0->io_size; VAR_2++)
   FUNC_0(VAR_1 + VAR_2 * VAR_0->io.regspacing,
           VAR_0->io.regsize);
 }
}
