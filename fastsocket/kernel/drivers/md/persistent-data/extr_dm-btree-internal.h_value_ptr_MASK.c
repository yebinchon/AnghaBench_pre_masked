
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int value_size; } ;
struct btree_node {TYPE_1__ header; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (struct btree_node*) ;

__attribute__((used)) static inline void *FUNC_2(struct btree_node *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2 = FUNC_0(VAR_0->header.value_size);
 return FUNC_1(VAR_0) + (VAR_2 * VAR_1);
}
