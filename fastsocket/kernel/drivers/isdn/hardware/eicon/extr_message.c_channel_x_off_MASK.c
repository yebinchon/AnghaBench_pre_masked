
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t byte ;
struct TYPE_5__ {int* ch_flow_control; int ch_flow_control_pending; int * ch_flow_plci; } ;
struct TYPE_4__ {int Id; TYPE_2__* adapter; } ;
typedef TYPE_1__ PLCI ;
typedef TYPE_2__ DIVA_CAPI_ADAPTER ;


 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0 (PLCI * VAR_2, byte VAR_3, byte VAR_4) {
  DIVA_CAPI_ADAPTER * VAR_5 = VAR_2->adapter;
  if ((VAR_5->ch_flow_control[VAR_3] & VAR_1) == 0) {
    VAR_5->ch_flow_control[VAR_3] |= (VAR_0 | VAR_4);
    VAR_5->ch_flow_plci[VAR_3] = VAR_2->Id;
    VAR_5->ch_flow_control_pending++;
  }
}
