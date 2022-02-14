
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
struct tcpopt {int to_nsacks; int* to_sacks; int* to_tfo; int to_flags; int to_tsecr; int to_tsval; int to_requested_s_scale; int to_mss; } ;
struct tcphdr {int th_flags; } ;
struct tcpcb {int t_flags; int t_state; } ;
typedef int mss ;
struct TYPE_2__ {int tcps_sack_rcv_blocks; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;




 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct tcpcb*,int*,struct tcphdr*,struct tcpopt*,int) ;
 int VAR_21 ;
 int VAR_22 ;
 TYPE_1__ VAR_23 ;

__attribute__((used)) static void
FUNC_5(struct tcpcb *VAR_24, u_char *VAR_25, int VAR_26, struct tcphdr *VAR_27,
    struct tcpopt *VAR_28)
{
 u_short VAR_29 = 0;
 int VAR_30, VAR_31;

 for (; VAR_26 > 0; VAR_26 -= VAR_31, VAR_25 += VAR_31) {
  VAR_30 = VAR_25[0];
  if (VAR_30 == VAR_6)
   break;
  if (VAR_30 == VAR_7)
   VAR_31 = 1;
  else {
   if (VAR_26 < 2)
    break;
   VAR_31 = VAR_25[1];
   if (VAR_31 < 2 || VAR_31 > VAR_26)
    break;
  }
  switch (VAR_30) {

  default:
   continue;

  case 133:
   if (VAR_31 != VAR_1)
    continue;
   if (!(VAR_27->th_flags & VAR_14))
    continue;
   FUNC_2((char *) VAR_25 + 2, (char *) &VAR_29, sizeof(VAR_29));
   FUNC_1(VAR_29);
   VAR_28->to_mss = VAR_29;
   VAR_28->to_flags |= VAR_15;
   break;

  case 128:
   if (VAR_31 != VAR_5)
    continue;
   if (!(VAR_27->th_flags & VAR_14))
    continue;
   VAR_28->to_flags |= VAR_17;
   VAR_28->to_requested_s_scale = FUNC_3(VAR_25[2], VAR_10);
   break;

  case 129:
   if (VAR_31 != VAR_4)
    continue;
   VAR_28->to_flags |= VAR_20;
   FUNC_2((char *)VAR_25 + 2,
       (char *)&VAR_28->to_tsval, sizeof(VAR_28->to_tsval));
   FUNC_0(VAR_28->to_tsval);
   FUNC_2((char *)VAR_25 + 6,
       (char *)&VAR_28->to_tsecr, sizeof(VAR_28->to_tsecr));
   FUNC_0(VAR_28->to_tsecr);

   if (!(VAR_24->t_flags & VAR_13) &&
       VAR_21 == 1)
    VAR_24->t_flags |= VAR_13;
   break;
  case 130:
   if (!VAR_22 ||
       VAR_31 != VAR_3)
    continue;
   if (VAR_27->th_flags & VAR_14)
    VAR_28->to_flags |= VAR_16;
   break;
  case 131:
   if (VAR_31 <= 2 || (VAR_31 - 2) % VAR_2 != 0)
    continue;
   VAR_28->to_nsacks = (VAR_31 - 2) / VAR_2;
   VAR_28->to_sacks = VAR_25 + 2;
   VAR_23.tcps_sack_rcv_blocks++;

   break;
  case 134:
   if (VAR_31 == VAR_0) {
    if (VAR_24->t_state != VAR_8)
     continue;

    VAR_28->to_flags |= VAR_19;
   } else {
    if (VAR_31 < VAR_0 ||
        (VAR_31 - VAR_0) > VAR_11 ||
        (VAR_31 - VAR_0) < VAR_12)
     continue;
    if (VAR_24->t_state != VAR_8 &&
        VAR_24->t_state != VAR_9)
     continue;

    VAR_28->to_flags |= VAR_18;
    VAR_28->to_tfo = VAR_25 + 1;
   }

   break;





  }
 }
}
