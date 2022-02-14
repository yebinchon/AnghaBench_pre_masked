
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int spl_t ;
typedef TYPE_1__* processor_t ;
typedef TYPE_2__* processor_set_t ;
struct TYPE_10__ {int online_processor_count; } ;
struct TYPE_9__ {int cpu_id; TYPE_2__* processor_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;

void
FUNC_11(
 processor_t VAR_3)
{
 processor_set_t VAR_4;
 spl_t VAR_5;

 VAR_5 = FUNC_8();
 FUNC_3(VAR_3);
 VAR_4 = VAR_3->processor_set;
 FUNC_5(VAR_4);
 ++VAR_4->online_processor_count;
 FUNC_7(VAR_4, VAR_3, VAR_0);
 (void)FUNC_2(&VAR_2, 1);
 FUNC_0();
 FUNC_6(VAR_4);
 FUNC_4();
 FUNC_9(VAR_5);





}
