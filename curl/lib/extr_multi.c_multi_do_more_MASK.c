
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {TYPE_1__* handler; } ;
struct TYPE_2__ {int (* do_more ) (struct connectdata*,int*) ;} ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (struct connectdata*) ;
 int FUNC_1 (struct connectdata*,int*) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_1, int *VAR_2)
{
  CURLcode VAR_3 = VAR_0;

  *VAR_2 = 0;

  if(VAR_1->handler->do_more)
    VAR_3 = VAR_1->handler->do_more(VAR_1, VAR_2);

  if(!VAR_3 && (*VAR_2 == 1))

    FUNC_0(VAR_1);

  return VAR_3;
}
