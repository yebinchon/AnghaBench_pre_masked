
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dm_btree_info {int dummy; } ;
struct child {int index; } ;
struct TYPE_2__ {int max_entries; } ;
struct btree_node {int * keys; TYPE_1__ header; } ;


 int FUNC_0 (int) ;
 int * FUNC_1 (struct btree_node*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct btree_node*,struct btree_node*,int) ;

__attribute__((used)) static void FUNC_4(struct dm_btree_info *VAR_0, struct btree_node *VAR_1,
     struct child *VAR_2, struct child *VAR_3, struct child *VAR_4,
     struct btree_node *VAR_5, struct btree_node *VAR_6, struct btree_node *VAR_7,
     uint32_t VAR_8, uint32_t VAR_9, uint32_t VAR_10)
{
 int VAR_11;
 uint32_t VAR_12 = FUNC_2(VAR_5->header.max_entries);
 unsigned VAR_13 = (VAR_8 + VAR_9 + VAR_10) / 3;
 FUNC_0(VAR_13 > VAR_12);

 if (VAR_8 < VAR_10) {
  VAR_11 = VAR_8 - VAR_13;

  if (VAR_11 < 0 && VAR_9 < -VAR_11) {

   FUNC_3(VAR_5, VAR_6, VAR_9);
   VAR_11 = VAR_9 - VAR_13;
   FUNC_3(VAR_5, VAR_7, VAR_11);
   VAR_10 += VAR_11;
  } else
   FUNC_3(VAR_5, VAR_6, VAR_11);

  FUNC_3(VAR_6, VAR_7, VAR_13 - VAR_10);

 } else {
  VAR_11 = VAR_13 - VAR_10;
  if (VAR_11 > 0 && VAR_9 < VAR_11) {

   FUNC_3(VAR_6, VAR_7, VAR_9);
   VAR_11 = VAR_13 - VAR_9;
   FUNC_3(VAR_5, VAR_7, VAR_11);
   VAR_8 -= VAR_11;
  } else
   FUNC_3(VAR_6, VAR_7, VAR_11);

  FUNC_3(VAR_5, VAR_6, VAR_8 - VAR_13);
 }

 *FUNC_1(VAR_1, VAR_3->index) = VAR_6->keys[0];
 *FUNC_1(VAR_1, VAR_4->index) = VAR_7->keys[0];
}
