
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {int httpversion; TYPE_1__* handler; } ;
struct TYPE_2__ {int protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct connectdata const*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(const struct connectdata *VAR_4)
{


  return VAR_4->handler->protocol&(VAR_0|VAR_1) ||
    FUNC_0(VAR_4, VAR_2);

}
