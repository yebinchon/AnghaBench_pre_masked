
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct PortMappingParserData {struct PortMapping* l_head; } ;
struct PortMapping {struct PortMapping* l_next; } ;


 int FUNC_0 (struct PortMapping*) ;

void
FUNC_1(struct PortMappingParserData * VAR_0)
{
 struct PortMapping * VAR_1;
 while((VAR_1 = VAR_0->l_head) != ((void*)0))
 {

  VAR_0->l_head = VAR_1->l_next;
  FUNC_0(VAR_1);
 }
}
