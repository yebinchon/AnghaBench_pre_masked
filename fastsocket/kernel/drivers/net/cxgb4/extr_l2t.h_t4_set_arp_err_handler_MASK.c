
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
typedef int arp_err_handler_t ;
struct TYPE_2__ {int arp_err_handler; void* handle; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_1(struct sk_buff *VAR_0, void *VAR_1,
       arp_err_handler_t VAR_2)
{
 FUNC_0(VAR_0)->handle = VAR_1;
 FUNC_0(VAR_0)->arp_err_handler = VAR_2;
}
