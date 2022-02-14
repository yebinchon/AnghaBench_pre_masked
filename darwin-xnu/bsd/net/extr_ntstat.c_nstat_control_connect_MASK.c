
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int thread_call_func_t ;
struct sockaddr_ctl {int sc_unit; } ;
struct TYPE_5__ {struct TYPE_5__* ncs_next; int ncs_flags; int ncs_unit; int ncs_kctl; int ncs_mtx; } ;
typedef TYPE_1__ nstat_control_state ;
typedef int kern_ctl_ref ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int,int ,scalar_t__*) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ,int *,scalar_t__) ;

__attribute__((used)) static errno_t
FUNC_7(
 kern_ctl_ref VAR_9,
 struct sockaddr_ctl *VAR_10,
 void **VAR_11)
{
 nstat_control_state *VAR_12 = FUNC_0(sizeof(*VAR_12), VAR_7);
 if (VAR_12 == ((void*)0)) return VAR_0;

 FUNC_1(VAR_12, sizeof(*VAR_12));
 FUNC_3(&VAR_12->ncs_mtx, VAR_6, ((void*)0));
 VAR_12->ncs_kctl = VAR_9;
 VAR_12->ncs_unit = VAR_10->sc_unit;
 VAR_12->ncs_flags = VAR_2;
 *VAR_11 = VAR_12;

 FUNC_4(&VAR_8);
 VAR_12->ncs_next = VAR_3;
 VAR_3 = VAR_12;

 if (VAR_5 == 0)
 {
  FUNC_2(60, VAR_1, &VAR_5);
  FUNC_6((thread_call_func_t)VAR_4, ((void*)0), VAR_5);
 }

 FUNC_5(&VAR_8);

 return 0;
}
