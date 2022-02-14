
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zoneid_t ;
typedef int uint32_t ;
typedef int uid_t ;
typedef int dtrace_probekey_t ;
typedef int dtrace_probedesc_t ;
struct TYPE_12__ {TYPE_3__* dten_vstate; } ;
typedef TYPE_4__ dtrace_enabling_t ;
typedef int dtrace_ecbdesc_t ;
struct TYPE_11__ {TYPE_2__* dtvs_state; } ;
struct TYPE_9__ {int dcr_cred; } ;
struct TYPE_10__ {TYPE_1__ dts_cred; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int *,int *) ;
 int * VAR_1 ;
 int FUNC_2 (int *,TYPE_4__*,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int ,int ,int (*) (int *,TYPE_4__*,int *),TYPE_4__*,int *) ;
 int FUNC_4 (int const*,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(const dtrace_probedesc_t *VAR_3, dtrace_enabling_t *VAR_4, dtrace_ecbdesc_t *VAR_5)
{
 dtrace_probekey_t VAR_6;
 uint32_t VAR_7;
 uid_t VAR_8;
 zoneid_t VAR_9;
 int VAR_10;

 FUNC_0(&VAR_2, VAR_0);

 VAR_1 = ((void*)0);

 if (VAR_3 == ((void*)0)) {




  (void) FUNC_2(((void*)0), VAR_4, VAR_5);
  return (0);
 }

 FUNC_4(VAR_3, &VAR_6);
 FUNC_1(VAR_4->dten_vstate->dtvs_state->dts_cred.dcr_cred,
     &VAR_7, &VAR_8, &VAR_9);

 VAR_10 = FUNC_3(&VAR_6, VAR_7, VAR_8, VAR_9, FUNC_2, VAR_4, VAR_5);

 FUNC_5(&VAR_6);

 return VAR_10;
}
