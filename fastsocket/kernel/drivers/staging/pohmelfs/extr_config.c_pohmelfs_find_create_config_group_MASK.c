
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pohmelfs_config_group {unsigned int idx; int group_entry; scalar_t__ num_entry; int config_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct pohmelfs_config_group* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 struct pohmelfs_config_group* FUNC_3 (unsigned int) ;

__attribute__((used)) static struct pohmelfs_config_group *FUNC_4(unsigned int VAR_2)
{
 struct pohmelfs_config_group *VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(sizeof(struct pohmelfs_config_group), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(&VAR_3->config_list);
 VAR_3->idx = VAR_2;
 VAR_3->num_entry = 0;

 FUNC_2(&VAR_3->group_entry, &VAR_1);

 return VAR_3;
}
