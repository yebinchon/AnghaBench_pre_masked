
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t word ;
typedef int dword ;
typedef size_t byte ;
struct TYPE_9__ {size_t* ch_ncci; scalar_t__* ncci_plci; int Id; scalar_t__* ncci_state; TYPE_3__* ncci; } ;
struct TYPE_8__ {size_t data_ack_out; scalar_t__ data_ack_pending; TYPE_1__* DataAck; } ;
struct TYPE_7__ {scalar_t__ Id; int appl; scalar_t__ tel; TYPE_4__* adapter; } ;
struct TYPE_6__ {int Handle; int Number; } ;
typedef TYPE_2__ PLCI ;
typedef TYPE_3__ NCCI ;
typedef TYPE_4__ DIVA_CAPI_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int,int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(PLCI *VAR_4, byte VAR_5)
{
  dword VAR_6;
  DIVA_CAPI_ADAPTER * VAR_7;
  NCCI *VAR_8;
  word VAR_9;

  VAR_7 = VAR_4->adapter;
  VAR_9 = VAR_7->ch_ncci[VAR_5];
  VAR_8 = &(VAR_7->ncci[VAR_9]);
  if (VAR_8->data_ack_pending)
  {
    if (VAR_7->ncci_state[VAR_9] && (VAR_7->ncci_plci[VAR_9] == VAR_4->Id))
    {
      VAR_6 = (((dword)VAR_9)<<16)|((word)VAR_4->Id<<8)|VAR_7->Id;
      if(VAR_4->tel) VAR_6|=VAR_1;
      FUNC_0(VAR_4->appl,VAR_3|VAR_0,VAR_6,VAR_8->DataAck[VAR_8->data_ack_out].Number,
            "ww",VAR_8->DataAck[VAR_8->data_ack_out].Handle,0);
    }
    (VAR_8->data_ack_out)++;
    if (VAR_8->data_ack_out == VAR_2)
      VAR_8->data_ack_out = 0;
    (VAR_8->data_ack_pending)--;
  }
}
