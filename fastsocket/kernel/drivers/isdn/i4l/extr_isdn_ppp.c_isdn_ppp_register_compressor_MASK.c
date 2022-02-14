
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isdn_ppp_compressor {struct isdn_ppp_compressor* prev; struct isdn_ppp_compressor* next; } ;


 struct isdn_ppp_compressor* VAR_0 ;

int FUNC_0(struct isdn_ppp_compressor *VAR_1)
{
 VAR_1->next = VAR_0;
 VAR_1->prev = ((void*)0);
 if(VAR_0) {
  VAR_0->prev = VAR_1;
 }
 VAR_0 = VAR_1;
 return 0;
}
