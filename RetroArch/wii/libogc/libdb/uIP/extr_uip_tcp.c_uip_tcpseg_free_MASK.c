
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct uip_tcpseg {int * p; } ;


 int FUNC_0 (int *,struct uip_tcpseg*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

u8_t FUNC_2(struct uip_tcpseg *VAR_1)
{
 u8_t VAR_2 = 0;

 if(VAR_1!=((void*)0)) {
  if(VAR_1->p!=((void*)0)) {
   VAR_2 = FUNC_1(VAR_1->p);
  }
  FUNC_0(&VAR_0,VAR_1);
 }
 return VAR_2;
}
