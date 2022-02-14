
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ byte ;
struct TYPE_6__ {int Id; } ;
struct TYPE_7__ {int req_in; int req_in_start; scalar_t__* RBuffer; TYPE_2__ Sig; int sig_remove_id; TYPE_1__* adapter; } ;
struct TYPE_5__ {scalar_t__ adapter_disabled; } ;
typedef TYPE_3__ PLCI ;


 int FUNC_0 (scalar_t__*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(PLCI *VAR_1, byte VAR_2, byte VAR_3)
{
  if(!VAR_1) return;
  if(VAR_1->adapter->adapter_disabled) return;
  FUNC_1(1,FUNC_2("sig_req(%x)",VAR_2));
  if (VAR_2 == VAR_0)
    VAR_1->sig_remove_id = VAR_1->Sig.Id;
  if(VAR_1->req_in==VAR_1->req_in_start) {
    VAR_1->req_in +=2;
    VAR_1->RBuffer[VAR_1->req_in++] = 0;
  }
  FUNC_0(&VAR_1->RBuffer[VAR_1->req_in_start], VAR_1->req_in-VAR_1->req_in_start-2);
  VAR_1->RBuffer[VAR_1->req_in++] = VAR_3;
  VAR_1->RBuffer[VAR_1->req_in++] = VAR_2;
  VAR_1->RBuffer[VAR_1->req_in++] = 0;
  VAR_1->req_in_start = VAR_1->req_in;
}
