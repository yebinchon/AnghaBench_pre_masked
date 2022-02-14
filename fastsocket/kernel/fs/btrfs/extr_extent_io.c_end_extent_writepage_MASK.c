
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct page {TYPE_1__* mapping; } ;
struct extent_io_tree {TYPE_2__* ops; } ;
struct TYPE_6__ {struct extent_io_tree io_tree; } ;
struct TYPE_5__ {int (* writepage_end_io_hook ) (struct page*,int ,int ,int *,int) ;} ;
struct TYPE_4__ {int host; } ;


 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int ,int ,int *,int) ;

int FUNC_4(struct page *VAR_0, int VAR_1, u64 VAR_2, u64 VAR_3)
{
 int VAR_4 = (VAR_1 == 0);
 struct extent_io_tree *VAR_5;
 int VAR_6;

 VAR_5 = &FUNC_0(VAR_0->mapping->host)->io_tree;

 if (VAR_5->ops && VAR_5->ops->writepage_end_io_hook) {
  VAR_6 = VAR_5->ops->writepage_end_io_hook(VAR_0, VAR_2,
            VAR_3, ((void*)0), VAR_4);
  if (VAR_6)
   VAR_4 = 0;
 }

 if (!VAR_4) {
  FUNC_1(VAR_0);
  FUNC_2(VAR_0);
 }
 return 0;
}
