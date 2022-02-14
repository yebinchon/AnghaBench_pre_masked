
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item {int dummy; } ;
struct dlm_comm {int nodeid; struct config_item item; scalar_t__ addr_count; scalar_t__ local; } ;
struct config_group {int dummy; } ;


 int VAR_0 ;
 struct config_item* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct config_item*,char const*,int *) ;
 struct dlm_comm* FUNC_2 (int,int ) ;

__attribute__((used)) static struct config_item *FUNC_3(struct config_group *VAR_3, const char *VAR_4)
{
 struct dlm_comm *VAR_5;

 VAR_5 = FUNC_2(sizeof(struct dlm_comm), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_5->item, VAR_4, &VAR_2);
 VAR_5->nodeid = -1;
 VAR_5->local = 0;
 VAR_5->addr_count = 0;
 return &VAR_5->item;
}
