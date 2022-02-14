
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8_t ;
struct netif {char num; char* name; struct netif* next; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 struct netif* VAR_1 ;

struct netif *
FUNC_1(char *VAR_2)
{
  struct netif *VAR_3;
  u8_t VAR_4;

  if (VAR_2 == ((void*)0)) {
    return ((void*)0);
  }

  VAR_4 = VAR_2[2] - '0';

  for(VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
    if (VAR_4 == VAR_3->num &&
       VAR_2[0] == VAR_3->name[0] &&
       VAR_2[1] == VAR_3->name[1]) {
      FUNC_0(VAR_0, ("netif_find: found %c%c\n", VAR_2[0], VAR_2[1]));
      return VAR_3;
    }
  }
  FUNC_0(VAR_0, ("netif_find: didn't find %c%c\n", VAR_2[0], VAR_2[1]));
  return ((void*)0);
}
