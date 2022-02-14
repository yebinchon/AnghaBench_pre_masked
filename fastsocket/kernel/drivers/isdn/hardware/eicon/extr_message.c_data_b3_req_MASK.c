
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t word ;
typedef int dword ;
typedef int byte ;
struct TYPE_16__ {scalar_t__ info; } ;
struct TYPE_15__ {size_t Number; int* P; int Flags; void* Handle; void* Length; } ;
struct TYPE_14__ {scalar_t__* ncci_state; TYPE_3__* ncci; } ;
struct TYPE_13__ {size_t data_out; size_t data_pending; size_t data_ack_out; size_t data_ack_pending; TYPE_1__* DataAck; TYPE_5__* DBuffer; } ;
struct TYPE_12__ {scalar_t__ msg_in_queue; } ;
struct TYPE_11__ {size_t Number; void* Handle; } ;
typedef TYPE_2__ PLCI ;
typedef TYPE_3__ NCCI ;
typedef TYPE_4__ DIVA_CAPI_ADAPTER ;
typedef TYPE_5__ DATA_B3_DESC ;
typedef int APPL ;
typedef TYPE_6__ API_PARSE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int *,int*) ;
 int* FUNC_2 (int *,int) ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,int,int,size_t,char*,void*,size_t) ;

__attribute__((used)) static byte FUNC_7(dword VAR_8, word VAR_9, DIVA_CAPI_ADAPTER *VAR_10,
   PLCI *VAR_11, APPL *VAR_12, API_PARSE *VAR_13)
{
  NCCI *VAR_14;
  DATA_B3_DESC *VAR_15;
  word VAR_16;
  word VAR_17;
  word VAR_18;

  FUNC_3(1,FUNC_4("data_b3_req"));

  VAR_16 = VAR_6;
  VAR_17 = (word)(VAR_8>>16);
  FUNC_3(1,FUNC_4("ncci=0x%x, plci=0x%x",VAR_17,VAR_11));

  if (VAR_11 && VAR_17)
  {
    VAR_16 = VAR_7;
    if ((VAR_10->ncci_state[VAR_17] == VAR_1)
     || (VAR_10->ncci_state[VAR_17] == VAR_2))
    {

      VAR_14 = &(VAR_10->ncci[VAR_17]);
      VAR_18 = VAR_14->data_out + VAR_14->data_pending;
      if (VAR_18 >= VAR_4)
        VAR_18 -= VAR_4;
      VAR_15 = &(VAR_14->DBuffer[VAR_18]);
      VAR_15->Number = VAR_9;
      if ((((byte *)(VAR_13[0].info)) >= ((byte *)(VAR_11->msg_in_queue)))
       && (((byte *)(VAR_13[0].info)) < ((byte *)(VAR_11->msg_in_queue)) + sizeof(VAR_11->msg_in_queue)))
      {

        VAR_15->P = (byte *)(long)(*((dword *)(VAR_13[0].info)));

      }
      else
        VAR_15->P = FUNC_2(VAR_12,*(dword *)VAR_13[0].info);
      VAR_15->Length = FUNC_0(VAR_13[1].info);
      VAR_15->Handle = FUNC_0(VAR_13[2].info);
      VAR_15->Flags = FUNC_0(VAR_13[3].info);
      (VAR_14->data_pending)++;


      if (VAR_15->Flags & 0x0004)
      {
        VAR_18 = VAR_14->data_ack_out + VAR_14->data_ack_pending;
        if (VAR_18 >= VAR_3)
          VAR_18 -= VAR_3;
        VAR_14->DataAck[VAR_18].Number = VAR_15->Number;
        VAR_14->DataAck[VAR_18].Handle = VAR_15->Handle;
        (VAR_14->data_ack_pending)++;
      }

      FUNC_5(VAR_11);
      return 0;
    }
  }
  if (VAR_12)
  {
    if (VAR_11)
    {
      if ((((byte *)(VAR_13[0].info)) >= ((byte *)(VAR_11->msg_in_queue)))
       && (((byte *)(VAR_13[0].info)) < ((byte *)(VAR_11->msg_in_queue)) + sizeof(VAR_11->msg_in_queue)))
      {

        FUNC_1 (VAR_12, (byte *)(long)(*((dword *)(VAR_13[0].info))));

      }
    }
    FUNC_6(VAR_12,
          VAR_5|VAR_0,
          VAR_8,
          VAR_9,
          "ww",FUNC_0(VAR_13[2].info),VAR_16);
  }
  return 0;
}
