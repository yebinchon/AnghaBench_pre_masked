
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cxgbi_tag_format {int rsvd_bits; int rsvd_shift; } ;


 scalar_t__ FUNC_0 (struct cxgbi_tag_format*,int) ;

__attribute__((used)) static inline u32 FUNC_1(struct cxgbi_tag_format *VAR_0,
     u32 VAR_1)
{
 unsigned char VAR_2 = VAR_0->rsvd_bits + VAR_0->rsvd_shift - 1;
 u32 VAR_3, VAR_4;

 if (FUNC_0(VAR_0, VAR_1)) {
  VAR_3 = VAR_1 & ((1 << VAR_0->rsvd_shift) - 1);
  VAR_4 = (VAR_1 >> (VAR_2 + 1)) << VAR_0->rsvd_shift;
 } else {
  u32 VAR_5 = (1 << VAR_2) - 1;
  VAR_1 &= ~(1 << VAR_2);
  VAR_3 = VAR_1 & VAR_5;
  VAR_4 = (VAR_1 >> 1) & ~VAR_5;
 }
 return VAR_3 | VAR_4;
}
