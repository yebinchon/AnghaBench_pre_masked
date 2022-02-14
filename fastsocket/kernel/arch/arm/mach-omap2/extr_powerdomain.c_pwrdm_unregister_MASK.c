
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerdomain {int name; int node; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct powerdomain *VAR_2)
{
 unsigned long VAR_3;

 if (!VAR_2)
  return -VAR_0;

 FUNC_2(&VAR_1, VAR_3);
 FUNC_0(&VAR_2->node);
 FUNC_3(&VAR_1, VAR_3);

 FUNC_1("powerdomain: unregistered %s\n", VAR_2->name);

 return 0;
}
