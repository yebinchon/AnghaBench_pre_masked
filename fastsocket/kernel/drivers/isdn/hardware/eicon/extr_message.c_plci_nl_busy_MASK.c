
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int byte ;
struct TYPE_5__ {size_t ncci_ring_list; TYPE_1__* adapter; scalar_t__ nl_req; } ;
struct TYPE_4__ {size_t* ncci_ch; int* ch_flow_control; } ;
typedef TYPE_2__ PLCI ;


 int VAR_0 ;

__attribute__((used)) static byte FUNC_0 (PLCI *VAR_1)
{

  return (VAR_1->nl_req
    || (VAR_1->ncci_ring_list
     && VAR_1->adapter->ncci_ch[VAR_1->ncci_ring_list]
     && (VAR_1->adapter->ch_flow_control[VAR_1->adapter->ncci_ch[VAR_1->ncci_ring_list]] & VAR_0)));
}
