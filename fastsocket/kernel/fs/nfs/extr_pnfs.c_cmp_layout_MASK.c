
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_range {int offset; int length; scalar_t__ iomode; } ;
typedef int s64 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static s64
FUNC_0(struct pnfs_layout_range *VAR_1,
    struct pnfs_layout_range *VAR_2)
{
 s64 VAR_3;


 VAR_3 = VAR_1->offset - VAR_2->offset;
 if (VAR_3)
  return VAR_3;


 VAR_3 = VAR_2->length - VAR_1->length;
 if (VAR_3)
  return VAR_3;


 return (int)(VAR_1->iomode == VAR_0) - (int)(VAR_2->iomode == VAR_0);
}
