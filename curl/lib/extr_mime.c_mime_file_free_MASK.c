
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * data; int * fp; } ;
typedef TYPE_1__ curl_mimepart ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
  curl_mimepart *VAR_1 = (curl_mimepart *) VAR_0;

  if(VAR_1->fp) {
    FUNC_1(VAR_1->fp);
    VAR_1->fp = ((void*)0);
  }
  FUNC_0(VAR_1->data);
  VAR_1->data = ((void*)0);
}
