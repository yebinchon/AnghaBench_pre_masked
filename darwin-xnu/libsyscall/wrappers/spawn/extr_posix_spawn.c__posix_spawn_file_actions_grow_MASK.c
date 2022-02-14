
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* _posix_spawn_file_actions_t ;
struct TYPE_4__ {int psfa_act_alloc; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int,int*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,size_t) ;

__attribute__((used)) static int
FUNC_3(_posix_spawn_file_actions_t *VAR_1)
{
 int VAR_2 = 0;
 if (FUNC_1((*VAR_1)->psfa_act_alloc, 2, &VAR_2))
  return VAR_0;

 size_t VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 == 0)
  return VAR_0;







 _posix_spawn_file_actions_t VAR_4;
 if ((VAR_4 = (_posix_spawn_file_actions_t)FUNC_2((*VAR_1), VAR_3)) == ((void*)0)) {
  return VAR_0;
 }
 VAR_4->psfa_act_alloc = VAR_2;
 *VAR_1 = VAR_4;

 return 0;
}
