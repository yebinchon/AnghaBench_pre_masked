
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfb {int sfb_flags; int sfb_qid; struct ifnet* sfb_ifp; } ;
struct ifnet {int dummy; } ;
typedef int class_queue_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (int ,char*,int ,int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sfb*,int ) ;

int
FUNC_5(struct sfb *VAR_6, class_queue_t *VAR_7, boolean_t VAR_8)
{
#pragma unused(q)
 struct ifnet *VAR_9 = VAR_6->sfb_ifp;

 FUNC_0(VAR_9 != ((void*)0));

 if ((VAR_8 && (VAR_6->sfb_flags & VAR_4)) ||
     (!VAR_8 && !(VAR_6->sfb_flags & VAR_4)))
  return (0);

 if (!(VAR_6->sfb_flags & VAR_3)) {
  FUNC_2(VAR_2, "%s: SFB qid=%d, unable to %s queue since "
      "flow-control is not enabled", FUNC_1(VAR_9), VAR_6->sfb_qid,
      (VAR_8 ? "suspend" : "resume"));
  return (VAR_0);
 }

 if (VAR_5) {
  FUNC_2(VAR_1, "%s: SFB qid=%d, setting state to %s",
      FUNC_1(VAR_9), VAR_6->sfb_qid, (VAR_8 ? "SUSPENDED" : "RUNNING"));
 }

 if (VAR_8) {
  VAR_6->sfb_flags |= VAR_4;
 } else {
  VAR_6->sfb_flags &= ~VAR_4;
  FUNC_4(VAR_6, FUNC_3(VAR_7));
 }

 return (0);
}
