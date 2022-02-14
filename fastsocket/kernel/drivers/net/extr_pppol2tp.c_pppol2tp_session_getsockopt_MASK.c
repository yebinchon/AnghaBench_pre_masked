
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct pppol2tp_session {int recv_seq; int debug; int send_seq; int lns_mode; int name; int reorder_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (int,int ,int ,char*,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_3,
           struct pppol2tp_session *VAR_4,
           int VAR_5, int *VAR_6)
{
 int VAR_7 = 0;

 switch (VAR_5) {
 case 130:
  *VAR_6 = VAR_4->recv_seq;
  FUNC_0(VAR_4->debug, VAR_2, VAR_1,
         "%s: get recv_seq=%d\n", VAR_4->name, *VAR_6);
  break;

 case 128:
  *VAR_6 = VAR_4->send_seq;
  FUNC_0(VAR_4->debug, VAR_2, VAR_1,
         "%s: get send_seq=%d\n", VAR_4->name, *VAR_6);
  break;

 case 131:
  *VAR_6 = VAR_4->lns_mode;
  FUNC_0(VAR_4->debug, VAR_2, VAR_1,
         "%s: get lns_mode=%d\n", VAR_4->name, *VAR_6);
  break;

 case 132:
  *VAR_6 = VAR_4->debug;
  FUNC_0(VAR_4->debug, VAR_2, VAR_1,
         "%s: get debug=%d\n", VAR_4->name, *VAR_6);
  break;

 case 129:
  *VAR_6 = (int) FUNC_1(VAR_4->reorder_timeout);
  FUNC_0(VAR_4->debug, VAR_2, VAR_1,
         "%s: get reorder_timeout=%d\n", VAR_4->name, *VAR_6);
  break;

 default:
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
