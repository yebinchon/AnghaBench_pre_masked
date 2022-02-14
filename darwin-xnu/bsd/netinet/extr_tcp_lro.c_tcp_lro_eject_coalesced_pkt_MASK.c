
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct TYPE_2__ {int * lr_tcphdr; int * lr_mtail; struct mbuf* lr_mhead; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static struct mbuf*
FUNC_0(int VAR_1)
{
 struct mbuf *VAR_2 = ((void*)0);
 VAR_2 = VAR_0[VAR_1].lr_mhead;
 VAR_0[VAR_1].lr_mhead =
  VAR_0[VAR_1].lr_mtail = ((void*)0);
 VAR_0[VAR_1].lr_tcphdr = ((void*)0);
 return VAR_2;
}
