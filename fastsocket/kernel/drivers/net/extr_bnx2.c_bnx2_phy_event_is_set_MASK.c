
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct status_block {int status_attn_bits; int status_attn_bits_ack; } ;
struct TYPE_2__ {struct status_block* msi; } ;
struct bnx2_napi {TYPE_1__ status_blk; } ;
struct bnx2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct bnx2 *VAR_2, struct bnx2_napi *VAR_3, u32 VAR_4)
{
 struct status_block *VAR_5 = VAR_3->status_blk.msi;
 u32 VAR_6, VAR_7;
 int VAR_8 = 1;

 VAR_6 = VAR_5->status_attn_bits & VAR_4;
 VAR_7 = VAR_5->status_attn_bits_ack & VAR_4;
 if (VAR_6 != VAR_7) {
  if (VAR_6)
   FUNC_0(VAR_2, VAR_1, VAR_4);
  else
   FUNC_0(VAR_2, VAR_0, VAR_4);
 } else
  VAR_8 = 0;

 return VAR_8;
}
