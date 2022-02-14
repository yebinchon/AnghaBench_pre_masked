
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
struct TYPE_9__ {int Flags; int Handle; int Number; } ;
struct TYPE_8__ {size_t* ch_ncci; scalar_t__* ncci_plci; int Id; scalar_t__* ncci_state; TYPE_2__* ncci; } ;
struct TYPE_7__ {size_t data_out; scalar_t__ data_pending; TYPE_4__* DBuffer; } ;
struct TYPE_6__ {scalar_t__ Id; scalar_t__ appl; scalar_t__ tel; TYPE_3__* adapter; int data_sent_ptr; } ;
typedef TYPE_1__ PLCI ;
typedef TYPE_2__ NCCI ;
typedef TYPE_3__ DIVA_CAPI_ADAPTER ;
typedef TYPE_4__ DATA_B3_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,size_t,scalar_t__) ;
 int FUNC_3 (scalar_t__,int,int,int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_4(PLCI *VAR_4, byte VAR_5)
{
  dword VAR_6;
  DIVA_CAPI_ADAPTER * VAR_7;
  NCCI *VAR_8;
  DATA_B3_DESC *VAR_9;
  word VAR_10;

  if (VAR_4->appl)
  {
    FUNC_0 (VAR_4->appl, VAR_4->data_sent_ptr);
    VAR_7 = VAR_4->adapter;
    VAR_10 = VAR_7->ch_ncci[VAR_5];
    if (VAR_10 && (VAR_7->ncci_plci[VAR_10] == VAR_4->Id))
    {
      VAR_8 = &(VAR_7->ncci[VAR_10]);
      FUNC_1(1,FUNC_2("data_out=%d, data_pending=%d",VAR_8->data_out,VAR_8->data_pending));
      if (VAR_8->data_pending)
      {
        VAR_9 = &(VAR_8->DBuffer[VAR_8->data_out]);
        if (!(VAR_9->Flags &4) && VAR_7->ncci_state[VAR_10])
        {
          VAR_6 = (((dword)VAR_10)<<16)|((word)VAR_4->Id<<8)|VAR_7->Id;
          if(VAR_4->tel) VAR_6|=VAR_1;
          FUNC_3(VAR_4->appl,VAR_3|VAR_0,VAR_6,VAR_9->Number,
                "ww",VAR_9->Handle,0);
        }
        (VAR_8->data_out)++;
        if (VAR_8->data_out == VAR_2)
          VAR_8->data_out = 0;
        (VAR_8->data_pending)--;
      }
    }
  }
}
