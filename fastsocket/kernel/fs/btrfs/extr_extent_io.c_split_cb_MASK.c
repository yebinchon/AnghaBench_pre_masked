
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct extent_state {int dummy; } ;
struct extent_io_tree {TYPE_2__* mapping; TYPE_1__* ops; } ;
struct TYPE_4__ {int host; } ;
struct TYPE_3__ {int (* split_extent_hook ) (int ,struct extent_state*,int ) ;} ;


 int FUNC_0 (int ,struct extent_state*,int ) ;

__attribute__((used)) static void FUNC_1(struct extent_io_tree *VAR_0, struct extent_state *VAR_1,
       u64 VAR_2)
{
 if (VAR_0->ops && VAR_0->ops->split_extent_hook)
  VAR_0->ops->split_extent_hook(VAR_0->mapping->host, VAR_1, VAR_2);
}
