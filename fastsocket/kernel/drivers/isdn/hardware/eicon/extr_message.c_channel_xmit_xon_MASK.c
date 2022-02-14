
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ byte ;
struct TYPE_11__ {int XNum; TYPE_1__* X; scalar_t__ ReqCh; scalar_t__ Req; int Id; } ;
struct TYPE_10__ {int (* request ) (TYPE_4__*) ;int * ch_flow_control; } ;
struct TYPE_9__ {TYPE_4__ NL; TYPE_3__* adapter; TYPE_1__* NData; int * RBuffer; scalar_t__ nl_req; scalar_t__ nl_remove_id; } ;
struct TYPE_8__ {scalar_t__ PLength; int * P; } ;
typedef TYPE_2__ PLCI ;
typedef TYPE_3__ DIVA_CAPI_ADAPTER ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_2 (PLCI * VAR_3) {
  DIVA_CAPI_ADAPTER * VAR_4 = VAR_3->adapter;
  byte VAR_5;

  if (VAR_3->nl_req || !VAR_3->NL.Id || VAR_3->nl_remove_id) {
    return;
  }
  if ((VAR_5 = (byte)FUNC_0 (VAR_4, VAR_3)) == 0) {
    return;
  }
  VAR_4->ch_flow_control[VAR_5] &= ~VAR_1;
  VAR_4->ch_flow_control[VAR_5] |= VAR_2;

  VAR_3->NL.Req = VAR_3->nl_req = (byte)VAR_0;
  VAR_3->NL.ReqCh = VAR_5;
  VAR_3->NL.X = VAR_3->NData;
  VAR_3->NL.XNum = 1;
  VAR_3->NData[0].P = &VAR_3->RBuffer[0];
  VAR_3->NData[0].PLength = 0;

  VAR_3->adapter->request(&VAR_3->NL);
}
