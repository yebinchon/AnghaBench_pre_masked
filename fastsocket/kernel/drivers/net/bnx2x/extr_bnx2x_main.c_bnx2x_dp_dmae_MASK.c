
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dmae_command {int opcode; int src_addr_lo; int dst_addr_lo; int comp_val; int comp_addr_lo; int comp_addr_hi; int len; int src_addr_hi; int dst_addr_hi; } ;
struct bnx2x {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int,int,...) ;

__attribute__((used)) static void FUNC_1(struct bnx2x *VAR_3,
     struct dmae_command *VAR_4, int VAR_5)
{
 u32 VAR_6 = VAR_4->opcode & VAR_2;
 int VAR_7;

 switch (VAR_4->opcode & VAR_1) {
 case 128:
  if (VAR_6 == VAR_0)
   FUNC_0(VAR_5, "DMAE: opcode 0x%08x\n"
      "src [%x:%08x], len [%d*4], dst [%x:%08x]\n"
      "comp_addr [%x:%08x], comp_val 0x%08x\n",
      VAR_4->opcode, VAR_4->src_addr_hi, VAR_4->src_addr_lo,
      VAR_4->len, VAR_4->dst_addr_hi, VAR_4->dst_addr_lo,
      VAR_4->comp_addr_hi, VAR_4->comp_addr_lo,
      VAR_4->comp_val);
  else
   FUNC_0(VAR_5, "DMAE: opcode 0x%08x\n"
      "src [%08x], len [%d*4], dst [%x:%08x]\n"
      "comp_addr [%x:%08x], comp_val 0x%08x\n",
      VAR_4->opcode, VAR_4->src_addr_lo >> 2,
      VAR_4->len, VAR_4->dst_addr_hi, VAR_4->dst_addr_lo,
      VAR_4->comp_addr_hi, VAR_4->comp_addr_lo,
      VAR_4->comp_val);
  break;
 case 129:
  if (VAR_6 == VAR_0)
   FUNC_0(VAR_5, "DMAE: opcode 0x%08x\n"
      "src [%x:%08x], len [%d*4], dst_addr [%08x]\n"
      "comp_addr [%x:%08x], comp_val 0x%08x\n",
      VAR_4->opcode, VAR_4->src_addr_hi, VAR_4->src_addr_lo,
      VAR_4->len, VAR_4->dst_addr_lo >> 2,
      VAR_4->comp_addr_hi, VAR_4->comp_addr_lo,
      VAR_4->comp_val);
  else
   FUNC_0(VAR_5, "DMAE: opcode 0x%08x\n"
      "src [%08x], len [%d*4], dst [%08x]\n"
      "comp_addr [%x:%08x], comp_val 0x%08x\n",
      VAR_4->opcode, VAR_4->src_addr_lo >> 2,
      VAR_4->len, VAR_4->dst_addr_lo >> 2,
      VAR_4->comp_addr_hi, VAR_4->comp_addr_lo,
      VAR_4->comp_val);
  break;
 default:
  if (VAR_6 == VAR_0)
   FUNC_0(VAR_5, "DMAE: opcode 0x%08x\n"
      "src_addr [%x:%08x]  len [%d * 4]  dst_addr [none]\n"
      "comp_addr [%x:%08x]  comp_val 0x%08x\n",
      VAR_4->opcode, VAR_4->src_addr_hi, VAR_4->src_addr_lo,
      VAR_4->len, VAR_4->comp_addr_hi, VAR_4->comp_addr_lo,
      VAR_4->comp_val);
  else
   FUNC_0(VAR_5, "DMAE: opcode 0x%08x\n"
      "src_addr [%08x]  len [%d * 4]  dst_addr [none]\n"
      "comp_addr [%x:%08x]  comp_val 0x%08x\n",
      VAR_4->opcode, VAR_4->src_addr_lo >> 2,
      VAR_4->len, VAR_4->comp_addr_hi, VAR_4->comp_addr_lo,
      VAR_4->comp_val);
  break;
 }

 for (VAR_7 = 0; VAR_7 < (sizeof(struct dmae_command)/4); VAR_7++)
  FUNC_0(VAR_5, "DMAE RAW [%02d]: 0x%08x\n",
     VAR_7, *(((u32 *)VAR_4) + VAR_7));
}
