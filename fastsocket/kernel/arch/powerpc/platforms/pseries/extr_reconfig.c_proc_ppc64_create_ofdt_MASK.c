
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {scalar_t__ size; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct proc_dir_entry* FUNC_1 (char*,int ,int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{
 struct proc_dir_entry *VAR_3;

 if (!FUNC_0(VAR_2))
  return 0;

 VAR_3 = FUNC_1("ppc64/ofdt", VAR_0, ((void*)0), &VAR_1);
 if (VAR_3)
  VAR_3->size = 0;

 return 0;
}
