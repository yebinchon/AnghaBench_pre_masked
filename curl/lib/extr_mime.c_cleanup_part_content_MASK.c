
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ curl_off_t ;
struct TYPE_3__ {int kind; int encstate; scalar_t__ datasize; int * fp; int * data; void* arg; int (* freefunc ) (void*) ;int * seekfunc; int * readfunc; } ;
typedef TYPE_1__ curl_mimepart ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(curl_mimepart *VAR_1)
{
  if(VAR_1->freefunc)
    VAR_1->freefunc(VAR_1->arg);

  VAR_1->readfunc = ((void*)0);
  VAR_1->seekfunc = ((void*)0);
  VAR_1->freefunc = ((void*)0);
  VAR_1->arg = (void *) VAR_1;
  VAR_1->data = ((void*)0);
  VAR_1->fp = ((void*)0);
  VAR_1->datasize = (curl_off_t) 0;
  FUNC_0(&VAR_1->encstate);
  VAR_1->kind = VAR_0;
}
