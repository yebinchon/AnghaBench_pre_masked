
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int max_entries; int value_size; int nr_entries; } ;
struct btree_node {TYPE_1__ header; } ;
typedef int __le64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct btree_node*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct btree_node*,int) ;

__attribute__((used)) static void FUNC_5(struct btree_node *VAR_0, struct btree_node *VAR_1, int VAR_2)
{
 uint32_t VAR_3 = FUNC_2(VAR_0->header.nr_entries);
 uint32_t VAR_4 = FUNC_2(VAR_0->header.value_size);
 FUNC_0(VAR_4 != FUNC_2(VAR_1->header.value_size));

 if (VAR_2 < 0) {
  VAR_2 = -VAR_2;
  FUNC_0(VAR_3 + VAR_2 > FUNC_2(VAR_0->header.max_entries));
  FUNC_3(FUNC_1(VAR_0, VAR_3),
         FUNC_1(VAR_1, 0),
         VAR_2 * sizeof(__le64));
  FUNC_3(FUNC_4(VAR_0, VAR_3),
         FUNC_4(VAR_1, 0),
         VAR_2 * VAR_4);
 } else {
  FUNC_0(VAR_2 > FUNC_2(VAR_1->header.max_entries));
  FUNC_3(FUNC_1(VAR_1, 0),
         FUNC_1(VAR_0, VAR_3 - VAR_2),
         VAR_2 * sizeof(__le64));
  FUNC_3(FUNC_4(VAR_1, 0),
         FUNC_4(VAR_0, VAR_3 - VAR_2),
         VAR_2 * VAR_4);
 }
}
