
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int posix_spawnattr_t ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char* const,int *,int *,char* const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,short,int,int,int) ;

__attribute__((used)) static pid_t
FUNC_5(
 char * const VAR_3,
 char * const VAR_4,
 short VAR_5,
 int VAR_6,
 int VAR_7,
 int VAR_8)
{
 posix_spawnattr_t VAR_9;
 int VAR_10;
 pid_t VAR_11;
 char * const VAR_12[] = { VAR_3, "-n", "child_process", "--", VAR_4, ((void*)0) };

 VAR_10 = FUNC_2(&VAR_9);
 VAR_1; FUNC_0(VAR_10, "  posix_spawnattr_init() failed");

 VAR_10 = FUNC_3(&VAR_9, VAR_0);
 VAR_1; FUNC_0(VAR_10, "  posix_spawnattr_setflags() failed");

 VAR_10 = FUNC_4(&VAR_9, VAR_5, VAR_6, VAR_7, VAR_8);
 VAR_1; FUNC_0(VAR_10, "  posix_spawnattr_setjetsam_ext() failed");

 VAR_10 = FUNC_1(&VAR_11, VAR_3, ((void*)0), &VAR_9, VAR_12, VAR_2);
 VAR_1; FUNC_0(VAR_10, "  posix_spawn() failed");

 return VAR_11;
}
