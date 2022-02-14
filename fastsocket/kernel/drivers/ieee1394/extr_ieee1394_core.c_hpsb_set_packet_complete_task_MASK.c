
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_packet {void (* complete_routine ) (void*) ;void* complete_data; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct hpsb_packet *VAR_0,
       void (*VAR_1)(void *), void *VAR_2)
{
 FUNC_0(VAR_0->complete_routine != ((void*)0));
 VAR_0->complete_routine = VAR_1;
 VAR_0->complete_data = VAR_2;
 return;
}
