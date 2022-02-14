
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {TYPE_1__* handler; } ;
struct TYPE_2__ {int (* connection_check ) (struct connectdata*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct connectdata*,int ) ;

__attribute__((used)) static int FUNC_1(struct connectdata *VAR_1,
                       void *VAR_2)
{

  (void)VAR_2;

  if(VAR_1->handler->connection_check) {

    VAR_1->handler->connection_check(VAR_1, VAR_0);
  }

  return 0;
}
