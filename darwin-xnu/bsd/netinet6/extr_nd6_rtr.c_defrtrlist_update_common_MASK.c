
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; } ;
struct nd_ifinfo {scalar_t__ initialized; scalar_t__ ndefrouters; int lock; } ;
struct nd_defrouter {scalar_t__ rtlifetime; int stateflags; int err; struct ifnet* ifp; int base_uptime; int base_calendartime; int expire; int flags; int rtaddr; } ;
struct ifnet {int dummy; } ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct nd_defrouter*) ;
 int FUNC_2 (struct nd_defrouter*) ;
 int FUNC_3 (struct nd_defrouter*) ;
 int FUNC_4 (struct nd_defrouter*) ;
 struct nd_ifinfo* FUNC_5 (struct ifnet*) ;
 struct nd_defrouter* FUNC_6 (int *) ;
 int FUNC_7 (struct nd_defrouter*,struct nd_defrouter*,int ) ;
 int FUNC_8 (int *,struct nd_defrouter*,int ) ;
 struct nd_defrouter* FUNC_9 (struct nd_defrouter*,int ) ;
 int FUNC_10 (int *,struct nd_defrouter*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_11 (int) ;
 struct nd_defrouter* FUNC_12 (int *,struct ifnet*) ;
 int FUNC_13 (struct ifnet*) ;
 int FUNC_14 (struct nd_defrouter*) ;
 int VAR_5 ;
 int FUNC_15 (struct timeval*) ;
 int FUNC_16 (struct ifnet*) ;
 scalar_t__ VAR_6 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int *,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_21 (int ) ;
 int VAR_10 ;
 struct nd_defrouter* FUNC_22 (int ) ;
 int FUNC_23 (struct nd_defrouter*) ;
 int FUNC_24 () ;
 int FUNC_25 (struct nd_defrouter*) ;

__attribute__((used)) static struct nd_defrouter *
FUNC_26(struct nd_defrouter *VAR_11, boolean_t VAR_12)
{
 struct nd_defrouter *VAR_13, *VAR_14;
 struct ifnet *VAR_15 = VAR_11->ifp;
 struct nd_ifinfo *VAR_16 = ((void*)0);
 struct timeval VAR_17;

 FUNC_0(VAR_8, VAR_0);

 if ((VAR_13 = FUNC_12(&VAR_11->rtaddr, VAR_15)) != ((void*)0)) {

  if (VAR_11->rtlifetime == 0) {
   FUNC_10(&VAR_10, VAR_13, VAR_5);
   FUNC_14(VAR_13);
   FUNC_3(VAR_13);
   FUNC_3(VAR_13);
   VAR_13 = ((void*)0);
  } else {
   int VAR_18 = FUNC_25(VAR_13);
   struct nd_defrouter *VAR_19 = ((void*)0);

   VAR_13->flags = VAR_11->flags;
   VAR_13->rtlifetime = VAR_11->rtlifetime;
   VAR_13->expire = VAR_11->expire;
   if (FUNC_25(VAR_11) == VAR_18 && VAR_12)
    return (VAR_13);

   VAR_14 = FUNC_6(&VAR_10);
   while (VAR_14 != ((void*)0)) {

    if (FUNC_25(VAR_11) != VAR_18)
     break;


    if (VAR_14 != VAR_13 && FUNC_25(VAR_14) == VAR_18 &&
      (!VAR_19 || FUNC_25(VAR_19) > FUNC_25(VAR_14)))
     break;

    VAR_19 = VAR_14;
    VAR_14 = FUNC_9(VAR_14, VAR_5);
   }


   if (VAR_14 == ((void*)0) && (VAR_12 ||
       !(VAR_13->stateflags & VAR_3)))
    return (VAR_13);
   FUNC_10(&VAR_10, VAR_13, VAR_5);
   VAR_11->stateflags = VAR_13->stateflags;

   VAR_14 = VAR_13;
   goto insert;
  }
  return (VAR_13);
 }

 FUNC_11(VAR_13 == ((void*)0));


 if (VAR_11->rtlifetime == 0) {
  return (((void*)0));
 }

 VAR_14 = FUNC_22(VAR_2);
 if (VAR_14 == ((void*)0)) {
  return (((void*)0));
 }

 VAR_16 = FUNC_5(VAR_15);
 FUNC_11((((void*)0) != VAR_16) && (VAR_4 == VAR_16->initialized));
 FUNC_18(&VAR_16->lock);
 if (VAR_6 >= 0 &&
     VAR_16->ndefrouters >= VAR_6) {
  FUNC_19(&VAR_16->lock);
  FUNC_23(VAR_14);
  return (((void*)0));
 }

 FUNC_1(VAR_14);
 FUNC_1(VAR_14);

 ++VAR_7;
 VAR_16->ndefrouters++;
 FUNC_11(VAR_16->ndefrouters != 0);
 FUNC_19(&VAR_16->lock);

 FUNC_21((VAR_1, "%s: allocating defrouter %s\n", FUNC_16(VAR_15),
     FUNC_17(&VAR_11->rtaddr)));

 FUNC_15(&VAR_17);
 FUNC_2(VAR_14);
 FUNC_20(&VAR_14->rtaddr, &VAR_11->rtaddr, sizeof (VAR_14->rtaddr));
 VAR_14->flags = VAR_11->flags;
 VAR_14->stateflags = VAR_11->stateflags;
 VAR_14->rtlifetime = VAR_11->rtlifetime;
 VAR_14->expire = VAR_11->expire;
 VAR_14->base_calendartime = VAR_17.tv_sec;
 VAR_14->base_uptime = FUNC_24();
 VAR_14->ifp = VAR_11->ifp;
 VAR_14->err = VAR_11->err;
 FUNC_4(VAR_14);
insert:

 ++VAR_9;
 for (VAR_13 = FUNC_6(&VAR_10); VAR_13;
     VAR_13 = FUNC_9(VAR_13, VAR_5)) {
  if (FUNC_25(VAR_14) > FUNC_25(VAR_13) ||
      (!VAR_12 && FUNC_25(VAR_14) == FUNC_25(VAR_13)))
   break;
 }
 if (VAR_13)
  FUNC_7(VAR_13, VAR_14, VAR_5);
 else
  FUNC_8(&VAR_10, VAR_14, VAR_5);

 FUNC_13(VAR_15);

 return (VAR_14);
}
