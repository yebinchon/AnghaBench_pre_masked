
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tcpip_callback_fn ;
struct TYPE_3__ {void* ctx; int function; } ;
struct TYPE_4__ {TYPE_1__ cb; } ;
struct tcpip_msg {TYPE_2__ msg; int type; } ;
struct tcpip_callback_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

struct tcpip_callback_msg* FUNC_1(tcpip_callback_fn VAR_2, void *VAR_3)
{
  struct tcpip_msg *VAR_4 = (struct tcpip_msg *)FUNC_0(VAR_0);
  if (VAR_4 == ((void*)0)) {
    return ((void*)0);
  }
  VAR_4->type = VAR_1;
  VAR_4->msg.cb.function = VAR_2;
  VAR_4->msg.cb.ctx = VAR_3;
  return (struct tcpip_callback_msg*)VAR_4;
}
