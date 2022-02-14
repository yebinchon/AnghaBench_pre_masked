
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_entries; } ;
struct btree_node {void* keys; TYPE_1__ header; } ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static inline void *FUNC_1(struct btree_node *VAR_0)
{
 return &VAR_0->keys[FUNC_0(VAR_0->header.max_entries)];
}
