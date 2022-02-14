
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int* ch_flow_control; int last_flow_control_ch; scalar_t__* ch_flow_plci; } ;
struct TYPE_7__ {scalar_t__ Id; TYPE_1__* adapter; } ;
struct TYPE_6__ {int manufacturer_features; } ;
typedef TYPE_2__ PLCI ;
typedef TYPE_3__ DIVA_CAPI_ADAPTER ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1 (DIVA_CAPI_ADAPTER * VAR_2, PLCI * VAR_3) {
  int VAR_4 = FUNC_0(VAR_2->ch_flow_control);
  int VAR_5;

  if (!(VAR_3->adapter->manufacturer_features & VAR_0)) {
    return (0);
  }

  if (VAR_2->last_flow_control_ch >= VAR_4) {
    VAR_2->last_flow_control_ch = 1;
  }
  for (VAR_5=VAR_2->last_flow_control_ch; VAR_5 < VAR_4; VAR_5++) {
    if ((VAR_2->ch_flow_control[VAR_5] & VAR_1) &&
        (VAR_3->Id == VAR_2->ch_flow_plci[VAR_5])) {
      VAR_2->last_flow_control_ch = VAR_5+1;
      return (VAR_5);
    }
  }

  for (VAR_5 = 1; VAR_5 < VAR_2->last_flow_control_ch; VAR_5++) {
    if ((VAR_2->ch_flow_control[VAR_5] & VAR_1) &&
        (VAR_3->Id == VAR_2->ch_flow_plci[VAR_5])) {
      VAR_2->last_flow_control_ch = VAR_5+1;
      return (VAR_5);
    }
  }

  return (0);
}
