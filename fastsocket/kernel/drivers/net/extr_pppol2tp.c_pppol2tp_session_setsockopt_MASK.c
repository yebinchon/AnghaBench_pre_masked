
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {int hdrlen; } ;
struct pppox_sock {TYPE_1__ chan; } ;
struct pppol2tp_session {int recv_seq; int debug; int send_seq; int lns_mode; int reorder_timeout; int name; struct sock* sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int FUNC_0 (int,int ,int ,char*,int ,int) ;
 int FUNC_1 (int) ;
 struct pppox_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_6,
           struct pppol2tp_session *VAR_7,
           int VAR_8, int VAR_9)
{
 int VAR_10 = 0;

 switch (VAR_8) {
 case 130:
  if ((VAR_9 != 0) && (VAR_9 != 1)) {
   VAR_10 = -VAR_0;
   break;
  }
  VAR_7->recv_seq = VAR_9 ? -1 : 0;
  FUNC_0(VAR_7->debug, VAR_5, VAR_2,
         "%s: set recv_seq=%d\n", VAR_7->name,
         VAR_7->recv_seq);
  break;

 case 128:
  if ((VAR_9 != 0) && (VAR_9 != 1)) {
   VAR_10 = -VAR_0;
   break;
  }
  VAR_7->send_seq = VAR_9 ? -1 : 0;
  {
   struct sock *VAR_11 = VAR_7->sock;
   struct pppox_sock *VAR_12 = FUNC_2(VAR_11);
   VAR_12->chan.hdrlen = VAR_9 ? VAR_4 :
    VAR_3;
  }
  FUNC_0(VAR_7->debug, VAR_5, VAR_2,
         "%s: set send_seq=%d\n", VAR_7->name, VAR_7->send_seq);
  break;

 case 131:
  if ((VAR_9 != 0) && (VAR_9 != 1)) {
   VAR_10 = -VAR_0;
   break;
  }
  VAR_7->lns_mode = VAR_9 ? -1 : 0;
  FUNC_0(VAR_7->debug, VAR_5, VAR_2,
         "%s: set lns_mode=%d\n", VAR_7->name,
         VAR_7->lns_mode);
  break;

 case 132:
  VAR_7->debug = VAR_9;
  FUNC_0(VAR_7->debug, VAR_5, VAR_2,
         "%s: set debug=%x\n", VAR_7->name, VAR_7->debug);
  break;

 case 129:
  VAR_7->reorder_timeout = FUNC_1(VAR_9);
  FUNC_0(VAR_7->debug, VAR_5, VAR_2,
         "%s: set reorder_timeout=%d\n", VAR_7->name,
         VAR_7->reorder_timeout);
  break;

 default:
  VAR_10 = -VAR_1;
  break;
 }

 return VAR_10;
}
