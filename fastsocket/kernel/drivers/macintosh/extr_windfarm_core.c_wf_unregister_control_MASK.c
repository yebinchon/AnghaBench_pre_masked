
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_control {int ref; int name; int link; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_5(struct wf_control *VAR_2)
{
 FUNC_3(&VAR_1);
 FUNC_2(&VAR_2->link);
 FUNC_4(&VAR_1);

 FUNC_0("wf: Unregistered control %s\n", VAR_2->name);

 FUNC_1(&VAR_2->ref, VAR_0);
}
