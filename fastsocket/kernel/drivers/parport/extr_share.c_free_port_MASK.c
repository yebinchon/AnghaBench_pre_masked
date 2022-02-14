
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parport {struct parport* name; TYPE_1__* probe_info; int full_list; } ;
struct TYPE_2__ {struct parport* description; struct parport* cmdset; struct parport* model; struct parport* mfr; struct parport* class_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct parport*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4 (struct parport *VAR_1)
{
 int VAR_2;
 FUNC_2(&VAR_0);
 FUNC_1(&VAR_1->full_list);
 FUNC_3(&VAR_0);
 for (VAR_2 = 0; VAR_2 < 5; VAR_2++) {
  FUNC_0(VAR_1->probe_info[VAR_2].class_name);
  FUNC_0(VAR_1->probe_info[VAR_2].mfr);
  FUNC_0(VAR_1->probe_info[VAR_2].model);
  FUNC_0(VAR_1->probe_info[VAR_2].cmdset);
  FUNC_0(VAR_1->probe_info[VAR_2].description);
 }

 FUNC_0(VAR_1->name);
 FUNC_0(VAR_1);
}
