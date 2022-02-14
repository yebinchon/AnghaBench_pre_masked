
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * posix_spawn_file_actions_t ;
struct TYPE_4__ {int psfaa_filedes; int psfaa_type; } ;
typedef TYPE_1__ _psfa_action_t ;
typedef TYPE_2__* _posix_spawn_file_actions_t ;
struct TYPE_5__ {scalar_t__ psfa_act_count; scalar_t__ psfa_act_alloc; TYPE_1__* psfa_act_acts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__**) ;

int
FUNC_1(posix_spawn_file_actions_t *VAR_5,
  int VAR_6)
{
 _posix_spawn_file_actions_t *VAR_7;
 _psfa_action_t *VAR_8;

 if (VAR_5 == ((void*)0) || *VAR_5 == ((void*)0))
  return VAR_1;

 VAR_7 = (_posix_spawn_file_actions_t *)VAR_5;

 if (VAR_6 < 0 || VAR_6 >= VAR_3)
  return (VAR_0);


 if ((*VAR_7)->psfa_act_count == (*VAR_7)->psfa_act_alloc) {

  if (FUNC_0(VAR_7))
   return (VAR_2);
 }




 VAR_8 = &(*VAR_7)->psfa_act_acts[(*VAR_7)->psfa_act_count++];

 VAR_8->psfaa_type = VAR_4;
 VAR_8->psfaa_filedes = VAR_6;

 return (0);
}
