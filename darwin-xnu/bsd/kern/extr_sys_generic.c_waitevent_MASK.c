
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ user_addr_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct waitevent_args {scalar_t__ tv; int u_req; } ;
struct user64_timeval {int tv_usec; int tv_sec; } ;
struct user32_timeval {int tv_usec; int tv_sec; } ;
struct timeval {int tv_usec; int tv_sec; } ;
struct eventreq64 {int er_eventbits; scalar_t__ er_handle; int er_wcnt; int er_rcnt; int er_ecnt; scalar_t__ er_data; int er_type; } ;
struct eventreq32 {int er_eventbits; int er_wcnt; int er_rcnt; int er_ecnt; scalar_t__ er_data; scalar_t__ er_handle; int er_type; } ;
struct eventqelt {struct eventreq64 ee_req; int ee_flags; } ;
typedef TYPE_1__* proc_t ;
typedef int caddr_t ;
typedef scalar_t__ boolean_t ;
typedef int atv64 ;
typedef int atv32 ;
struct TYPE_9__ {struct eventqelt* tqh_first; } ;
struct TYPE_8__ {TYPE_5__ p_evlist; int p_mlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,int,scalar_t__,int ,scalar_t__,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_5__*,struct eventqelt*,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (scalar_t__,scalar_t__*) ;
 int FUNC_5 (scalar_t__,int ,int) ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_13 ;
 scalar_t__ FUNC_7 (struct timeval*) ;
 int FUNC_8 (TYPE_5__*,int *,int,char*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (struct timeval*) ;

int
FUNC_12(proc_t VAR_14, struct waitevent_args *VAR_15, int *VAR_16)
{
        int VAR_17 = 0;
 struct eventqelt *VAR_18;
 struct eventreq64 *VAR_19;
 uint64_t VAR_20, VAR_21;
 boolean_t VAR_22 = VAR_9;
 union {
         struct eventreq64 er64;
         struct eventreq32 er32;
 } VAR_23 = {};

 VAR_21 = 0;

 if (VAR_15->tv) {
  struct timeval VAR_24;



  if (FUNC_0(VAR_14)) {
          if (VAR_15->tv == (user_addr_t)-1)
           VAR_22 = VAR_12;
  } else if (VAR_15->tv == (user_addr_t)((uint32_t)-1))
          VAR_22 = VAR_12;

  if (VAR_22 == VAR_12) {
          if (VAR_14->p_evlist.tqh_first == ((void*)0)) {
    FUNC_1(VAR_3|VAR_1, -1,0,0,0,0);



           *VAR_16 = 1;
    return (0);
   }
   FUNC_9(VAR_14);
   goto retry;
  }
  if (FUNC_0(VAR_14)) {
   struct user64_timeval VAR_25;
   VAR_17 = FUNC_5(VAR_15->tv, (caddr_t)&VAR_25, sizeof(VAR_25));

   VAR_24.tv_sec = VAR_25;
   VAR_24.tv_usec = VAR_25;
  } else {
   struct user32_timeval VAR_26;
   VAR_17 = FUNC_5(VAR_15->tv, (caddr_t)&VAR_26, sizeof(VAR_26));
   VAR_24.tv_sec = VAR_26;
   VAR_24.tv_usec = VAR_26;
  }

  if (VAR_17)
   return(VAR_17);
  if (FUNC_7(&VAR_24)) {
   VAR_17 = VAR_5;
   return(VAR_17);
  }
  VAR_21 = FUNC_11(&VAR_24);
 }
 FUNC_1(VAR_3|VAR_2, 0,0,0,0,0);

 FUNC_9(VAR_14);
retry:
 if ((VAR_18 = VAR_14->p_evlist.tqh_first) != ((void*)0)) {






         VAR_19 = &VAR_18->ee_req;

  if (FUNC_0(VAR_14))
          FUNC_3((caddr_t)VAR_19, (caddr_t)&VAR_23.er64, sizeof (struct eventreq64));
  else {
          VAR_23.er32.er_type = VAR_19->er_type;
          VAR_23.er32.er_handle = VAR_19->er_handle;
          VAR_23.er32.er_data = (uint32_t)VAR_19->er_data;
          VAR_23.er32.er_ecnt = VAR_19->er_ecnt;
          VAR_23.er32.er_rcnt = VAR_19->er_rcnt;
          VAR_23.er32.er_wcnt = VAR_19->er_wcnt;
          VAR_23.er32.er_eventbits = VAR_19->er_eventbits;
  }
         FUNC_2(&VAR_14->p_evlist, VAR_18, VAR_13);

  VAR_18->ee_flags &= ~VAR_7;

  FUNC_10(VAR_14);

  if (FUNC_0(VAR_14))
          VAR_17 = FUNC_6((caddr_t)&VAR_23.er64, VAR_15->u_req, sizeof(struct eventreq64));
  else
          VAR_17 = FUNC_6((caddr_t)&VAR_23.er32, VAR_15->u_req, sizeof(struct eventreq32));

  FUNC_1(VAR_3|VAR_0, VAR_17,
        VAR_18->ee_req.er_handle,VAR_18->ee_req.er_eventbits,(uint32_t)VAR_18,0);
  return (VAR_17);
 }
 else {
  if (VAR_15->tv && VAR_21 == 0) {
   FUNC_10(VAR_14);
   *VAR_16 = 1;

   FUNC_1(VAR_3|VAR_0, VAR_17,0,0,0,0);
   return (VAR_17);
  }
  if (VAR_21 != 0)
   FUNC_4(VAR_21, &VAR_20);
  else
          VAR_20 = 0;

  FUNC_1(VAR_3, 1,(uint32_t)&VAR_14->p_evlist,0,0,0);

  VAR_17 = FUNC_8(&VAR_14->p_evlist, &VAR_14->p_mlock, (VAR_11 | VAR_10), "waitevent", VAR_20);

  FUNC_1(VAR_3, 2,(uint32_t)&VAR_14->p_evlist,0,0,0);

  if (VAR_17 == 0)
   goto retry;
  if (VAR_17 == VAR_6)
   VAR_17 = VAR_4;
  if (VAR_17 == VAR_8) {
   *VAR_16 = 1;
   VAR_17 = 0;
  }
 }
 FUNC_10(VAR_14);

 FUNC_1(VAR_3|VAR_0, 0,0,0,0,0);
 return (VAR_17);
}
