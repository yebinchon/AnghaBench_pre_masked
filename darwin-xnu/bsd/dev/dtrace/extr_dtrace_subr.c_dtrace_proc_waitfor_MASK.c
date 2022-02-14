
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int p_name_length; int p_pid; struct TYPE_9__* p_name; } ;
typedef TYPE_1__ dtrace_procdesc_t ;
struct TYPE_10__ {TYPE_1__* pdesc; } ;
typedef TYPE_2__ dtrace_proc_awaited_entry_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int *,int ,char*,int *) ;
 int FUNC_7 (TYPE_1__*,int) ;

int
FUNC_8(dtrace_procdesc_t* VAR_6) {
 dtrace_proc_awaited_entry_t VAR_7;
 int VAR_8;

 FUNC_0(VAR_6);
 FUNC_0(VAR_6->p_name);





 VAR_6->p_name_length = FUNC_7(VAR_6->p_name, sizeof(VAR_6->p_name));
 if (VAR_6->p_name_length >= (int) sizeof(VAR_6->p_name))
  return -1;

 FUNC_4(&VAR_4);


 VAR_6->p_pid = -1;
 VAR_7.pdesc = VAR_6;
 FUNC_2(&VAR_1, &VAR_7, VAR_5);
 VAR_3 = &VAR_2;


 VAR_8 = FUNC_6(&VAR_7, &VAR_4, VAR_0, "dtrace_proc_waitfor", ((void*)0));


 FUNC_3(&VAR_7, VAR_5);
 if (FUNC_1(&VAR_1))
  VAR_3 = ((void*)0);

 FUNC_5(&VAR_4);

 return VAR_8;
}
