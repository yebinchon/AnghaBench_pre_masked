
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cxgbi_tag_format {int rsvd_bits; int rsvd_shift; } ;



__attribute__((used)) static inline int FUNC_0(struct cxgbi_tag_format *VAR_0, u32 VAR_1)
{
 return !(VAR_1 & (1 << (VAR_0->rsvd_bits + VAR_0->rsvd_shift - 1)));
}
