
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dmae_command {int dst_addr_lo; int len; int comp_addr_lo; int comp_val; scalar_t__ comp_addr_hi; scalar_t__ dst_addr_hi; int src_addr_hi; int src_addr_lo; scalar_t__ opcode; } ;
struct bnx2x {scalar_t__ func_stx; scalar_t__ executer_idx; int func_stats; struct dmae_command stats_dmae; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct bnx2x*,int ,int ,int,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct bnx2x*,struct dmae_command*,scalar_t__*) ;
 int FUNC_8 (struct bnx2x*,struct dmae_command*,int) ;
 scalar_t__* FUNC_9 (struct bnx2x*,int ) ;
 int FUNC_10 (struct bnx2x*,struct dmae_command) ;
 int* VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (scalar_t__*,int *,int) ;
 int FUNC_12 (struct dmae_command*,int ,int) ;
 scalar_t__* VAR_7 ;

__attribute__((used)) static void FUNC_13(struct bnx2x *VAR_8)
{
 struct dmae_command *VAR_9 = &VAR_8->stats_dmae;
 u32 *VAR_10 = FUNC_9(VAR_8, VAR_10);

 *VAR_10 = VAR_1;
 if (FUNC_1(VAR_8))
  return;


 if (VAR_8->func_stx)
  FUNC_11(FUNC_9(VAR_8, VAR_6), &VAR_8->func_stats,
         sizeof(VAR_8->func_stats));


 if (VAR_8->executer_idx) {
  int VAR_11 = FUNC_2(VAR_8);
  u32 VAR_12 = FUNC_5(VAR_8, VAR_4, VAR_2,
       1, VAR_0);
  VAR_12 = FUNC_6(VAR_12);

  FUNC_12(VAR_9, 0, sizeof(struct dmae_command));
  VAR_9->opcode = VAR_12;
  VAR_9->src_addr_lo = FUNC_4(FUNC_10(VAR_8, VAR_9[0]));
  VAR_9->src_addr_hi = FUNC_3(FUNC_10(VAR_8, VAR_9[0]));
  VAR_9->dst_addr_lo = (VAR_3 +
         sizeof(struct dmae_command) *
         (VAR_11 + 1)) >> 2;
  VAR_9->dst_addr_hi = 0;
  VAR_9->len = sizeof(struct dmae_command) >> 2;
  if (FUNC_0(VAR_8))
   VAR_9->len--;
  VAR_9->comp_addr_lo = VAR_5[VAR_11 + 1] >> 2;
  VAR_9->comp_addr_hi = 0;
  VAR_9->comp_val = 1;

  *VAR_10 = 0;
  FUNC_8(VAR_8, VAR_9, VAR_11);

 } else if (VAR_8->func_stx) {
  *VAR_10 = 0;
  FUNC_7(VAR_8, VAR_9, VAR_10);
 }
}
