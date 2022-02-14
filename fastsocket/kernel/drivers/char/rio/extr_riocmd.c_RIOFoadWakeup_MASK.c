
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_info {struct Port** RIOPortp; } ;
struct Port {int portSem; scalar_t__ TxBufferOut; scalar_t__ TxBufferIn; scalar_t__ RxDataStart; scalar_t__ MagicFlags; scalar_t__ WflushFlag; scalar_t__ Mapped; scalar_t__ ParamSem; scalar_t__ CookMode; scalar_t__ ModemState; scalar_t__ ModemLines; scalar_t__ FlushCmdBodge; scalar_t__ PortState; int InUse; scalar_t__ State; scalar_t__ Config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

int FUNC_2(struct rio_info *VAR_2)
{
 int VAR_3;
 struct Port *VAR_4;
 unsigned long VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = VAR_2->RIOPortp[VAR_3];

  FUNC_0(&VAR_4->portSem, VAR_5);
  VAR_4->Config = 0;
  VAR_4->State = 0;
  VAR_4->InUse = VAR_0;
  VAR_4->PortState = 0;
  VAR_4->FlushCmdBodge = 0;
  VAR_4->ModemLines = 0;
  VAR_4->ModemState = 0;
  VAR_4->CookMode = 0;
  VAR_4->ParamSem = 0;
  VAR_4->Mapped = 0;
  VAR_4->WflushFlag = 0;
  VAR_4->MagicFlags = 0;
  VAR_4->RxDataStart = 0;
  VAR_4->TxBufferIn = 0;
  VAR_4->TxBufferOut = 0;
  FUNC_1(&VAR_4->portSem, VAR_5);
 }
 return (0);
}
