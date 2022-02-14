
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,char*,int *,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;

int
FUNC_3(char * VAR_3)
{
 int VAR_4;
 vfs_context_t VAR_5 = FUNC_2();
 char VAR_6[] = "devfs";

 VAR_4 = FUNC_0(VAR_6, VAR_2, VAR_2, VAR_3, ((void*)0), 0, VAR_1, VAR_0, VAR_5);
 if (VAR_4) {
  FUNC_1("devfs_kernel_mount: kernel_mount failed: %d\n", VAR_4);
  return (VAR_4);
 }

 return (0);
}
