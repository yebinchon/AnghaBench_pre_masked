
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* nextpart; struct TYPE_7__* firstpart; } ;
typedef TYPE_1__ curl_mimepart ;
typedef TYPE_1__ curl_mime ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(curl_mime *VAR_0)
{
  curl_mimepart *VAR_1;

  if(VAR_0) {
    FUNC_2(VAR_0);
    while(VAR_0->firstpart) {
      VAR_1 = VAR_0->firstpart;
      VAR_0->firstpart = VAR_1->nextpart;
      FUNC_0(VAR_1);
      FUNC_1(VAR_1);
    }
    FUNC_1(VAR_0);
  }
}
