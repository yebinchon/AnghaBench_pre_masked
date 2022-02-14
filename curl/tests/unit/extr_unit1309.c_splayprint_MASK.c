
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct Curl_tree {struct Curl_tree* smaller; struct Curl_tree* samen; TYPE_1__ key; struct Curl_tree* larger; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct Curl_tree * VAR_0, int VAR_1, char VAR_2)
{
  struct Curl_tree *VAR_3;
  int VAR_4;
  int VAR_5;
  if(VAR_0 == ((void*)0))
    return;

  FUNC_1(VAR_0->larger, VAR_1 + 1, VAR_2);
  for(VAR_4 = 0; VAR_4<VAR_1; VAR_4++)
    if(VAR_2)
      FUNC_0("  ");

  if(VAR_2) {
    FUNC_0("%ld.%ld[%d]", (long)VAR_0->key.tv_sec,
           (long)VAR_0->key.tv_usec, VAR_4);
  }

  for(VAR_5 = 0, VAR_3 = VAR_0->samen; VAR_3 != VAR_0; VAR_3 = VAR_3->samen, VAR_5++)
    ;

  if(VAR_2) {
    if(VAR_5)
      FUNC_0(" [%d more]\n", VAR_5);
    else
      FUNC_0("\n");
  }

  FUNC_1(VAR_0->smaller, VAR_1 + 1, VAR_2);
}
