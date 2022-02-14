
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_bus {int bin_inited; int text_inited; int r_list; int lock; int ref; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mon_bus*,int *) ;
 struct mon_bus VAR_0 ;
 int FUNC_3 (struct mon_bus*,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct mon_bus *VAR_1 = &VAR_0;

 FUNC_1(&VAR_1->ref);
 FUNC_4(&VAR_1->lock);
 FUNC_0(&VAR_1->r_list);

 VAR_1->text_inited = FUNC_3(VAR_1, ((void*)0));
 VAR_1->bin_inited = FUNC_2(VAR_1, ((void*)0));
}
