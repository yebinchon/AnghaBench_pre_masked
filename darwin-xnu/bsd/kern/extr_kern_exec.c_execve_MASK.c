
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct execve_args {int envp; int argp; int fname; } ;
struct __mac_execve_args {int mac_p; int envp; int argp; int fname; } ;
typedef int proc_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct __mac_execve_args*,int *) ;
 int FUNC_1 (int ,int ) ;

int
FUNC_2(proc_t VAR_3, struct execve_args *VAR_4, int32_t *VAR_5)
{
 struct __mac_execve_args VAR_6;
 int VAR_7;

 FUNC_1(VAR_2, VAR_0);

 VAR_6.fname = VAR_4->fname;
 VAR_6.argp = VAR_4->argp;
 VAR_6.envp = VAR_4->envp;
 VAR_6.mac_p = VAR_1;
 VAR_7 = FUNC_0(VAR_3, &VAR_6, VAR_5);

 return(VAR_7);
}
