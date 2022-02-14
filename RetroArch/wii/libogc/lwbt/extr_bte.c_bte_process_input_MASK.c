
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pbuf {int* payload; int tot_len; } ;
struct l2cap_pcb {int dummy; } ;
struct bte_pcb {scalar_t__ state; } ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (char*,struct bte_pcb*,struct pbuf*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct bte_pcb*,int,int*,int ) ;
 int FUNC_2 (struct bte_pcb*,int,int*,int ) ;

__attribute__((used)) static err_t FUNC_3(void *VAR_6,struct l2cap_pcb *VAR_7,struct pbuf *VAR_8,err_t VAR_9)
{
 u8 *VAR_10;
 u16 VAR_11;
 u8 VAR_12,VAR_13,VAR_14;
 struct bte_pcb *VAR_15 = (struct bte_pcb*)VAR_6;

 FUNC_0("bte_process_input(%p,%p)\n",VAR_15,VAR_8);

 if(VAR_15->state==VAR_5
  || VAR_15->state==VAR_4) return VAR_0;

 VAR_10 = VAR_8->payload;
 VAR_11 = VAR_8->tot_len;

 VAR_11--;
 VAR_12 = *VAR_10++;
 VAR_13 = (VAR_12&VAR_3);
 VAR_14 = (VAR_12&VAR_2);
 switch(VAR_13) {
  case 129:
   FUNC_2(VAR_15,VAR_14,VAR_10,VAR_11);
   break;
  case 128:
   break;
  case 130:
   FUNC_1(VAR_15,VAR_14,VAR_10,VAR_11);
   break;
  default:
   break;
 }
 return VAR_1;
}
