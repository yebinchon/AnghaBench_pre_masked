
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u_int64_t ;
typedef int u_int32_t ;
typedef scalar_t__ nstat_src_ref_t ;
struct TYPE_18__ {scalar_t__ srcref; int filter; TYPE_6__* ns_control; scalar_t__ seq; int cookie; TYPE_4__* provider; } ;
typedef TYPE_3__ nstat_src ;
typedef int nstat_provider_cookie_t ;
struct TYPE_19__ {size_t nstat_provider_id; } ;
typedef TYPE_4__ nstat_provider ;
struct TYPE_17__ {int context; int length; int type; } ;
struct TYPE_20__ {size_t provider; scalar_t__ srcref; TYPE_2__ hdr; } ;
typedef TYPE_5__ nstat_msg_src_added ;
struct TYPE_21__ {int ncs_flags; int ncs_mtx; int ncs_src_queue; int ncs_unit; int ncs_kctl; TYPE_1__* ncs_provider_filters; } ;
typedef TYPE_6__ nstat_control_state ;
typedef int * mbuf_t ;
typedef scalar_t__ errno_t ;
typedef int boolean_t ;
struct TYPE_22__ {int nstat_srcaddedfailures; } ;
struct TYPE_16__ {int npf_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (TYPE_3__*,int,int ) ;
 TYPE_3__* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_5__*,int) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int,unsigned int*,int **) ;
 TYPE_5__* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int) ;
 int VAR_11 ;
 scalar_t__ FUNC_13 (TYPE_6__*) ;
 int VAR_12 ;
 TYPE_7__ VAR_13 ;

__attribute__((used)) static errno_t
FUNC_14(
 u_int64_t VAR_14,
 nstat_control_state *VAR_15,
 nstat_provider *VAR_16,
 nstat_provider_cookie_t VAR_17)
{

 mbuf_t VAR_18 = ((void*)0);
 nstat_src_ref_t *VAR_19 = ((void*)0);

 u_int64_t VAR_20 =
     VAR_15->ncs_provider_filters[VAR_16->nstat_provider_id].npf_flags;
 boolean_t VAR_21 =
     ((VAR_20 & VAR_6) == 0);
 u_int32_t VAR_22 =
     (VAR_20 & VAR_5)
  ? VAR_4 : 0;

 if (VAR_20 & VAR_7)
 {
  VAR_22 |= VAR_7;
 }

 if (VAR_21)
 {
  unsigned int VAR_23 = 1;

  if (FUNC_7(VAR_3, sizeof(nstat_msg_src_added),
      &VAR_23, &VAR_18) != 0)
   return VAR_2;

  FUNC_12(VAR_18, sizeof(nstat_msg_src_added));
  FUNC_11(VAR_18, FUNC_10(VAR_18));
  nstat_msg_src_added *VAR_24 = FUNC_8(VAR_18);
  FUNC_3(VAR_24, sizeof(*VAR_24));
  VAR_24->hdr.type = VAR_9;
  VAR_24->hdr.length = FUNC_10(VAR_18);
  VAR_24->hdr.context = VAR_14;
  VAR_24->provider = VAR_16->nstat_provider_id;
  VAR_19 = &VAR_24->srcref;
 }


 nstat_src *VAR_25 = FUNC_1(sizeof(*VAR_25), VAR_12);
 if (VAR_25 == ((void*)0))
 {
  if (VAR_18) FUNC_9(VAR_18);
  return VAR_2;
 }


 FUNC_5(&VAR_15->ncs_mtx);

 VAR_25->srcref = FUNC_13(VAR_15);
 if (VAR_19)
  *VAR_19 = VAR_25->srcref;

 if (VAR_15->ncs_flags & VAR_8 || VAR_25->srcref == VAR_10)
 {
  FUNC_6(&VAR_15->ncs_mtx);
  FUNC_0(VAR_25, sizeof(*VAR_25), VAR_12);
  if (VAR_18) FUNC_9(VAR_18);
  return VAR_1;
 }
 VAR_25->provider = VAR_16;
 VAR_25->cookie = VAR_17;
 VAR_25->filter = VAR_22;
 VAR_25->seq = 0;

 if (VAR_18)
 {

  errno_t VAR_26 = FUNC_4(VAR_15->ncs_kctl, VAR_15->ncs_unit, VAR_18,
      VAR_0);
  if (VAR_26 != 0)
  {
   VAR_13.nstat_srcaddedfailures += 1;
   FUNC_6(&VAR_15->ncs_mtx);
   FUNC_0(VAR_25, sizeof(*VAR_25), VAR_12);
   FUNC_9(VAR_18);
   return VAR_26;
  }
 }

 FUNC_2(&VAR_15->ncs_src_queue, VAR_25, VAR_11);
 VAR_25->ns_control = VAR_15;

 FUNC_6(&VAR_15->ncs_mtx);

 return 0;
}
