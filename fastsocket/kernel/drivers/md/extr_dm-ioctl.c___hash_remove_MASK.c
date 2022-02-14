
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_cell {int md; scalar_t__ new_map; int name_list; int uuid_list; } ;
struct dm_table {int dummy; } ;


 struct dm_table* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct dm_table*) ;
 int FUNC_5 (struct dm_table*) ;
 int FUNC_6 (struct hash_cell*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct hash_cell *VAR_1)
{
 struct dm_table *VAR_2;


 FUNC_7(&VAR_1->uuid_list);
 FUNC_7(&VAR_1->name_list);
 FUNC_8(&VAR_0);
 FUNC_2(VAR_1->md, ((void*)0));
 FUNC_9(&VAR_0);

 VAR_2 = FUNC_0(VAR_1->md);
 if (VAR_2) {
  FUNC_4(VAR_2);
  FUNC_5(VAR_2);
 }

 if (VAR_1->new_map)
  FUNC_3(VAR_1->new_map);
 FUNC_1(VAR_1->md);
 FUNC_6(VAR_1);
}
