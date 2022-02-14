
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct el_subpacket_handler {scalar_t__ class; struct el_subpacket* (* handler ) (struct el_subpacket*) ;struct el_subpacket_handler* next; } ;
struct el_subpacket {scalar_t__ class; } ;


 struct el_subpacket* FUNC_0 (struct el_subpacket*) ;
 struct el_subpacket_handler* VAR_0 ;

__attribute__((used)) static struct el_subpacket *
FUNC_1(struct el_subpacket *VAR_1)
{
 struct el_subpacket *VAR_2 = ((void*)0);
 struct el_subpacket_handler *VAR_3 = VAR_0;

 for (; VAR_3 && VAR_3->class != VAR_1->class; VAR_3 = VAR_3->next);
 if (VAR_3) VAR_2 = VAR_3->handler(VAR_1);

 return VAR_2;
}
