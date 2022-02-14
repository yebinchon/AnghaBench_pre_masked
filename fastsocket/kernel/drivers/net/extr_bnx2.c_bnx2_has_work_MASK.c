
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct status_block {scalar_t__ status_idx; int status_attn_bits; int status_attn_bits_ack; } ;
struct TYPE_2__ {struct status_block* msi; } ;
struct bnx2_napi {scalar_t__ cnic_tag; scalar_t__ cnic_present; TYPE_1__ status_blk; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bnx2_napi*) ;

__attribute__((used)) static inline int
FUNC_1(struct bnx2_napi *VAR_1)
{
 struct status_block *VAR_2 = VAR_1->status_blk.msi;

 if (FUNC_0(VAR_1))
  return 1;






 if ((VAR_2->status_attn_bits & VAR_0) !=
     (VAR_2->status_attn_bits_ack & VAR_0))
  return 1;

 return 0;
}
