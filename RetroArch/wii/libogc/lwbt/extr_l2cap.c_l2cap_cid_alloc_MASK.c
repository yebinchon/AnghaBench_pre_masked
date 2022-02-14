
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16_t ;
struct l2cap_pcb {scalar_t__ scid; struct l2cap_pcb* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct l2cap_pcb* VAR_2 ;

__attribute__((used)) static u16_t FUNC_0(void)
{
 u16_t VAR_3;
 struct l2cap_pcb *VAR_4;

 for (VAR_3 = VAR_1; VAR_3 < VAR_0; ++VAR_3) {
  for(VAR_4 = VAR_2; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
   if(VAR_4->scid == VAR_3) {
    break;
   }
  }
  if(VAR_4 == ((void*)0)) {
   return VAR_3;
  }
 }
 return 0;
}
