
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct extent_io_tree {int dummy; } ;
struct address_space {int host; } ;
struct TYPE_2__ {struct extent_io_tree io_tree; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct extent_io_tree*,struct address_space*,int ,struct writeback_control*) ;

int FUNC_2(struct address_space *VAR_1,
       struct writeback_control *VAR_2)
{
 struct extent_io_tree *VAR_3;

 VAR_3 = &FUNC_0(VAR_1->host)->io_tree;
 return FUNC_1(VAR_3, VAR_1, VAR_0, VAR_2);
}
