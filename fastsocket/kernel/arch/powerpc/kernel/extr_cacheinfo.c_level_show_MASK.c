
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct cache_index_dir {struct cache* cache; } ;
struct cache {int level; } ;
typedef int ssize_t ;


 struct cache_index_dir* FUNC_0 (struct kobject*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_0, struct kobj_attribute *VAR_1, char *VAR_2)
{
 struct cache_index_dir *VAR_3;
 struct cache *VAR_4;

 VAR_3 = FUNC_0(VAR_0);
 VAR_4 = VAR_3->cache;

 return FUNC_1(VAR_2, "%d\n", VAR_4->level);
}
