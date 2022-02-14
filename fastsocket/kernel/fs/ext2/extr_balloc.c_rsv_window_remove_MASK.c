
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext2_reserve_window_node {int rsv_node; scalar_t__ rsv_alloc_hit; void* rsv_end; void* rsv_start; } ;
struct TYPE_2__ {int s_rsv_window_root; } ;


 void* VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct super_block *VAR_1,
         struct ext2_reserve_window_node *VAR_2)
{
 VAR_2->rsv_start = VAR_0;
 VAR_2->rsv_end = VAR_0;
 VAR_2->rsv_alloc_hit = 0;
 FUNC_1(&VAR_2->rsv_node, &FUNC_0(VAR_1)->s_rsv_window_root);
}
