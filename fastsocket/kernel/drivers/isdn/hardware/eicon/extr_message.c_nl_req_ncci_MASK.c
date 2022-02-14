
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t byte ;
struct TYPE_6__ {int Id; } ;
struct TYPE_8__ {int req_in; int req_in_start; int* RBuffer; TYPE_2__* adapter; TYPE_1__ NL; int nl_remove_id; int Id; } ;
struct TYPE_7__ {size_t* ncci_ch; scalar_t__ adapter_disabled; } ;
typedef TYPE_3__ PLCI ;


 int FUNC_0 (int*,int) ;
 size_t VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ,size_t,size_t) ;
 int FUNC_3 (TYPE_3__*,int ,size_t) ;

__attribute__((used)) static void FUNC_4(PLCI *VAR_1, byte VAR_2, byte VAR_3)
{
  if(!VAR_1) return;
  if(VAR_1->adapter->adapter_disabled) return;
  FUNC_1(1,FUNC_2("nl_req %02x %02x %02x", VAR_1->Id, VAR_2, VAR_3));
  if (VAR_2 == VAR_0)
  {
    VAR_1->nl_remove_id = VAR_1->NL.Id;
    FUNC_3 (VAR_1, 0, (byte)(VAR_3 != 0));
    VAR_3 = 0;
  }
  if(VAR_1->req_in==VAR_1->req_in_start) {
    VAR_1->req_in +=2;
    VAR_1->RBuffer[VAR_1->req_in++] = 0;
  }
  FUNC_0(&VAR_1->RBuffer[VAR_1->req_in_start], VAR_1->req_in-VAR_1->req_in_start-2);
  VAR_1->RBuffer[VAR_1->req_in++] = 1;
  VAR_1->RBuffer[VAR_1->req_in++] = VAR_2;
  VAR_1->RBuffer[VAR_1->req_in++] = VAR_1->adapter->ncci_ch[VAR_3];
  VAR_1->req_in_start = VAR_1->req_in;
}
