
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread_info {int tp_value; } ;
struct pt_regs {int* regs; } ;
struct TYPE_5__ {int linesz; } ;
struct TYPE_4__ {int linesz; } ;
struct TYPE_6__ {int cputype; TYPE_2__ icache; TYPE_1__ dcache; } ;




 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct thread_info* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct pt_regs *VAR_8, unsigned int VAR_9)
{
 struct thread_info *VAR_10 = FUNC_3(VAR_6);

 if ((VAR_9 & VAR_1) == VAR_5 && (VAR_9 & VAR_0) == VAR_3) {
  int VAR_11 = (VAR_9 & VAR_2) >> 11;
  int VAR_12 = (VAR_9 & VAR_4) >> 16;
  switch (VAR_11) {
  case 0:
   VAR_8->regs[VAR_12] = FUNC_2();
   return 0;
  case 1:
   VAR_8->regs[VAR_12] = FUNC_0(VAR_7.dcache.linesz,
          VAR_7.icache.linesz);
   return 0;
  case 2:
   VAR_8->regs[VAR_12] = FUNC_1();
   return 0;
  case 3:
   switch (VAR_7.cputype) {
   case 129:
   case 128:
    VAR_8->regs[VAR_12] = 1;
    break;
   default:
    VAR_8->regs[VAR_12] = 2;
   }
   return 0;
  case 29:
   VAR_8->regs[VAR_12] = VAR_10->tp_value;
   return 0;
  default:
   return -1;
  }
 }


 return -1;
}
