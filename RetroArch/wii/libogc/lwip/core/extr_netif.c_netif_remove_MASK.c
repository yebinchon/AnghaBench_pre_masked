
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif {struct netif* next; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 struct netif* VAR_1 ;
 struct netif* VAR_2 ;

void FUNC_1(struct netif * VAR_3)
{
  if ( VAR_3 == ((void*)0) ) return;


  if (VAR_2 == VAR_3) {
    VAR_2 = VAR_3->next;
  }
  else {

    struct netif * VAR_4;
    for (VAR_4 = VAR_2; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
      if (VAR_4->next == VAR_3) {
        VAR_4->next = VAR_3->next;
        break;
        }
    }
    if (VAR_4 == ((void*)0))
      return;
  }

  if (VAR_1 == VAR_3)

    VAR_1 = ((void*)0);
  FUNC_0( VAR_0, ("netif_remove: removed netif\n") );
}
