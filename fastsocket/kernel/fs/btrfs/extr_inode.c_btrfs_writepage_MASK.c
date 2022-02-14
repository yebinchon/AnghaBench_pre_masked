
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {TYPE_1__* mapping; } ;
struct extent_io_tree {int dummy; } ;
struct TYPE_6__ {struct extent_io_tree io_tree; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int host; } ;


 TYPE_3__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (struct extent_io_tree*,struct page*,int ,struct writeback_control*) ;
 int FUNC_2 (struct writeback_control*,struct page*) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct page *VAR_3, struct writeback_control *VAR_4)
{
 struct extent_io_tree *VAR_5;


 if (VAR_2->flags & VAR_0) {
  FUNC_2(VAR_4, VAR_3);
  FUNC_3(VAR_3);
  return 0;
 }
 VAR_5 = &FUNC_0(VAR_3->mapping->host)->io_tree;
 return FUNC_1(VAR_5, VAR_3, VAR_1, VAR_4);
}
