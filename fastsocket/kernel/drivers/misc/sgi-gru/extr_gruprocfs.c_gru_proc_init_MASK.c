
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_entry {scalar_t__ name; } ;


 scalar_t__ FUNC_0 (struct proc_entry*) ;
 int FUNC_1 () ;
 struct proc_entry* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int *) ;

int FUNC_3(void)
{
 struct proc_entry *VAR_2;

 VAR_1 = FUNC_2("sgi_uv/gru", ((void*)0));

 for (VAR_2 = VAR_0; VAR_2->name; VAR_2++)
  if (FUNC_0(VAR_2))
   goto err;
 return 0;

err:
 FUNC_1();
 return -1;
}
