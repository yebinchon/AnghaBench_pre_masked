
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t word ;
typedef void* byte ;
struct TYPE_15__ {int XNum; size_t ReqCh; void* Req; int Id; TYPE_1__* X; } ;
struct TYPE_14__ {int Length; int Flags; int P; } ;
struct TYPE_13__ {size_t* ncci_next; size_t* ncci_ch; int* ch_flow_control; scalar_t__* ncci_state; int (* request ) (TYPE_6__*) ;int Id; TYPE_3__* ncci; } ;
struct TYPE_12__ {size_t data_out; TYPE_5__* DBuffer; scalar_t__ data_pending; } ;
struct TYPE_11__ {size_t ncci_ring_list; size_t send_disc; scalar_t__ B2_prot; scalar_t__ B3_prot; int data_sent; int command; TYPE_6__ NL; void* nl_req; TYPE_1__* NData; int data_sent_ptr; int appl; TYPE_4__* adapter; } ;
struct TYPE_10__ {int PLength; void* P; } ;
typedef TYPE_2__ PLCI ;
typedef TYPE_3__ NCCI ;
typedef TYPE_4__ DIVA_CAPI_ADAPTER ;
typedef TYPE_5__ DATA_B3_DESC ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 void* FUNC_0 (int ,int ) ;
 int VAR_11 ;
 int FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int ,int ,void*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 void* VAR_12 ;
 void* VAR_13 ;

__attribute__((used)) static void FUNC_6(PLCI *VAR_14)
{
  DIVA_CAPI_ADAPTER * VAR_15;
  DATA_B3_DESC * VAR_16;
  NCCI *VAR_17;
  word VAR_18;

  if (!VAR_14->nl_req && VAR_14->ncci_ring_list)
  {
    VAR_15 = VAR_14->adapter;
    VAR_18 = VAR_14->ncci_ring_list;
    do
    {
      VAR_18 = VAR_15->ncci_next[VAR_18];
      VAR_17 = &(VAR_15->ncci[VAR_18]);
      if (!(VAR_15->ncci_ch[VAR_18]
         && (VAR_15->ch_flow_control[VAR_15->ncci_ch[VAR_18]] & VAR_9)))
      {
        if (VAR_17->data_pending)
        {
          if ((VAR_15->ncci_state[VAR_18] == VAR_4)
           || (VAR_15->ncci_state[VAR_18] == VAR_5)
           || (VAR_14->send_disc == VAR_18))
          {
            VAR_16 = &(VAR_17->DBuffer[VAR_17->data_out]);
            if ((VAR_14->B2_prot == VAR_0)
             || (VAR_14->B2_prot == VAR_1)
             || (VAR_14->B2_prot == VAR_2))
            {
              VAR_14->NData[1].P = FUNC_0 (VAR_14->appl, VAR_16->P);
              VAR_14->NData[1].PLength = VAR_16->Length;
              if (VAR_16->Flags & 0x10)
                VAR_14->NData[0].P = VAR_12;
              else
                VAR_14->NData[0].P = VAR_13;
              VAR_14->NData[0].PLength = 1 ;
              VAR_14->NL.XNum = 2;
              VAR_14->NL.Req = VAR_14->nl_req = (byte)((VAR_16->Flags&0x07)<<4 |VAR_7);
            }
            else
            {
              VAR_14->NData[0].P = FUNC_0 (VAR_14->appl, VAR_16->P);
              VAR_14->NData[0].PLength = VAR_16->Length;
              if (VAR_16->Flags & 0x10)
                VAR_14->NL.Req = VAR_14->nl_req = (byte)VAR_10;

              else if ((VAR_14->B3_prot == VAR_3) && (VAR_16->Flags & 0x01))
                VAR_14->NL.Req = VAR_14->nl_req = (byte)VAR_6;

              else
                VAR_14->NL.Req = VAR_14->nl_req = (byte)((VAR_16->Flags&0x07)<<4 |VAR_7);
            }
            VAR_14->NL.X = VAR_14->NData;
            VAR_14->NL.ReqCh = VAR_15->ncci_ch[VAR_18];
            FUNC_2(1,FUNC_3("%x:DREQ(%x:%x)",VAR_15->Id,VAR_14->NL.Id,VAR_14->NL.Req));
            VAR_14->data_sent = 1;
            VAR_14->data_sent_ptr = VAR_16->P;
            VAR_15->request(&VAR_14->NL);
          }
          else {
            FUNC_1 (VAR_14, VAR_18);
          }
        }
        else if (VAR_14->send_disc == VAR_18)
        {

          VAR_14->NData[0].PLength = 0;
          VAR_14->NL.ReqCh = VAR_15->ncci_ch[VAR_18];
          VAR_14->NL.Req = VAR_14->nl_req = VAR_8;
          VAR_15->request(&VAR_14->NL);
          VAR_14->command = VAR_11;
          VAR_14->send_disc = 0;
        }
      }
    } while (!VAR_14->nl_req && (VAR_18 != VAR_14->ncci_ring_list));
    VAR_14->ncci_ring_list = VAR_18;
  }
}
