
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int64_t ;
typedef int u_int32_t ;
struct tb_profile {int percent; int rate; int member_2; int member_1; int member_0; } ;
struct proc {int dummy; } ;
struct TYPE_2__ {int tbr_percent; int tbr_rate_raw; } ;
struct ifclassq {TYPE_1__ ifcq_tbr; int ifcq_type; } ;
struct ifnet {int if_input_lt; int if_output_lt; int if_input_bw; int if_output_bw; int if_output_sched_model; struct ifclassq if_snd; } ;
struct if_linkparamsreq {int iflpr_input_lt; int iflpr_output_lt; int iflpr_input_bw; int iflpr_output_bw; int iflpr_flags; int iflpr_output_tbr_percent; int iflpr_output_tbr_rate; int iflpr_output_sched; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct ifclassq*) ;
 int FUNC_1 (struct ifclassq*) ;
 int FUNC_2 (struct ifclassq*) ;
 int FUNC_3 (struct ifclassq*) ;
 int FUNC_4 (struct ifclassq*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (struct ifclassq*,struct tb_profile*,int ) ;
 int FUNC_8 (struct proc*) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_9(struct ifnet *VAR_5, u_long VAR_6, caddr_t VAR_7, struct proc *VAR_8)
{
 struct if_linkparamsreq *VAR_9 =
     (struct if_linkparamsreq *)(void *)VAR_7;
 struct ifclassq *VAR_10;
 int VAR_11 = 0;

 FUNC_5(VAR_5 != ((void*)0));
 VAR_10 = &VAR_5->if_snd;

 switch (VAR_6) {
 case 128: {
  struct tb_profile VAR_12 = { 0, 0, 0 };

  if ((VAR_11 = FUNC_8(VAR_8)) != 0)
   break;


  FUNC_2(VAR_10);
  if (!FUNC_1(VAR_10)) {
   VAR_11 = VAR_0;
   FUNC_4(VAR_10);
   break;
  }
  FUNC_6(&VAR_9->iflpr_output_tbr_rate, &VAR_12.rate,
      sizeof (VAR_12.rate));
  FUNC_6(&VAR_9->iflpr_output_tbr_percent, &VAR_12.percent,
      sizeof (VAR_12.percent));
  VAR_11 = FUNC_7(VAR_10, &VAR_12, VAR_4);
  FUNC_4(VAR_10);
  break;
 }

 case 129: {
  u_int32_t VAR_13 = VAR_3, VAR_14 = 0;
  u_int64_t VAR_15 = 0, VAR_16 = 0;

  FUNC_2(VAR_10);

  if (FUNC_0(VAR_10))
   VAR_13 = VAR_10->ifcq_type;

  FUNC_6(&VAR_13, &VAR_9->iflpr_output_sched,
      sizeof (VAR_9->iflpr_output_sched));

  if (FUNC_3(VAR_10)) {
   VAR_15 = VAR_10->ifcq_tbr.tbr_rate_raw;
   VAR_16 = VAR_10->ifcq_tbr.tbr_percent;
  }
  FUNC_6(&VAR_15, &VAR_9->iflpr_output_tbr_rate,
      sizeof (VAR_9->iflpr_output_tbr_rate));
  FUNC_6(&VAR_16, &VAR_9->iflpr_output_tbr_percent,
      sizeof (VAR_9->iflpr_output_tbr_percent));
  FUNC_4(VAR_10);

  if (VAR_5->if_output_sched_model ==
      VAR_2)
   VAR_14 |= VAR_1;
  FUNC_6(&VAR_14, &VAR_9->iflpr_flags, sizeof (VAR_9->iflpr_flags));
  FUNC_6(&VAR_5->if_output_bw, &VAR_9->iflpr_output_bw,
      sizeof (VAR_9->iflpr_output_bw));
  FUNC_6(&VAR_5->if_input_bw, &VAR_9->iflpr_input_bw,
      sizeof (VAR_9->iflpr_input_bw));
  FUNC_6(&VAR_5->if_output_lt, &VAR_9->iflpr_output_lt,
      sizeof (VAR_9->iflpr_output_lt));
  FUNC_6(&VAR_5->if_input_lt, &VAR_9->iflpr_input_lt,
      sizeof (VAR_9->iflpr_input_lt));
  break;
 }

 default:
  FUNC_5(0);

 }

 return (VAR_11);
}
