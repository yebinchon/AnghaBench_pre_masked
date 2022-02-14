
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int kern_return_t ;
typedef int * ipc_port_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {int * ith_special_reply_port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ,scalar_t__) ;

__attribute__((used)) static kern_return_t
FUNC_5(
 thread_t VAR_4,
 boolean_t VAR_5)
{
 ipc_port_t VAR_6 = VAR_4->ith_special_reply_port;

 FUNC_1(VAR_6);


 if (VAR_5 == VAR_0 && FUNC_0(VAR_6)) {
  FUNC_3(VAR_6);
  return VAR_2;
 }

 VAR_4->ith_special_reply_port = ((void*)0);
 FUNC_4(VAR_6, ((void*)0),
  VAR_1, VAR_0);


 FUNC_2(VAR_6);
 return VAR_3;
}
