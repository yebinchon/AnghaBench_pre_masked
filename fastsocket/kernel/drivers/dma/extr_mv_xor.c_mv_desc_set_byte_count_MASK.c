
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv_xor_desc_slot {struct mv_xor_desc* hw_desc; } ;
struct mv_xor_desc {int byte_count; } ;



__attribute__((used)) static void FUNC_0(struct mv_xor_desc_slot *VAR_0,
       u32 VAR_1)
{
 struct mv_xor_desc *VAR_2 = VAR_0->hw_desc;
 VAR_2->byte_count = VAR_1;
}
