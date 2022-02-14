
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* provider; int cookie; } ;
typedef TYPE_2__ nstat_src ;
struct TYPE_8__ {int * ncs_provider_filters; } ;
typedef TYPE_3__ nstat_control_state ;
struct TYPE_6__ {int (* nstat_reporting_allowed ) (int ,int *) ;size_t nstat_provider_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static bool
FUNC_1(
 nstat_control_state *VAR_1,
 nstat_src *VAR_2)
{
 if (VAR_2->provider->nstat_reporting_allowed == ((void*)0))
  return VAR_0;

 return (
     VAR_2->provider->nstat_reporting_allowed(VAR_2->cookie,
  &VAR_1->ncs_provider_filters[VAR_2->provider->nstat_provider_id])
 );
}
