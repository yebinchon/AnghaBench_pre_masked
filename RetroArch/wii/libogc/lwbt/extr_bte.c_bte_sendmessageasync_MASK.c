
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pbuf {scalar_t__ payload; } ;
struct ctrl_req_t {int (* sent ) (void*,struct bte_pcb*,u8) ;struct bte_pcb* pcb; struct pbuf* p; } ;
struct bte_pcb {scalar_t__ state; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct ctrl_req_t*) ;
 int VAR_9 ;
 struct ctrl_req_t* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct ctrl_req_t*) ;
 struct pbuf* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (scalar_t__,void*,int ) ;

s32 FUNC_6(struct bte_pcb *VAR_10,void *VAR_11,u16 VAR_12,s32 (*VAR_13)(void *VAR_14,struct bte_pcb *VAR_15,u8 VAR_16))
{
 struct pbuf *VAR_17;
 struct ctrl_req_t *VAR_18;



 if(VAR_10==((void*)0) || VAR_11==((void*)0) || VAR_12==0) return VAR_2;
 if(VAR_10->state==VAR_8 || VAR_10->state==VAR_7) return VAR_0;

 if((VAR_18=FUNC_2(&VAR_9))==((void*)0)) {
  FUNC_0("bte_sendmessageasync: Could not allocate memory for request\n");
  return VAR_1;
 }

 if((VAR_17=FUNC_4(VAR_6,(1 + VAR_12),VAR_5))==((void*)0)) {
  FUNC_0("bte_sendmessageasync: Could not allocate memory for pbuf\n");
  FUNC_3(&VAR_9,VAR_18);
  return VAR_1;
 }

 ((u8*)VAR_17->payload)[0] = (VAR_4|VAR_3);
 FUNC_5(VAR_17->payload+1,VAR_11,VAR_12);

 VAR_18->p = VAR_17;
 VAR_18->pcb = VAR_10;
 VAR_18->sent = VAR_13;
 return FUNC_1(VAR_18);
}
