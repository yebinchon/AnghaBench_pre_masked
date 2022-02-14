
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct sfb {int sfb_flags; scalar_t__ sfb_qid; scalar_t__ sfb_qlim; struct ifnet* sfb_ifp; struct sfb* sfb_fc_lists; struct sfb* sfb_bins; } ;
struct ifnet {int dummy; } ;
struct TYPE_2__ {int fclist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct sfb*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sfb*,int ) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (int ,char*,int ,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct sfb*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (struct sfb*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_8 (int ) ;

struct sfb *
FUNC_9(struct ifnet *VAR_11, u_int32_t VAR_12, u_int32_t VAR_13, u_int32_t VAR_14)
{
 struct sfb *VAR_15;
 int VAR_16;

 FUNC_2(VAR_11 != ((void*)0) && VAR_13 > 0);

 VAR_15 = FUNC_8(VAR_10);
 if (VAR_15 == ((void*)0)) {
  FUNC_5(VAR_1, "%s: SFB unable to allocate\n", FUNC_4(VAR_11));
  return (((void*)0));
 }
 FUNC_3(VAR_15, VAR_9);

 if ((VAR_15->sfb_bins = FUNC_8(VAR_6)) == ((void*)0)) {
  FUNC_5(VAR_1, "%s: SFB unable to allocate bins\n", FUNC_4(VAR_11));
  FUNC_6(VAR_15);
  return (((void*)0));
 }
 FUNC_3(VAR_15->sfb_bins, VAR_5);

 if ((VAR_15->sfb_fc_lists = FUNC_8(VAR_8)) == ((void*)0)) {
  FUNC_5(VAR_1, "%s: SFB unable to allocate flow control lists\n",
      FUNC_4(VAR_11));
  FUNC_6(VAR_15);
  return (((void*)0));
 }
 FUNC_3(VAR_15->sfb_fc_lists, VAR_7);

 for (VAR_16 = 0; VAR_16 < VAR_4; ++VAR_16)
  FUNC_1(&FUNC_0(VAR_15, VAR_16)->fclist);

 VAR_15->sfb_ifp = VAR_11;
 VAR_15->sfb_qlim = VAR_13;
 VAR_15->sfb_qid = VAR_12;
 VAR_15->sfb_flags = (VAR_14 & VAR_3);

 if (VAR_15->sfb_flags & VAR_2) {
  VAR_15->sfb_flags &= ~VAR_2;
  FUNC_5(VAR_1, "%s: SFB qid=%d, ECN not available; ignoring "
      "SFBF_ECN flag!\n", FUNC_4(VAR_11), VAR_15->sfb_qid);
 }


 FUNC_7(VAR_15, VAR_0);

 return (VAR_15);
}
