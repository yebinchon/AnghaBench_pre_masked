
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pnfs_layout_range {scalar_t__ offset; int length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static inline int
FUNC_1(struct pnfs_layout_range *VAR_1,
      struct pnfs_layout_range *VAR_2)
{
 u64 VAR_3 = VAR_1->offset;
 u64 VAR_4 = FUNC_0(VAR_3, VAR_1->length);
 u64 VAR_5 = VAR_2->offset;
 u64 VAR_6 = FUNC_0(VAR_5, VAR_2->length);

 return (VAR_4 == VAR_0 || VAR_4 > VAR_5) &&
        (VAR_6 == VAR_0 || VAR_6 > VAR_3);
}
