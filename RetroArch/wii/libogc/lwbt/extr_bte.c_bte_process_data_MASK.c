
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u16_t ;
struct bte_pcb {int cbarg; int (* recv ) (int ,void*,int ) ;} ;






 int FUNC_0 (char*,struct bte_pcb*) ;
 int FUNC_1 (int ,void*,int ) ;

__attribute__((used)) static void FUNC_2(struct bte_pcb *VAR_0,u8_t VAR_1,void *VAR_2,u16_t VAR_3)
{
 FUNC_0("bte_process_data(%p)\n",VAR_0);
 switch(VAR_1) {
  case 130:
   if(VAR_0->recv!=((void*)0)) VAR_0->recv(VAR_0->cbarg,VAR_2,VAR_3);
   break;
  case 129:
  case 128:
  case 131:
   break;
  default:
   break;
 }
}
