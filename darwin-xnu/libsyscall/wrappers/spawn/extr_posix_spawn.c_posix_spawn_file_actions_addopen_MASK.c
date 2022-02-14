
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * posix_spawn_file_actions_t ;
typedef int mode_t ;
struct TYPE_5__ {int psfao_oflag; int psfao_path; int psfao_mode; } ;
struct TYPE_6__ {int psfaa_filedes; TYPE_1__ psfaa_openargs; int psfaa_type; } ;
typedef TYPE_2__ _psfa_action_t ;
typedef TYPE_3__* _posix_spawn_file_actions_t ;
struct TYPE_7__ {scalar_t__ psfa_act_count; scalar_t__ psfa_act_alloc; TYPE_2__* psfa_act_acts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__**) ;
 int FUNC_1 (int ,char const*,int ) ;

int
FUNC_2(
  posix_spawn_file_actions_t * __restrict VAR_6,
  int VAR_7, const char * __restrict VAR_8, int VAR_9,
  mode_t VAR_10)
{
 _posix_spawn_file_actions_t *VAR_11;
 _psfa_action_t *VAR_12;

 if (VAR_6 == ((void*)0) || *VAR_6 == ((void*)0))
  return VAR_1;

 VAR_11 = (_posix_spawn_file_actions_t *)VAR_6;

 if (VAR_7 < 0 || VAR_7 >= VAR_3)
  return (VAR_0);


 if ((*VAR_11)->psfa_act_count == (*VAR_11)->psfa_act_alloc) {

  if (FUNC_0(VAR_11))
   return (VAR_2);
 }




 VAR_12 = &(*VAR_11)->psfa_act_acts[(*VAR_11)->psfa_act_count++];

 VAR_12->psfaa_type = VAR_5;
 VAR_12->psfaa_filedes = VAR_7;
 VAR_12->psfaa_openargs.psfao_oflag = VAR_9;
 VAR_12->psfaa_openargs.psfao_mode = VAR_10;
 FUNC_1(VAR_12->psfaa_openargs.psfao_path, VAR_8, VAR_4);

 return (0);
}
