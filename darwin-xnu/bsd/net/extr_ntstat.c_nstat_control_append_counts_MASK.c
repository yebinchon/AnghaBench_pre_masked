
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int filter; int cookie; TYPE_1__* provider; int srcref; } ;
typedef TYPE_2__ nstat_src ;
struct TYPE_12__ {int length; int type; } ;
struct TYPE_11__ {scalar_t__ nstat_rxbytes; scalar_t__ nstat_txbytes; } ;
struct TYPE_10__ {TYPE_6__ hdr; TYPE_4__ counts; scalar_t__ event_flags; int srcref; } ;
typedef TYPE_3__ nstat_msg_src_counts ;
typedef int nstat_control_state ;
typedef scalar_t__ errno_t ;
typedef int counts ;
struct TYPE_8__ {scalar_t__ (* nstat_counts ) (int ,TYPE_4__*,int*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (int *,TYPE_6__*,int) ;
 scalar_t__ FUNC_2 (int ,TYPE_4__*,int*) ;

__attribute__((used)) static errno_t
FUNC_3(
 nstat_control_state *VAR_3,
 nstat_src *VAR_4,
 int *VAR_5)
{

 if (!VAR_4->provider->nstat_counts) return 0;

 nstat_msg_src_counts VAR_6;
 FUNC_0(&VAR_6, sizeof(VAR_6));
 VAR_6.hdr.type = VAR_2;
 VAR_6.hdr.length = sizeof(VAR_6);
 VAR_6.srcref = VAR_4->srcref;
 VAR_6.event_flags = 0;

 errno_t VAR_7 = 0;
 VAR_7 = VAR_4->provider->nstat_counts(VAR_4->cookie, &VAR_6.counts, VAR_5);
 if (VAR_7 != 0)
 {
  return VAR_7;
 }

 if ((VAR_4->filter & VAR_1) == VAR_1 &&
  VAR_6.counts.nstat_rxbytes == 0 && VAR_6.counts.nstat_txbytes == 0)
 {
  return VAR_0;
 }

 return FUNC_1(VAR_3, &VAR_6.hdr, VAR_6.hdr.length);
}
