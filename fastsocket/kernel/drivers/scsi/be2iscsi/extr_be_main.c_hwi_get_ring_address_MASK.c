
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phys_addr {int dummy; } ;
struct TYPE_4__ {struct phys_addr* ring_base; } ;
struct TYPE_3__ {struct phys_addr* ring_base; } ;
struct hwi_async_pdu_context {TYPE_2__ async_data; TYPE_1__ async_header; } ;



__attribute__((used)) static struct phys_addr *
FUNC_0(struct hwi_async_pdu_context *VAR_0,
       unsigned int VAR_1, unsigned int VAR_2)
{
 struct phys_addr *VAR_3 = ((void*)0);

 if (VAR_1)
  VAR_3 = VAR_0->async_header.ring_base;
 else
  VAR_3 = VAR_0->async_data.ring_base;

 return VAR_3 + VAR_2;
}
