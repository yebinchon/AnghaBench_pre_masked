
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {TYPE_1__* handler; } ;
typedef int curl_socket_t ;
struct TYPE_2__ {int (* doing_getsock ) (struct connectdata*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct connectdata*,int *) ;

__attribute__((used)) static int FUNC_1(struct connectdata *VAR_1,
                         curl_socket_t *VAR_2)
{
  if(VAR_1 && VAR_1->handler->doing_getsock)
    return VAR_1->handler->doing_getsock(VAR_1, VAR_2);
  return VAR_0;
}
