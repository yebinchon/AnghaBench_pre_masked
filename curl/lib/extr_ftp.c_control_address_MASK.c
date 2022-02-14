
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {scalar_t__ socksproxy; scalar_t__ tunnel_proxy; } ;
struct connectdata {char* ip_addr_str; TYPE_2__ host; TYPE_1__ bits; } ;



__attribute__((used)) static char *FUNC_0(struct connectdata *VAR_0)
{




  if(VAR_0->bits.tunnel_proxy || VAR_0->bits.socksproxy)
    return VAR_0->host.name;

  return VAR_0->ip_addr_str;
}
