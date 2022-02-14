
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rcv_nxt; } ;
struct nes_cm_node {int state; int cm_core; TYPE_1__ tcp_cntxt; int ref_count; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;






 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nes_cm_node*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nes_cm_node*) ;
 int FUNC_3 (struct nes_cm_node*,int ) ;
 int FUNC_4 (int ,char*,struct nes_cm_node*,int,...) ;
 int FUNC_5 (int ,struct nes_cm_node*) ;
 int FUNC_6 (struct nes_cm_node*,int *,int ,int,int ) ;
 int FUNC_7 (struct nes_cm_node*,int *) ;
 int FUNC_8 (struct nes_cm_node*,int *) ;
 int FUNC_9 (struct nes_cm_node*,int *) ;

__attribute__((used)) static void FUNC_10(struct nes_cm_node *VAR_6)
{
 FUNC_4(VAR_4, "Received FIN, cm_node = %p, state = %u. "
    "refcnt=%d\n", VAR_6, VAR_6->state,
    FUNC_1(&VAR_6->ref_count));
 switch (VAR_6->state) {
 case 131:
 case 130:
 case 136:
 case 133:
  VAR_6->tcp_cntxt.rcv_nxt++;
  FUNC_2(VAR_6);
  VAR_6->state = VAR_3;
  FUNC_8(VAR_6, ((void*)0));
  break;
 case 132:
  FUNC_3(VAR_6, VAR_0);
  VAR_6->tcp_cntxt.rcv_nxt++;
  FUNC_2(VAR_6);
  VAR_6->state = VAR_1;
  FUNC_0(VAR_6);
  FUNC_9(VAR_6, ((void*)0));
  break;
 case 135:
  VAR_6->tcp_cntxt.rcv_nxt++;
  FUNC_2(VAR_6);
  VAR_6->state = VAR_2;
  FUNC_7(VAR_6, ((void*)0));



  break;
 case 134:
  VAR_6->tcp_cntxt.rcv_nxt++;
  FUNC_2(VAR_6);
  VAR_6->state = 129;
  FUNC_7(VAR_6, ((void*)0));
  FUNC_6(VAR_6, ((void*)0), VAR_5, 1, 0);
  break;
 case 129:
  VAR_6->tcp_cntxt.rcv_nxt++;
  FUNC_2(VAR_6);
  VAR_6->state = VAR_1;
  FUNC_5(VAR_6->cm_core, VAR_6);
  break;
 case 128:
 default:
  FUNC_4(VAR_4, "Error Rcvd FIN for node-%p state = %d\n",
   VAR_6, VAR_6->state);
  break;
 }
}
