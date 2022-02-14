
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ IsInUsed; int* pMMPDU; int DataType; int wNumTxMMPDU; int len; int wNumTxMMPDUDiscarded; } ;
struct wbsoft_priv {TYPE_1__ sMlmeFrame; } ;


 int FUNC_0 (struct wbsoft_priv*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

u8 FUNC_1(struct wbsoft_priv * VAR_2, u8 *VAR_3, u16 VAR_4, u8 VAR_5)


{
 if (VAR_2->sMlmeFrame.IsInUsed != VAR_1) {
  VAR_2->sMlmeFrame.wNumTxMMPDUDiscarded++;
  return 0;
 }
 VAR_2->sMlmeFrame.IsInUsed = VAR_0;


 VAR_2->sMlmeFrame.pMMPDU = VAR_3;
 VAR_2->sMlmeFrame.DataType = VAR_5;

 VAR_2->sMlmeFrame.len = VAR_4;
 VAR_2->sMlmeFrame.wNumTxMMPDU++;





 FUNC_0(VAR_2);
 return 1;
}
