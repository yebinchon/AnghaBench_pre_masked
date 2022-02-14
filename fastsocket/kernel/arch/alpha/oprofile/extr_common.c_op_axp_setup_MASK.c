
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {unsigned long num_counters; int (* cpu_setup ) (TYPE_1__*) ;int (* reg_setup ) (TYPE_1__*,TYPE_3__*,int *) ;} ;
struct TYPE_10__ {scalar_t__ enabled; } ;
struct TYPE_9__ {unsigned long enable; } ;


 TYPE_3__* VAR_0 ;
 TYPE_7__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int (*) (TYPE_1__*),TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_3(void)
{
 unsigned long VAR_7, VAR_8;


 VAR_5 = VAR_3;
 VAR_3 = VAR_2;


 for (VAR_7 = VAR_8 = 0; VAR_7 < VAR_1->num_counters; ++VAR_7)
  if (VAR_0[VAR_7].enabled)
   VAR_8 |= 1 << VAR_7;
 VAR_4.enable = VAR_8;


 VAR_1->reg_setup(&VAR_4, VAR_0, &VAR_6);


 (void)FUNC_0(VAR_1->cpu_setup, &VAR_4, 1);
 VAR_1->cpu_setup(&VAR_4);
 return 0;
}
