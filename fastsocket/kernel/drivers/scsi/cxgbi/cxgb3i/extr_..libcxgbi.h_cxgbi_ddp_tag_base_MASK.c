
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cxgbi_tag_format {int rsvd_shift; int rsvd_bits; } ;



__attribute__((used)) static inline u32 FUNC_0(struct cxgbi_tag_format *VAR_0,
     u32 VAR_1)
{
 u32 VAR_2 = (1 << VAR_0->rsvd_shift) - 1;

 if (VAR_1 && (VAR_1 & ~VAR_2)) {
  u32 VAR_3 = VAR_1 & VAR_2;
  u32 VAR_4 = VAR_1 >> VAR_0->rsvd_shift;

  VAR_4 <<= VAR_0->rsvd_bits + VAR_0->rsvd_shift;

  return VAR_4 | VAR_3;
 }

 return VAR_1;
}
