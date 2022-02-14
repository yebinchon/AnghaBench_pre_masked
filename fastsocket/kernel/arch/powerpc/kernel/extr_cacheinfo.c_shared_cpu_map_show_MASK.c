
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct cache_index_dir {struct cache* cache; } ;
struct cache {int shared_cpu_map; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int *) ;
 struct cache_index_dir* FUNC_1 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_1, struct kobj_attribute *VAR_2, char *VAR_3)
{
 struct cache_index_dir *VAR_4;
 struct cache *VAR_5;
 int VAR_6;
 int VAR_7 = 0;

 VAR_4 = FUNC_1(VAR_1);
 VAR_5 = VAR_4->cache;
 VAR_6 = VAR_0 - 2;

 if (VAR_6 > 1) {
  VAR_7 = FUNC_0(VAR_3, VAR_6, &VAR_5->shared_cpu_map);
  VAR_3[VAR_7++] = '\n';
  VAR_3[VAR_7] = '\0';
 }
 return VAR_7;
}
