
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bnx2x {int attn_state; TYPE_2__* def_status_blk; } ;
struct TYPE_3__ {int attn_bits_ack; int attn_bits; } ;
struct TYPE_4__ {TYPE_1__ atten_status_block; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int,int,int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct bnx2x*,int) ;
 int FUNC_3 (struct bnx2x*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_1)
{

 u32 VAR_2 = FUNC_4(VAR_1->def_status_blk->atten_status_block.
        attn_bits);
 u32 VAR_3 = FUNC_4(VAR_1->def_status_blk->atten_status_block.
        attn_bits_ack);
 u32 VAR_4 = VAR_1->attn_state;


 u32 VAR_5 = VAR_2 & ~VAR_3 & ~VAR_4;
 u32 VAR_6 = ~VAR_2 & VAR_3 & VAR_4;

 FUNC_1(VAR_0,
    "attn_bits %x  attn_ack %x  asserted %x  deasserted %x\n",
    VAR_2, VAR_3, VAR_5, VAR_6);

 if (~(VAR_2 ^ VAR_3) & (VAR_2 ^ VAR_4))
  FUNC_0("BAD attention state\n");


 if (VAR_5)
  FUNC_2(VAR_1, VAR_5);

 if (VAR_6)
  FUNC_3(VAR_1, VAR_6);
}
