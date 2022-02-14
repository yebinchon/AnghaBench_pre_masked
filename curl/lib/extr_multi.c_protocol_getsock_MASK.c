
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {int * sock; TYPE_1__* handler; } ;
typedef int curl_socket_t ;
struct TYPE_2__ {int (* proto_getsock ) (struct connectdata*,int *) ;} ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct connectdata*,int *) ;

__attribute__((used)) static int FUNC_3(struct connectdata *VAR_1,
                            curl_socket_t *VAR_2)
{
  if(VAR_1->handler->proto_getsock)
    return VAR_1->handler->proto_getsock(VAR_1, VAR_2);



  VAR_2[0] = VAR_1->sock[VAR_0];
  return FUNC_0(0) | FUNC_1(0);
}
