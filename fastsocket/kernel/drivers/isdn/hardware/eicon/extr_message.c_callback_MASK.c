
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int word ;
typedef size_t byte ;
struct TYPE_27__ {int length; size_t command; } ;
struct TYPE_25__ {scalar_t__ Data; } ;
struct TYPE_26__ {TYPE_2__ data_b3_req; } ;
struct TYPE_31__ {TYPE_4__ header; TYPE_3__ info; } ;
struct TYPE_30__ {scalar_t__* FlowControlIdTable; int* ch_flow_control; scalar_t__* ch_flow_plci; scalar_t__* FlowControlSkipTable; TYPE_5__* plci; } ;
struct TYPE_29__ {int* user; scalar_t__ Id; size_t Req; size_t Rc; int Ind; int complete; size_t RcCh; size_t ReqCh; size_t IndCh; int RNR; } ;
struct TYPE_24__ {int XNum; } ;
struct TYPE_28__ {scalar_t__ nl_remove_id; scalar_t__ rx_dma_descriptor; scalar_t__ Id; size_t nl_global_req; int data_sent; size_t sig_global_req; int msg_in_write_pos; int msg_in_read_pos; int msg_in_wrap_pos; int li_notify_update; scalar_t__ msg_in_queue; scalar_t__ internal_command; int req_in; scalar_t__ sig_req; scalar_t__ sig_remove_id; TYPE_1__ NL; scalar_t__ nl_req; } ;
typedef TYPE_5__ PLCI ;
typedef TYPE_6__ ENTITY ;
typedef TYPE_7__ DIVA_CAPI_ADAPTER ;
typedef TYPE_8__ CAPI_MSG ;
typedef int APPL ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_7__*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_1 (int *,size_t*) ;
 size_t VAR_11 ;
 TYPE_7__* VAR_12 ;
 int FUNC_2 (int *,TYPE_8__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,size_t) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,size_t,size_t,size_t,size_t,int) ;
 int FUNC_7 (TYPE_5__*,size_t) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (TYPE_5__*,scalar_t__) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (TYPE_5__*,int) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (TYPE_5__*) ;

void FUNC_16(ENTITY * VAR_13)
{
  DIVA_CAPI_ADAPTER * VAR_14;
  APPL * VAR_15;
  PLCI * VAR_16;
  CAPI_MSG *VAR_17;
  word VAR_18, VAR_19;
  byte VAR_20;
  byte VAR_21;
  byte VAR_22;
  byte VAR_23;
  int VAR_24;

  FUNC_8(1,FUNC_10("%x:CB(%x:Req=%x,Rc=%x,Ind=%x)",
                 (VAR_13->user[0]+1)&0x7fff,VAR_13->Id,VAR_13->Req,VAR_13->Rc,VAR_13->Ind));

  VAR_14 = &(VAR_12[(byte)VAR_13->user[0]]);
  VAR_16 = &(VAR_14->plci[VAR_13->user[1]]);
  VAR_24 = FUNC_0(VAR_14);






  if (((VAR_13->complete == 0xff) && VAR_24) ||
      (VAR_13->Rc && !VAR_24)) {
    VAR_20 = VAR_13->Rc;
    VAR_21 = VAR_13->RcCh;
    VAR_22 = VAR_13->Req;
    VAR_13->Rc = 0;

    if (VAR_13->user[0] & 0x8000)
    {





      if (VAR_22 == VAR_10)
      {
        if (VAR_13->Id)
        {
          FUNC_8(1,FUNC_10("cancel RC in REMOVE state"));
          return;
        }
        FUNC_3 (VAR_16);
        for (VAR_18 = 0; VAR_18 < 256; VAR_18++)
        {
          if (VAR_14->FlowControlIdTable[VAR_18] == VAR_16->nl_remove_id)
            VAR_14->FlowControlIdTable[VAR_18] = 0;
        }
        VAR_16->nl_remove_id = 0;
        if (VAR_16->rx_dma_descriptor > 0) {
          FUNC_9 (VAR_16, VAR_16->rx_dma_descriptor - 1);
          VAR_16->rx_dma_descriptor = 0;
        }
      }
      if (VAR_20 == VAR_9)
      {
        VAR_14->FlowControlIdTable[VAR_21] = VAR_13->Id;
        VAR_14->FlowControlSkipTable[VAR_21] = 0;

        VAR_14->ch_flow_control[VAR_21] |= VAR_5;
        VAR_14->ch_flow_plci[VAR_21] = VAR_16->Id;
        VAR_16->nl_req = 0;
      }
      else
      {



        if (VAR_24 && (VAR_14->FlowControlIdTable[VAR_21] == VAR_13->Id) && VAR_13->Id) {
          VAR_14->FlowControlIdTable[VAR_21] = 0;
          if ((VAR_20 == VAR_8) && VAR_14->FlowControlSkipTable[VAR_21]) {
            FUNC_8(3,FUNC_10 ("XDI CAPI: RC cancelled Id:0x02, Ch:%02x", VAR_13->Id, VAR_21));
            return;
          }
        }

        if (VAR_14->ch_flow_control[VAR_21] & VAR_5)
        {
          VAR_14->ch_flow_control[VAR_21] &= ~VAR_5;
          if (VAR_21 == VAR_13->ReqCh)
            VAR_16->nl_req = 0;
        }
        else
          VAR_16->nl_req = 0;
      }
      if (VAR_16->nl_req)
        FUNC_6 (VAR_16, 0, VAR_20, VAR_21, 0, 1);
      else
      {
        if (VAR_22 == VAR_7)
        {
          FUNC_4 (VAR_16, VAR_21);
          if (VAR_16->internal_command)
            FUNC_6 (VAR_16, VAR_22, VAR_20, VAR_21, 0, 1);
        }
        else
        {
          if (VAR_16->nl_global_req)
          {
            VAR_23 = VAR_16->nl_global_req;
            VAR_16->nl_global_req = 0;
            if (VAR_20 != VAR_0) {
              VAR_13->Id = 0;
              if (VAR_16->rx_dma_descriptor > 0) {
                FUNC_9 (VAR_16, VAR_16->rx_dma_descriptor - 1);
                VAR_16->rx_dma_descriptor = 0;
              }
            }
            FUNC_5 (VAR_16);
            FUNC_6 (VAR_16, 0, VAR_20, VAR_21, VAR_23, 1);
          }
          else if (VAR_16->data_sent)
          {
            FUNC_5 (VAR_16);
            VAR_16->data_sent = 0;
            VAR_16->NL.XNum = 1;
            FUNC_7 (VAR_16, VAR_21);
            if (VAR_16->internal_command)
              FUNC_6 (VAR_16, VAR_22, VAR_20, VAR_21, 0, 1);
          }
          else
          {
            FUNC_5 (VAR_16);
            FUNC_6 (VAR_16, VAR_22, VAR_20, VAR_21, 0, 1);
          }
        }
      }
    }
    else
    {





      if (VAR_22 == VAR_10)
      {
        if (VAR_13->Id)
        {
          FUNC_8(1,FUNC_10("cancel RC in REMOVE state"));
          return;
        }
        VAR_16->sig_remove_id = 0;
      }
      VAR_16->sig_req = 0;
      if (VAR_16->sig_global_req)
      {
        VAR_23 = VAR_16->sig_global_req;
        VAR_16->sig_global_req = 0;
        if (VAR_20 != VAR_0)
          VAR_13->Id = 0;
        FUNC_5 (VAR_16);
        FUNC_6 (VAR_16, 0, VAR_20, VAR_21, VAR_23, 0);
      }
      else
      {
        FUNC_5 (VAR_16);
        FUNC_6 (VAR_16, VAR_22, VAR_20, VAR_21, 0, 0);
      }
    }





    if (VAR_24) {
      FUNC_5(VAR_16);
      goto capi_callback_suffix;
    }
  }

  FUNC_5(VAR_16);

  if (VAR_13->Ind) {
    if (VAR_13->user[0] &0x8000) {
      byte VAR_25 = VAR_13->Ind & 0x0f;
      byte VAR_26 = VAR_13->IndCh;
      if (((VAR_25==VAR_3) || (VAR_25==VAR_4)) &&
          (VAR_14->ch_flow_plci[VAR_26] == VAR_16->Id)) {
        if (VAR_14->ch_flow_control[VAR_26] & VAR_6) {
          FUNC_8(3,FUNC_10 ("XDI CAPI: I: pending N-XON Ch:%02x", VAR_26));
        }
        VAR_14->ch_flow_control[VAR_26] &= ~VAR_6;
      }
      FUNC_12(VAR_16);
      if ((VAR_13->RNR != 1) &&
          (VAR_14->ch_flow_plci[VAR_26] == VAR_16->Id) &&
          (VAR_14->ch_flow_control[VAR_26] & VAR_6)) {
        VAR_14->ch_flow_control[VAR_26] &= ~VAR_6;
        FUNC_8(3,FUNC_10 ("XDI CAPI: I: remove faked N-XON Ch:%02x", VAR_26));
      }
    } else {
      FUNC_15(VAR_16);
    }
    VAR_13->Ind = 0;
  }

capi_callback_suffix:

  while (!VAR_16->req_in
   && !VAR_16->internal_command
   && (VAR_16->msg_in_write_pos != VAR_16->msg_in_read_pos))
  {
    VAR_19 = (VAR_16->msg_in_read_pos == VAR_16->msg_in_wrap_pos) ? 0 : VAR_16->msg_in_read_pos;

    VAR_18 = (((CAPI_MSG *)(&((byte *)(VAR_16->msg_in_queue))[VAR_19]))->header.length + 3) & 0xfffc;

    VAR_17 = (CAPI_MSG *)(&((byte *)(VAR_16->msg_in_queue))[VAR_19]);
    VAR_15 = *((APPL * *)(&((byte *)(VAR_16->msg_in_queue))[VAR_19+VAR_18]));
    FUNC_8(1,FUNC_10("dequeue msg(0x%04x) - write=%d read=%d wrap=%d",
      VAR_17->header.command, VAR_16->msg_in_write_pos, VAR_16->msg_in_read_pos, VAR_16->msg_in_wrap_pos));
    if (VAR_16->msg_in_read_pos == VAR_16->msg_in_wrap_pos)
    {
      VAR_16->msg_in_wrap_pos = VAR_2;
      VAR_16->msg_in_read_pos = VAR_18 + VAR_1;
    }
    else
    {
      VAR_16->msg_in_read_pos = VAR_19 + VAR_18 + VAR_1;
    }
    if (VAR_16->msg_in_read_pos == VAR_16->msg_in_write_pos)
    {
      VAR_16->msg_in_write_pos = VAR_2;
      VAR_16->msg_in_read_pos = VAR_2;
    }
    else if (VAR_16->msg_in_read_pos == VAR_16->msg_in_wrap_pos)
    {
      VAR_16->msg_in_read_pos = VAR_2;
      VAR_16->msg_in_wrap_pos = VAR_2;
    }
    VAR_18 = FUNC_2 (VAR_15, VAR_17);
    if (VAR_18 != 0)
    {
      if (VAR_17->header.command == VAR_11)

        FUNC_1 (VAR_15, (byte *)(long)(VAR_17->info.data_b3_req.Data));

      FUNC_8(1,FUNC_10("Error 0x%04x from msg(0x%04x)", VAR_18, VAR_17->header.command));
      break;
    }

    if (VAR_16->li_notify_update)
    {
      VAR_16->li_notify_update = 0;
      FUNC_11 (VAR_16, 0);
    }

  }
  FUNC_13(VAR_16);
  FUNC_14(VAR_16);
}
