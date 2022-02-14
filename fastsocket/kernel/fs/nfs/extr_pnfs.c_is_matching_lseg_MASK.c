
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_range {scalar_t__ iomode; int length; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pnfs_layout_range*,struct pnfs_layout_range*) ;
 int FUNC_1 (struct pnfs_layout_range*,struct pnfs_layout_range*) ;

__attribute__((used)) static int
FUNC_2(struct pnfs_layout_range *VAR_1,
   struct pnfs_layout_range *VAR_2)
{
 struct pnfs_layout_range VAR_3;

 if ((VAR_2->iomode == VAR_0 &&
      VAR_1->iomode != VAR_0) ||
     !FUNC_1(VAR_1, VAR_2))
  return 0;


 VAR_3 = *VAR_2;
 VAR_3 = 1;
 return FUNC_0(VAR_1, &VAR_3);
}
