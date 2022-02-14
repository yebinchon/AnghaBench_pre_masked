
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_10__ {TYPE_2__* p_dtrace_helpers; } ;
typedef TYPE_1__ proc_t ;
struct TYPE_11__ {int dthps_nprovs; size_t dthps_maxprovs; TYPE_3__** dthps_provs; } ;
typedef TYPE_2__ dtrace_helpers_t ;
struct TYPE_13__ {scalar_t__ dofhp_addr; } ;
struct TYPE_12__ {int dthp_ref; int dthp_generation; TYPE_4__ dthp_prov; } ;
typedef TYPE_3__ dtrace_helper_provider_t ;
typedef TYPE_4__ dof_helper_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__**,TYPE_3__**,size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_3__**,size_t) ;
 void* FUNC_4 (int,int ) ;

__attribute__((used)) static int
FUNC_5(proc_t* VAR_6, dof_helper_t *VAR_7, int VAR_8)
{
 dtrace_helpers_t *VAR_9;
 dtrace_helper_provider_t *VAR_10, **VAR_11;
 uint_t VAR_12, VAR_13;

 FUNC_1(&VAR_5, VAR_3);
 VAR_9 = VAR_6->p_dtrace_helpers;
 FUNC_0(VAR_9 != ((void*)0));





 if (VAR_9->dthps_nprovs >= VAR_4)
  return (VAR_1);




 for (VAR_13 = 0; VAR_13 < VAR_9->dthps_nprovs; VAR_13++) {
  if (VAR_7->dofhp_addr ==
      VAR_9->dthps_provs[VAR_13]->dthp_prov.dofhp_addr)
   return (VAR_0);
 }

 VAR_10 = FUNC_4(sizeof (dtrace_helper_provider_t), VAR_2);
 VAR_10->dthp_prov = *VAR_7;
 VAR_10->dthp_ref = 1;
 VAR_10->dthp_generation = VAR_8;




 if (VAR_9->dthps_maxprovs == VAR_9->dthps_nprovs) {
  VAR_12 = VAR_9->dthps_maxprovs;
  VAR_11 = VAR_9->dthps_provs;

  if (VAR_9->dthps_maxprovs == 0)
   VAR_9->dthps_maxprovs = 2;
  else
   VAR_9->dthps_maxprovs *= 2;
  if (VAR_9->dthps_maxprovs > VAR_4)
   VAR_9->dthps_maxprovs = VAR_4;

  FUNC_0(VAR_12 < VAR_9->dthps_maxprovs);

  VAR_9->dthps_provs = FUNC_4(VAR_9->dthps_maxprovs *
      sizeof (dtrace_helper_provider_t *), VAR_2);

  if (VAR_11 != ((void*)0)) {
   FUNC_2(VAR_11, VAR_9->dthps_provs, VAR_12 *
       sizeof (dtrace_helper_provider_t *));
   FUNC_3(VAR_11, VAR_12 *
       sizeof (dtrace_helper_provider_t *));
  }
 }

 VAR_9->dthps_provs[VAR_9->dthps_nprovs] = VAR_10;
 VAR_9->dthps_nprovs++;

 return (0);
}
