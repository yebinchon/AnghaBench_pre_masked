
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uip_tcpseg {int p; } ;


 int FUNC_0 (struct uip_tcpseg*,struct uip_tcpseg*,int) ;
 struct uip_tcpseg* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

struct uip_tcpseg* FUNC_3(struct uip_tcpseg *VAR_1)
{
 struct uip_tcpseg *VAR_2;

 VAR_2 = FUNC_1(&VAR_0);
 if(VAR_2==((void*)0)) return ((void*)0);

 FUNC_0(VAR_2,VAR_1,sizeof(struct uip_tcpseg));
 FUNC_2(VAR_2->p);

 return VAR_2;
}
