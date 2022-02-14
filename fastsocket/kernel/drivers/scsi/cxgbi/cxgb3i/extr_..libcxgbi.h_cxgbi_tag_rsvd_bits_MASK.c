
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cxgbi_tag_format {int rsvd_shift; int rsvd_mask; } ;


 scalar_t__ FUNC_0 (struct cxgbi_tag_format*,int) ;

__attribute__((used)) static inline u32 FUNC_1(struct cxgbi_tag_format *VAR_0,
     u32 VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1))
  return (VAR_1 >> VAR_0->rsvd_shift) & VAR_0->rsvd_mask;

 return 0;
}
