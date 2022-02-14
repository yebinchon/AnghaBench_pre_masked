
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif {int flags; struct netif* next; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct netif*) ;
 struct netif* VAR_2 ;
 scalar_t__ FUNC_2 (struct netif*) ;
 struct netif* VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct netif*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct netif*) ;

void
FUNC_7(struct netif *VAR_4)
{
  if (VAR_4 == ((void*)0)) {
    return;
  }







  if (FUNC_2(VAR_4)) {

    FUNC_4(VAR_4);
  }

  FUNC_6(VAR_4);


  if (VAR_3 == VAR_4) {
    VAR_3 = VAR_4->next;
  } else {

    struct netif * VAR_5;
    for (VAR_5 = VAR_3; VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
      if (VAR_5->next == VAR_4) {
        VAR_5->next = VAR_4->next;
        break;
      }
    }
    if (VAR_5 == ((void*)0))
      return;
  }
  FUNC_5();

  if (VAR_2 == VAR_4) {

    FUNC_3(((void*)0));
  }
  FUNC_0( VAR_0, ("netif_remove: removed netif\n") );
}
