
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * posix_spawn_file_actions_t ;
typedef int _posix_spawn_file_actions_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

int
FUNC_1(posix_spawn_file_actions_t *VAR_1)
{
 _posix_spawn_file_actions_t VAR_2;

 if (VAR_1 == ((void*)0) || *VAR_1 == ((void*)0))
  return VAR_0;

 VAR_2 = *(_posix_spawn_file_actions_t *)VAR_1;
 FUNC_0(VAR_2);
 *VAR_1 = ((void*)0);

 return (0);
}
