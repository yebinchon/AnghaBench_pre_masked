
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct file {int dummy; } ;
struct extent_io_tree {int dummy; } ;
struct address_space {int host; } ;
struct TYPE_2__ {struct extent_io_tree io_tree; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct extent_io_tree*,struct address_space*,struct list_head*,unsigned int,int ) ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_1, struct address_space *VAR_2,
  struct list_head *VAR_3, unsigned VAR_4)
{
 struct extent_io_tree *VAR_5;
 VAR_5 = &FUNC_0(VAR_2->host)->io_tree;
 return FUNC_1(VAR_5, VAR_2, VAR_3, VAR_4,
    VAR_0);
}
