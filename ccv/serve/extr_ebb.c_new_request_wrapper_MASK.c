
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ebb_request ;
struct TYPE_3__ {int * (* new_request ) (TYPE_1__*) ;} ;
typedef TYPE_1__ ebb_connection ;


 int * FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static ebb_request*
FUNC_1(void *VAR_0)
{
  ebb_connection *VAR_1 = VAR_0;
  if(VAR_1->new_request)
    return VAR_1->new_request(VAR_1);
  return ((void*)0);
}
