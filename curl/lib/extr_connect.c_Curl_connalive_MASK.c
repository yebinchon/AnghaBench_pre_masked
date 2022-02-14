
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {scalar_t__* sock; TYPE_1__* ssl; } ;
struct TYPE_2__ {scalar_t__ use; } ;
typedef int RECV_TYPE_ARG4 ;
typedef int RECV_TYPE_ARG3 ;
typedef int RECV_TYPE_ARG2 ;
typedef int RECV_TYPE_ARG1 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct connectdata*) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;

bool FUNC_2(struct connectdata *VAR_3)
{

  if(VAR_3->ssl[VAR_1].use) {

    if(!FUNC_0(VAR_3))
      return 0;
  }
  return 1;
}
