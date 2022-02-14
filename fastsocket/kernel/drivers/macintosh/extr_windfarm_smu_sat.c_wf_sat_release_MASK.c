
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_sensor {int dummy; } ;
struct wf_sat_sensor {size_t nr; int refcnt; struct wf_sat_sensor* sat; } ;
struct wf_sat {size_t nr; int refcnt; struct wf_sat* sat; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct wf_sat_sensor*) ;
 int ** VAR_0 ;
 struct wf_sat_sensor* FUNC_2 (struct wf_sensor*) ;

__attribute__((used)) static void FUNC_3(struct wf_sensor *VAR_1)
{
 struct wf_sat_sensor *VAR_2 = FUNC_2(VAR_1);
 struct wf_sat *VAR_3 = VAR_2->sat;

 if (FUNC_0(&VAR_3->refcnt)) {
  if (VAR_3->nr >= 0)
   VAR_0[VAR_3->nr] = ((void*)0);
  FUNC_1(VAR_3);
 }
 FUNC_1(VAR_2);
}
