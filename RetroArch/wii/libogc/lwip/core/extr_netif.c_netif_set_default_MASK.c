
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif {char* name; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 struct netif* VAR_1 ;

void
FUNC_1(struct netif *VAR_2)
{
  VAR_1 = VAR_2;
  FUNC_0(VAR_0, ("netif: setting default interface %c%c\n",
           VAR_2 ? VAR_2->name[0] : '\'', VAR_2 ? VAR_2->name[1] : '\''));
}
