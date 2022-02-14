
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t byte ;
struct TYPE_5__ {int* ch_flow_control; } ;
struct TYPE_4__ {TYPE_2__* adapter; } ;
typedef TYPE_1__ PLCI ;
typedef TYPE_2__ DIVA_CAPI_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0 (PLCI * VAR_3, byte VAR_4) {
  DIVA_CAPI_ADAPTER * VAR_5 = VAR_3->adapter;

  if (VAR_5->ch_flow_control[VAR_4] & VAR_0) {
    VAR_5->ch_flow_control[VAR_4] |= VAR_2;
    VAR_5->ch_flow_control[VAR_4] &= ~VAR_0;
    VAR_5->ch_flow_control[VAR_4] &= ~VAR_1;
  }
}
