
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {struct dentry* d_parent; } ;
struct config_item {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct config_item*) ;
 struct config_item* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct config_item*,struct config_item*,char*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_2, char * VAR_3)
{
 struct config_item *VAR_4, *VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_1(VAR_2->d_parent);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_2);
 if (!VAR_5) {
  FUNC_0(VAR_4);
  return -VAR_0;
 }

 FUNC_3(&VAR_1);
 VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_3);
 FUNC_4(&VAR_1);

 FUNC_0(VAR_4);
 FUNC_0(VAR_5);
 return VAR_6;

}
