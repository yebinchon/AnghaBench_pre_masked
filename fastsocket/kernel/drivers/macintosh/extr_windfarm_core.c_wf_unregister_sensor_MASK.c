
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_sensor {int name; int link; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (struct wf_sensor*) ;

void FUNC_5(struct wf_sensor *VAR_1)
{
 FUNC_2(&VAR_0);
 FUNC_1(&VAR_1->link);
 FUNC_3(&VAR_0);

 FUNC_0("wf: Unregistered sensor %s\n", VAR_1->name);

 FUNC_4(VAR_1);
}
