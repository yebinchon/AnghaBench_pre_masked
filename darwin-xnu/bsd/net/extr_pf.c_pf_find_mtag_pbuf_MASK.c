
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pf_mtag {int dummy; } ;
struct TYPE_3__ {struct pf_mtag* pb_pftag; } ;
typedef TYPE_1__ pbuf_t ;



struct pf_mtag *
FUNC_0(pbuf_t *VAR_0)
{

 return (VAR_0->pb_pftag);
}
