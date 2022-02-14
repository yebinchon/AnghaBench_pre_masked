
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ word ;
struct TYPE_11__ {int Req; int ReqCh; int Id; TYPE_1__* X; } ;
struct TYPE_10__ {size_t req_in; size_t req_out; int nl_req; int sig_req; int* RBuffer; int nl_global_req; int sig_global_req; TYPE_2__* adapter; TYPE_1__* XData; TYPE_4__ Sig; TYPE_4__ NL; } ;
struct TYPE_9__ {int (* request ) (TYPE_4__*) ;int Id; scalar_t__ adapter_disabled; } ;
struct TYPE_8__ {int* P; scalar_t__ PLength; } ;
typedef TYPE_3__ PLCI ;
typedef TYPE_4__ ENTITY ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(PLCI *VAR_2)
{
  ENTITY * VAR_3;
  word VAR_4;


  if(!VAR_2) return;
  if(VAR_2->adapter->adapter_disabled) return;
  FUNC_1 (VAR_2);


  if(VAR_2->req_in==VAR_2->req_out) return;
  FUNC_2(1,FUNC_3("send_req(in=%d,out=%d)",VAR_2->req_in,VAR_2->req_out));

  if(VAR_2->nl_req || VAR_2->sig_req) return;

  VAR_4 = FUNC_0(&VAR_2->RBuffer[VAR_2->req_out]);
  VAR_2->req_out += 2;
  VAR_2->XData[0].P = &VAR_2->RBuffer[VAR_2->req_out];
  VAR_2->req_out += VAR_4;
  if(VAR_2->RBuffer[VAR_2->req_out]==1)
  {
    VAR_3 = &VAR_2->NL;
    VAR_2->req_out++;
    VAR_3->Req = VAR_2->nl_req = VAR_2->RBuffer[VAR_2->req_out++];
    VAR_3->ReqCh = VAR_2->RBuffer[VAR_2->req_out++];
    if(!(VAR_3->Id & 0x1f))
    {
      VAR_3->Id = VAR_1;
      VAR_2->RBuffer[VAR_2->req_out-4] = VAR_0;
      VAR_2->RBuffer[VAR_2->req_out-3] = 1;
      VAR_2->RBuffer[VAR_2->req_out-2] = (VAR_2->Sig.Id==0xff) ? 0 : VAR_2->Sig.Id;
      VAR_2->RBuffer[VAR_2->req_out-1] = 0;
      VAR_4+=3;
      VAR_2->nl_global_req = VAR_2->nl_req;
    }
    FUNC_2(1,FUNC_3("%x:NLREQ(%x:%x:%x)",VAR_2->adapter->Id,VAR_3->Id,VAR_3->Req,VAR_3->ReqCh));
  }
  else
  {
    VAR_3 = &VAR_2->Sig;
    if(VAR_2->RBuffer[VAR_2->req_out])
      VAR_3->Id = VAR_2->RBuffer[VAR_2->req_out];
    VAR_2->req_out++;
    VAR_3->Req = VAR_2->sig_req = VAR_2->RBuffer[VAR_2->req_out++];
    VAR_3->ReqCh = VAR_2->RBuffer[VAR_2->req_out++];
    if(!(VAR_3->Id & 0x1f))
      VAR_2->sig_global_req = VAR_2->sig_req;
    FUNC_2(1,FUNC_3("%x:SIGREQ(%x:%x:%x)",VAR_2->adapter->Id,VAR_3->Id,VAR_3->Req,VAR_3->ReqCh));
  }
  VAR_2->XData[0].PLength = VAR_4;
  VAR_3->X = VAR_2->XData;
  VAR_2->adapter->request(VAR_3);
  FUNC_2(1,FUNC_3("send_ok"));
}
