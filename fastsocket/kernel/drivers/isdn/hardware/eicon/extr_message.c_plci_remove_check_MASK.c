
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int word ;
struct TYPE_12__ {int Id; } ;
struct TYPE_11__ {int Id; } ;
struct TYPE_13__ {int adapter; scalar_t__ notifiedcall; int * appl; scalar_t__ channels; int State; scalar_t__ Id; TYPE_2__ Sig; int tel; TYPE_1__ NL; } ;
typedef TYPE_3__ PLCI ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static word FUNC_9(PLCI *VAR_1)
{
  if(!VAR_1) return 1;
  if(!VAR_1->NL.Id && FUNC_1 (VAR_1))
  {
    if(VAR_1->Sig.Id == 0xff)
      VAR_1->Sig.Id = 0;
    if(!VAR_1->Sig.Id)
    {
      FUNC_4(1,FUNC_5("plci_remove_complete(%x)",VAR_1->Id));
      FUNC_4(1,FUNC_5("tel=0x%x,Sig=0x%x",VAR_1->tel,VAR_1->Sig.Id));
      if (VAR_1->Id)
      {
        FUNC_0(VAR_1->adapter, VAR_1);
        FUNC_3 (VAR_1);
        FUNC_7 (VAR_1, 0, 0);
        FUNC_8 (VAR_1);
        FUNC_2 (VAR_1);
        VAR_1->Id = 0;
        VAR_1->State = VAR_0;
        VAR_1->channels = 0;
        VAR_1->appl = ((void*)0);
        VAR_1->notifiedcall = 0;
      }
      FUNC_6(VAR_1->adapter);
      return 1;
    }
  }
  return 0;
}
