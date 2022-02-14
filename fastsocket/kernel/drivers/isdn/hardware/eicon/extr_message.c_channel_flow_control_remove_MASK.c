
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int word ;
struct TYPE_5__ {scalar_t__* ch_flow_plci; scalar_t__* ch_flow_control; } ;
struct TYPE_4__ {scalar_t__ Id; TYPE_2__* adapter; } ;
typedef TYPE_1__ PLCI ;
typedef TYPE_2__ DIVA_CAPI_ADAPTER ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0 (PLCI * VAR_1) {
  DIVA_CAPI_ADAPTER * VAR_2 = VAR_1->adapter;
  word VAR_3;
  for(VAR_3=1;VAR_3<VAR_0+1;VAR_3++) {
    if (VAR_2->ch_flow_plci[VAR_3] == VAR_1->Id) {
      VAR_2->ch_flow_plci[VAR_3] = 0;
      VAR_2->ch_flow_control[VAR_3] = 0;
    }
  }
}
