
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct extent_map_tree {int dummy; } ;
struct extent_io_tree {int dummy; } ;
typedef int gfp_t ;
struct TYPE_4__ {struct extent_map_tree extent_tree; struct extent_io_tree io_tree; } ;
struct TYPE_3__ {int host; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int ) ;
 int FUNC_4 (struct extent_map_tree*,struct extent_io_tree*,struct page*,int ) ;

__attribute__((used)) static int FUNC_5(struct page *VAR_0, gfp_t VAR_1)
{
 struct extent_io_tree *VAR_2;
 struct extent_map_tree *VAR_3;
 int VAR_4;

 VAR_2 = &FUNC_0(VAR_0->mapping->host)->io_tree;
 VAR_3 = &FUNC_0(VAR_0->mapping->host)->extent_tree;
 VAR_4 = FUNC_4(VAR_3, VAR_2, VAR_0, VAR_1);
 if (VAR_4 == 1) {
  FUNC_1(VAR_0);
  FUNC_3(VAR_0, 0);
  FUNC_2(VAR_0);
 }
 return VAR_4;
}
