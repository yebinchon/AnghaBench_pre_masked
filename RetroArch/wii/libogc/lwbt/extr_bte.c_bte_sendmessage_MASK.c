
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pbuf {scalar_t__ payload; } ;
struct ctrl_req_t {int * sent; struct bte_pcb* pcb; struct pbuf* p; } ;
struct bte_pcb {scalar_t__ state; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (struct ctrl_req_t*) ;
 scalar_t__ FUNC_2 (struct ctrl_req_t*) ;
 int VAR_10 ;
 struct ctrl_req_t* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct ctrl_req_t*) ;
 struct pbuf* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (scalar_t__,void*,int ) ;

s32 FUNC_7(struct bte_pcb *VAR_11,void *VAR_12,u16 VAR_13)
{
 s32 VAR_14 = VAR_3;
 struct pbuf *VAR_15;
 struct ctrl_req_t *VAR_16;



 if(VAR_11==((void*)0) || VAR_12==((void*)0) || VAR_13==0) return VAR_3;
 if(VAR_11->state==VAR_9 || VAR_11->state==VAR_8) return VAR_0;

 if((VAR_16=FUNC_3(&VAR_10))==((void*)0)) {
  FUNC_0("bte_sendmessage: Could not allocate memory for request\n");
  return VAR_1;
 }

 if((VAR_15=FUNC_5(VAR_7,(1 + VAR_13),VAR_6))==((void*)0)) {
  FUNC_0("bte_sendmessage: Could not allocate memory for pbuf\n");
  FUNC_4(&VAR_10,VAR_16);
  return VAR_1;
 }

 ((u8*)VAR_15->payload)[0] = (VAR_5|VAR_4);
 FUNC_6(VAR_15->payload+1,VAR_12,VAR_13);

 VAR_16->p = VAR_15;
 VAR_16->pcb = VAR_11;
 VAR_16->sent = ((void*)0);
 VAR_14 = FUNC_1(VAR_16);
 if(VAR_14==VAR_2) VAR_14 = FUNC_2(VAR_16);

 FUNC_4(&VAR_10,VAR_16);
 return VAR_14;
}
