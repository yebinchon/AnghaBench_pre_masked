
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef TYPE_1__* frame_rec_t ;
struct TYPE_2__ {scalar_t__ lr; struct TYPE_2__* up; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(void *VAR_1,void *VAR_2,void *VAR_3)
{
 register u32 VAR_4 = 0;
 register frame_rec_t VAR_5,VAR_6 = (frame_rec_t)VAR_2;

 VAR_5 = VAR_6;
 VAR_6 = VAR_3;
 if(!VAR_6) __asm__ __volatile__("mr %0,%%r1" : "=r"(VAR_6));

 FUNC_0("\n\tSTACK DUMP:");

 for(VAR_4=0;VAR_4<VAR_0-1 && VAR_6->up;VAR_6=VAR_6->up,VAR_4++) {
  if(VAR_4%4) FUNC_0(" --> ");
  else {
   if(VAR_4>0) FUNC_0(" -->\n\t");
   else FUNC_0("\n\t");
  }

  switch(VAR_4) {
   case 0:
    if(VAR_1) FUNC_0("%p",VAR_1);
    break;
   case 1:
    if(!VAR_5) VAR_5 = (frame_rec_t)FUNC_1(8);
    FUNC_0("%p",(void*)VAR_5);
    break;
   default:
    FUNC_0("%p",(void*)(VAR_6->up->lr));
    break;
  }
 }
}
