
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int simmediate; } ;
union mips_instruction {TYPE_1__ i_format; } ;
struct mips_frame_info {int func_size; int pc_offset; int frame_size; union mips_instruction* func; } ;


 scalar_t__ FUNC_0 (union mips_instruction*) ;
 scalar_t__ FUNC_1 (union mips_instruction*) ;
 scalar_t__ FUNC_2 (union mips_instruction*) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct mips_frame_info *VAR_0)
{
 union mips_instruction *VAR_1 = VAR_0->func;
 unsigned VAR_2 = VAR_0->func_size / sizeof(union mips_instruction);
 unsigned VAR_3;

 VAR_0->pc_offset = -1;
 VAR_0->frame_size = 0;

 if (!VAR_1)
  goto err;

 if (VAR_2 == 0)
  VAR_2 = 128U;
 VAR_2 = FUNC_3(128U, VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++, VAR_1++) {

  if (FUNC_0(VAR_1))
   break;
  if (!VAR_0->frame_size) {
   if (FUNC_2(VAR_1))
    VAR_0->frame_size = - VAR_1->i_format.simmediate;
   continue;
  }
  if (VAR_0->pc_offset == -1 && FUNC_1(VAR_1)) {
   VAR_0->pc_offset =
    VAR_1->i_format.simmediate / sizeof(long);
   break;
  }
 }
 if (VAR_0->frame_size && VAR_0->pc_offset >= 0)
  return 0;
 if (VAR_0->pc_offset < 0)
  return 1;

err:
 return -1;
}
