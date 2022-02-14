
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {struct dm_thin_new_mapping* next_mapping; } ;
struct dm_thin_new_mapping {int * bio; int list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dm_thin_new_mapping*,int ,int) ;

__attribute__((used)) static struct dm_thin_new_mapping *FUNC_3(struct pool *VAR_0)
{
 struct dm_thin_new_mapping *VAR_1 = VAR_0->next_mapping;

 FUNC_0(!VAR_0->next_mapping);

 FUNC_2(VAR_1, 0, sizeof(struct dm_thin_new_mapping));
 FUNC_1(&VAR_1->list);
 VAR_1->bio = ((void*)0);

 VAR_0->next_mapping = ((void*)0);

 return VAR_1;
}
