
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_2__ {int nr_entries; int value_size; } ;
struct btree_node {TYPE_1__ header; } ;
typedef int __le64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct btree_node*,unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (struct btree_node*,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct btree_node *VAR_0, unsigned VAR_1)
{
 unsigned VAR_2 = FUNC_3(VAR_0->header.nr_entries);
 unsigned VAR_3 = VAR_2 - (VAR_1 + 1);
 uint32_t VAR_4 = FUNC_3(VAR_0->header.value_size);
 FUNC_0(VAR_1 >= VAR_2);

 if (VAR_3) {
  FUNC_4(FUNC_2(VAR_0, VAR_1),
   FUNC_2(VAR_0, VAR_1 + 1),
   VAR_3 * sizeof(__le64));

  FUNC_4(FUNC_5(VAR_0, VAR_1),
   FUNC_5(VAR_0, VAR_1 + 1),
   VAR_3 * VAR_4);
 }

 VAR_0->header.nr_entries = FUNC_1(VAR_2 - 1);
}
