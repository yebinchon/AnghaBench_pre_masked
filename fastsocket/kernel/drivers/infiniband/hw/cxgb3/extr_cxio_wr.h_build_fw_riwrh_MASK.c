
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int genbit; } ;
union t3_wr {TYPE_1__ genbit; } ;
typedef int u8 ;
typedef int u32 ;
struct fw_riwrh {void* gen_tid_len; void* op_seop_flags; } ;
typedef enum t3_wr_opcode { ____Placeholder_t3_wr_opcode } t3_wr_opcode ;
typedef enum t3_wr_flags { ____Placeholder_t3_wr_flags } t3_wr_flags ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;

__attribute__((used)) static inline void FUNC_9(struct fw_riwrh *VAR_0, enum t3_wr_opcode VAR_1,
      enum t3_wr_flags VAR_2, u8 VAR_3, u32 VAR_4,
      u8 VAR_5, u8 VAR_6)
{
 VAR_0->op_seop_flags = FUNC_6(FUNC_3(VAR_1) |
      FUNC_4(VAR_6) |
      FUNC_0(VAR_2));
 FUNC_8();
 VAR_0->gen_tid_len = FUNC_6(FUNC_1(VAR_3) |
           FUNC_5(VAR_4) |
           FUNC_2(VAR_5));

 ((union t3_wr *)VAR_0)->genbit.genbit = FUNC_7(VAR_3);
}
