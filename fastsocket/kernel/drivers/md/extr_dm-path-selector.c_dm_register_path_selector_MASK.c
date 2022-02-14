
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps_internal {int list; } ;
struct path_selector_type {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct ps_internal* FUNC_1 (struct path_selector_type*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ps_internal*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct path_selector_type *VAR_4)
{
 int VAR_5 = 0;
 struct ps_internal *VAR_6 = FUNC_1(VAR_4);

 if (!VAR_6)
  return -VAR_1;

 FUNC_2(&VAR_3);

 if (FUNC_0(VAR_4->name)) {
  FUNC_3(VAR_6);
  VAR_5 = -VAR_0;
 } else
  FUNC_4(&VAR_6->list, &VAR_2);

 FUNC_5(&VAR_3);

 return VAR_5;
}
