
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pbuf {scalar_t__ payload; } ;
struct bte_pcb {scalar_t__ state; int data_pcb; } ;
typedef int s32 ;
typedef int err_t ;


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
 struct pbuf* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct pbuf*) ;
 int FUNC_3 (int ,struct pbuf*) ;
 int FUNC_4 (scalar_t__,void*,int ) ;

s32 FUNC_5(struct bte_pcb *VAR_9,void *VAR_10,u16 VAR_11)
{
 err_t VAR_12;
 struct pbuf *VAR_13;

 if(VAR_9==((void*)0) || VAR_10==((void*)0) || VAR_11==0) return VAR_2;
 if(VAR_9->state==VAR_8 || VAR_9->state==VAR_7) return VAR_0;

 if((VAR_13=FUNC_1(VAR_6,(1 + VAR_11),VAR_5))==((void*)0)) {
  FUNC_0("bte_senddata: Could not allocate memory for pbuf\n");
  return VAR_1;
 }

 ((u8*)VAR_13->payload)[0] = (VAR_4|VAR_3);
 FUNC_4(VAR_13->payload+1,VAR_10,VAR_11);

 VAR_12 = FUNC_3(VAR_9->data_pcb,VAR_13);
 FUNC_2(VAR_13);

 return VAR_12;
}
