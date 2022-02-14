
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int byte ;
struct TYPE_7__ {int* ch_flow_control; scalar_t__* ch_flow_plci; } ;
struct TYPE_6__ {scalar_t__ Id; TYPE_2__* adapter; } ;
typedef TYPE_1__ PLCI ;
typedef TYPE_2__ DIVA_CAPI_ADAPTER ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3 (PLCI * VAR_2) {
  DIVA_CAPI_ADAPTER * VAR_3;
  int VAR_4 = FUNC_0(VAR_3->ch_flow_control);
  int VAR_5, VAR_6 = 0;

  if ((!VAR_2) || (!VAR_2->Id) || ((VAR_3 = VAR_2->adapter) == ((void*)0))) {
    return;
  }

  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
    if ((VAR_3->ch_flow_control[VAR_5] & VAR_0) &&
        (VAR_3->ch_flow_control[VAR_5] & VAR_1) &&
        (VAR_2->Id == VAR_3->ch_flow_plci[VAR_5])) {
      FUNC_1 (VAR_2, (byte)VAR_5);
      VAR_6 = 1;
    }
  }

  if (VAR_6) {
    FUNC_2 (VAR_2);
  }
}
