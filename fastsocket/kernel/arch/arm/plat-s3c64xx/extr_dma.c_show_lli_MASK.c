
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl080s_lli {int control1; int control0; int next_lli; int dst_addr; int src_addr; } ;


 int FUNC_0 (char*,struct pl080s_lli*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct pl080s_lli *VAR_0)
{
 FUNC_0("LLI[%p] %08x->%08x, NL %08x C %08x,%08x\n",
   VAR_0, VAR_0->src_addr, VAR_0->dst_addr, VAR_0->next_lli,
   VAR_0->control0, VAR_0->control1);
}
