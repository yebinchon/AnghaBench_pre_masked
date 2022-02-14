
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
typedef int s32 ;
struct TYPE_2__ {unsigned long* bpt_addr; unsigned int* bpt_insn; int bpt_nsaved; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (struct task_struct*,int) ;
 int FUNC_2 (struct task_struct*,unsigned long,int*) ;
 TYPE_1__* FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*,unsigned long,int ) ;

int
FUNC_5(struct task_struct * VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8 = 0;
 unsigned int VAR_9, VAR_10;
 unsigned long VAR_11;

 VAR_11 = FUNC_1(VAR_3, VAR_2);
 VAR_6 = FUNC_2(VAR_3, VAR_11, (int *) &VAR_9);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_10 = VAR_9 >> 26;
 if (VAR_10 >= 0x30) {
  VAR_4 = ((s32)(VAR_9 << 11)) >> 9;
  FUNC_3(VAR_3)->bpt_addr[VAR_8++] = VAR_11 + 4;
  if (VAR_4)
   FUNC_3(VAR_3)->bpt_addr[VAR_8++]
     = VAR_11 + 4 + VAR_4;
  FUNC_0(VAR_1, ("execing branch\n"));
 } else if (VAR_10 == 0x1a) {
  VAR_7 = (VAR_9 >> 16) & 0x1f;
  FUNC_3(VAR_3)->bpt_addr[VAR_8++] = FUNC_1(VAR_3, VAR_7);
  FUNC_0(VAR_1, ("execing jump\n"));
 } else {
  FUNC_3(VAR_3)->bpt_addr[VAR_8++] = VAR_11 + 4;
  FUNC_0(VAR_1, ("execing normal insn\n"));
 }


 for (VAR_5 = 0; VAR_5 < VAR_8; ++VAR_5) {
  VAR_6 = FUNC_2(VAR_3, FUNC_3(VAR_3)->bpt_addr[VAR_5],
          (int *) &VAR_9);
  if (VAR_6 < 0)
   return VAR_6;
  FUNC_3(VAR_3)->bpt_insn[VAR_5] = VAR_9;
  FUNC_0(VAR_1, ("    -> next_pc=%lx\n",
         FUNC_3(VAR_3)->bpt_addr[VAR_5]));
  VAR_6 = FUNC_4(VAR_3, FUNC_3(VAR_3)->bpt_addr[VAR_5],
    VAR_0);
  if (VAR_6 < 0)
   return VAR_6;
 }
 FUNC_3(VAR_3)->bpt_nsaved = VAR_8;
 return 0;
}
