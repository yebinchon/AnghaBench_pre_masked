
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct getout {struct getout* infile; struct getout* outfile; struct getout* url; struct getout* next; } ;
struct OperationConfig {struct getout* url_list; } ;


 int FUNC_0 (struct getout*) ;

void FUNC_1(struct OperationConfig *VAR_0)
{
  if(VAR_0) {
    struct getout *VAR_1;
    struct getout *VAR_2 = VAR_0->url_list;

    while(VAR_2) {
      VAR_1 = VAR_2->next;
      FUNC_0(VAR_2->url);
      FUNC_0(VAR_2->outfile);
      FUNC_0(VAR_2->infile);
      FUNC_0(VAR_2);
      VAR_2 = VAR_1;
    }
    VAR_0->url_list = ((void*)0);
  }
}
