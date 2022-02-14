
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct getout {int flags; struct getout* next; } ;
struct OperationConfig {int default_node_flags; struct getout* url_last; struct getout* url_list; } ;


 struct getout* FUNC_0 (int,int) ;

struct getout *FUNC_1(struct OperationConfig *VAR_0)
{
  struct getout *VAR_1 = FUNC_0(1, sizeof(struct getout));
  struct getout *VAR_2 = VAR_0->url_last;
  if(VAR_1) {

    if(VAR_2)
      VAR_2->next = VAR_1;
    else
      VAR_0->url_list = VAR_1;


    VAR_0->url_last = VAR_1;

    VAR_1->flags = VAR_0->default_node_flags;
  }
  return VAR_1;
}
