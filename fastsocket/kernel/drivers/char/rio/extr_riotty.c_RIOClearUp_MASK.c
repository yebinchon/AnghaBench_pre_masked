
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Port {scalar_t__ TxBufferOut; scalar_t__ TxBufferIn; scalar_t__ RxDataStart; scalar_t__ MagicFlags; scalar_t__ WflushFlag; scalar_t__ Mapped; scalar_t__ CookMode; scalar_t__ ModemState; scalar_t__ FlushCmdBodge; scalar_t__ firstOpen; scalar_t__ PortState; scalar_t__ Config; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct Port *VAR_1)
{
 FUNC_0(VAR_0, "RIOHalted set\n");
 VAR_1->Config = 0;
 VAR_1->PortState = 0;
 VAR_1->firstOpen = 0;
 VAR_1->FlushCmdBodge = 0;
 VAR_1->ModemState = VAR_1->CookMode = 0;
 VAR_1->Mapped = 0;
 VAR_1->WflushFlag = 0;
 VAR_1->MagicFlags = 0;
 VAR_1->RxDataStart = 0;
 VAR_1->TxBufferIn = 0;
 VAR_1->TxBufferOut = 0;
}
