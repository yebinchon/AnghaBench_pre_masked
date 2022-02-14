
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct curl_llist_element {struct curl_llist_element* next; struct connectdata* ptr; } ;
struct connectdata {int * bundle; } ;
struct TYPE_2__ {struct curl_llist_element* head; } ;
struct connectbundle {int num_connections; TYPE_1__ conn_list; } ;


 int FUNC_0 (TYPE_1__*,struct curl_llist_element*,int *) ;

__attribute__((used)) static int FUNC_1(struct connectbundle *VAR_0,
                              struct connectdata *VAR_1)
{
  struct curl_llist_element *VAR_2;

  VAR_2 = VAR_0->conn_list.head;
  while(VAR_2) {
    if(VAR_2->ptr == VAR_1) {
      FUNC_0(&VAR_0->conn_list, VAR_2, ((void*)0));
      VAR_0->num_connections--;
      VAR_1->bundle = ((void*)0);
      return 1;
    }
    VAR_2 = VAR_2->next;
  }
  return 0;
}
