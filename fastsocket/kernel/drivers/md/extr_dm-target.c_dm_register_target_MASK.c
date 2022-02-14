
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_type {int list; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct target_type *VAR_3)
{
 int VAR_4 = 0;

 FUNC_1(&VAR_1);
 if (FUNC_0(VAR_3->name))
  VAR_4 = -VAR_0;
 else
  FUNC_2(&VAR_3->list, &VAR_2);

 FUNC_3(&VAR_1);
 return VAR_4;
}
