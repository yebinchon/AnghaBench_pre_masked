
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_14__ {int filter; int cookie; TYPE_2__* provider; int srcref; } ;
typedef TYPE_3__ nstat_src ;
struct TYPE_17__ {scalar_t__ nstat_rxbytes; scalar_t__ nstat_txbytes; } ;
struct TYPE_12__ {int length; unsigned long long context; int flags; int type; } ;
struct TYPE_15__ {TYPE_6__ counts; scalar_t__ event_flags; int srcref; TYPE_1__ hdr; } ;
typedef TYPE_4__ nstat_msg_src_counts ;
struct TYPE_16__ {int ncs_unit; int ncs_kctl; } ;
typedef TYPE_5__ nstat_control_state ;
typedef scalar_t__ errno_t ;
typedef int counts ;
struct TYPE_18__ {int nstat_sendcountfailures; } ;
struct TYPE_13__ {scalar_t__ (* nstat_counts ) (int ,TYPE_6__*,int*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_4__*,int,int ) ;
 TYPE_7__ VAR_4 ;
 scalar_t__ FUNC_2 (int ,TYPE_6__*,int*) ;

__attribute__((used)) static errno_t
FUNC_3(
 nstat_control_state *VAR_5,
 nstat_src *VAR_6,
 unsigned long long VAR_7,
 u_int16_t VAR_8,
 int *VAR_9)
{
 nstat_msg_src_counts VAR_10;
 errno_t VAR_11 = 0;


 if (VAR_6->provider->nstat_counts == ((void*)0))
  return (0);

 FUNC_0(&VAR_10, sizeof(VAR_10));
 VAR_10.hdr.type = VAR_3;
 VAR_10.hdr.length = sizeof(VAR_10);
 VAR_10.hdr.flags = VAR_8;
 VAR_10.hdr.context = VAR_7;
 VAR_10.srcref = VAR_6->srcref;
 VAR_10.event_flags = 0;

 if (VAR_6->provider->nstat_counts(VAR_6->cookie, &VAR_10.counts, VAR_9) == 0)
 {
  if ((VAR_6->filter & VAR_2) &&
      VAR_10.counts.nstat_rxbytes == 0 &&
      VAR_10.counts.nstat_txbytes == 0)
  {
   VAR_11 = VAR_1;
  }
  else
  {
   VAR_11 = FUNC_1(VAR_5->ncs_kctl,
       VAR_5->ncs_unit, &VAR_10, sizeof(VAR_10),
       VAR_0);
   if (VAR_11 != 0)
    VAR_4.nstat_sendcountfailures += 1;
  }
 }
 return VAR_11;
}
