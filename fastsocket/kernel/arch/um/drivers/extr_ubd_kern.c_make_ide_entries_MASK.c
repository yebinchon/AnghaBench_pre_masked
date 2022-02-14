
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int * write_proc; int read_proc; int * data; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 struct proc_dir_entry* FUNC_0 (char*,int,struct proc_dir_entry*) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 struct proc_dir_entry* FUNC_2 (char const*,int ) ;
 int FUNC_3 (char const*,int *,char*) ;
 int FUNC_4 (char*,int,char*,char const*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_5)
{
 struct proc_dir_entry *VAR_6, *VAR_7;
 char VAR_8[64];

 if(VAR_4 == ((void*)0)) FUNC_1();

 VAR_6 = FUNC_2(VAR_5, VAR_2);
 if(!VAR_6) return;

 VAR_7 = FUNC_0("media", VAR_0|VAR_1, VAR_6);
 if(!VAR_7) return;
 VAR_7->data = ((void*)0);
 VAR_7->read_proc = VAR_3;
 VAR_7->write_proc = ((void*)0);
 FUNC_4(VAR_8, sizeof(VAR_8), "ide0/%s", VAR_5);
 FUNC_3(VAR_5, VAR_4, VAR_8);
}
