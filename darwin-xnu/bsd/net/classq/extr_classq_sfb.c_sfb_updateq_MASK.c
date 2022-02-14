
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* u_int64_t ;
struct sfb {char* sfb_eff_rate; int sfb_qid; int sfb_target_qdelay; struct ifnet* sfb_ifp; } ;
struct ifnet {int dummy; } ;
typedef int cqev_t ;







 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*,int *) ;
 char* FUNC_3 (struct ifnet*) ;
 int FUNC_4 (int ,char*,int ,int ,char*) ;
 int FUNC_5 (struct sfb*,char*) ;
 int FUNC_6 (struct sfb*,char*) ;
 int FUNC_7 (struct sfb*,char*) ;
 int FUNC_8 (struct sfb*,int) ;

void
FUNC_9(struct sfb *VAR_2, cqev_t VAR_3)
{
 struct ifnet *VAR_4 = VAR_2->sfb_ifp;

 FUNC_0(VAR_4 != ((void*)0));

 switch (VAR_3) {
 case 132: {
  u_int64_t VAR_5 = FUNC_3(VAR_4);


  if (VAR_5 == VAR_2->sfb_eff_rate)
   break;

  if (VAR_1) {
   FUNC_4(VAR_0, "%s: SFB qid=%d, adapting to new "
       "eff_rate=%llu bps\n", FUNC_1(VAR_4), VAR_2->sfb_qid,
       VAR_5);
  }
  FUNC_5(VAR_2, VAR_5);
  FUNC_6(VAR_2, VAR_5);
  FUNC_2(VAR_4, &VAR_2->sfb_target_qdelay);
  FUNC_7(VAR_2, VAR_5);
  break;
 }

 case 128:
 case 131:
  if (VAR_1) {
   FUNC_4(VAR_0, "%s: SFB qid=%d, resetting due to "
       "link %s\n", FUNC_1(VAR_4), VAR_2->sfb_qid,
       (VAR_3 == 128) ? "UP" : "DOWN");
  }
  FUNC_8(VAR_2, VAR_3);
  break;

 case 130:
 case 129:
 default:
  break;
 }
}
