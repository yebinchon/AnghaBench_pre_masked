
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int nr_entries; } ;
struct btree_node {int * keys; TYPE_1__ header; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct btree_node*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct btree_node *VAR_1, uint64_t VAR_2, unsigned *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_1, VAR_2);

 if ((VAR_4 < 0) ||
     (VAR_4 >= FUNC_0(VAR_1->header.nr_entries)) ||
     (FUNC_1(VAR_1->keys[VAR_4]) != VAR_2))
  return -VAR_0;

 *VAR_3 = VAR_4;

 return 0;
}
