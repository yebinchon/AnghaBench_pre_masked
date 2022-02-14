
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ (* nstat_watcher_add ) (TYPE_4__*,TYPE_3__*) ;} ;
typedef TYPE_2__ nstat_provider ;
struct TYPE_11__ {int context; } ;
struct TYPE_13__ {int filter; TYPE_1__ hdr; int provider; } ;
typedef TYPE_3__ nstat_msg_add_all_srcs ;
struct TYPE_14__ {int ncs_mtx; int ncs_flags; } ;
typedef TYPE_4__ nstat_control_state ;
typedef int mbuf_t ;
typedef scalar_t__ errno_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_4__*,int ) ;
 TYPE_2__* FUNC_6 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static errno_t
FUNC_9(
 nstat_control_state *VAR_8,
 mbuf_t VAR_9)
{
 errno_t VAR_10 = 0;


 if (FUNC_4(VAR_9) < sizeof(nstat_msg_add_all_srcs))
 {
  return VAR_0;
 }

 nstat_msg_add_all_srcs *VAR_11 = FUNC_3(VAR_9);
 if (VAR_11->provider > VAR_5) return VAR_1;

 nstat_provider *VAR_12 = FUNC_6(VAR_11->provider);

 if (!VAR_12) return VAR_1;
 if (VAR_12->nstat_watcher_add == ((void*)0)) return VAR_2;

 if (VAR_7 != 0) {
  VAR_10 = FUNC_7(FUNC_0(),
      VAR_6, 0);
  if (VAR_10 != 0)
   return VAR_10;
 }

 FUNC_1(&VAR_8->ncs_mtx);
 if (VAR_11->filter & VAR_3)
 {

  VAR_8->ncs_flags |= VAR_4;
 }
 FUNC_2(&VAR_8->ncs_mtx);






 VAR_10 = VAR_12->nstat_watcher_add(VAR_8, VAR_11);

 if (VAR_10 == 0)
  FUNC_5(VAR_11->hdr.context, VAR_8, 0);

 return VAR_10;
}
