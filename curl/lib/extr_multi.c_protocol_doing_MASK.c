
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {TYPE_1__* handler; } ;
struct TYPE_2__ {int (* doing ) (struct connectdata*,int*) ;} ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct connectdata*,int*) ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_3, bool *VAR_4)
{
  CURLcode VAR_5 = VAR_0;

  if(VAR_3 && VAR_3->handler->doing) {
    *VAR_4 = VAR_1;
    VAR_5 = VAR_3->handler->doing(VAR_3, VAR_4);
  }
  else
    *VAR_4 = VAR_2;

  return VAR_5;
}
