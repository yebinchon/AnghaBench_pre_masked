
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * byte; } ;
struct TYPE_3__ {unsigned int row; } ;
struct nandsim {TYPE_2__ buf; TYPE_1__ regs; } ;


 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (unsigned int) ;

int FUNC_4(struct nandsim *VAR_0, int VAR_1)
{
 unsigned int VAR_2 = VAR_0->regs.row;

 if (FUNC_3(VAR_2)) {
  int VAR_3;
  FUNC_1(VAR_0->buf.byte, 0xFF, VAR_1);
  for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
   VAR_0->buf.byte[VAR_3] = FUNC_2();
  FUNC_0("simulating read error in page %u\n", VAR_2);
  return 1;
 }
 return 0;
}
