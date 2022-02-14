
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int posix_spawn_file_actions_t ;
typedef TYPE_1__* _posix_spawn_file_actions_t ;
struct TYPE_2__ {scalar_t__ psfa_act_count; int psfa_act_alloc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

int
FUNC_2(posix_spawn_file_actions_t *VAR_2)
{
 _posix_spawn_file_actions_t *VAR_3 = (_posix_spawn_file_actions_t *)VAR_2;
 int VAR_4 = 0;

 if ((*VAR_3 = (_posix_spawn_file_actions_t)FUNC_1(FUNC_0(VAR_1))) == ((void*)0)) {
  VAR_4 = VAR_0;
 } else {
  (*VAR_3)->psfa_act_alloc = VAR_1;
  (*VAR_3)->psfa_act_count = 0;
 }

 return (VAR_4);
}
