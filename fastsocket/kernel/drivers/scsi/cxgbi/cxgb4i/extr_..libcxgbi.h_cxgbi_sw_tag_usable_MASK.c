
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cxgbi_tag_format {int rsvd_bits; } ;



__attribute__((used)) static inline int FUNC_0(struct cxgbi_tag_format *VAR_0,
     u32 VAR_1)
{
 VAR_1 >>= (32 - VAR_0->rsvd_bits);
 return !VAR_1;
}
