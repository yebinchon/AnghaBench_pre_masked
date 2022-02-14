
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct proc_dir_entry* FUNC_0 (char*,int ,struct proc_dir_entry* const,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct proc_dir_entry* FUNC_1 (char*,int ,struct proc_dir_entry* const,int *) ;
 struct proc_dir_entry* FUNC_2 (char*,int *) ;

void FUNC_3(void)
{

 struct proc_dir_entry * const VAR_4 = FUNC_2("excite", ((void*)0));
 if (VAR_4) {
  struct proc_dir_entry * VAR_5;

  VAR_5 = FUNC_1("unit_id", VAR_1, VAR_4,
    &VAR_3);
  if (VAR_5) VAR_5->size = 6;

  VAR_5 = FUNC_0("bootrom", VAR_1, VAR_4,
        VAR_2, ((void*)0));
  if (VAR_5) VAR_5->size = VAR_0;
 }
}
