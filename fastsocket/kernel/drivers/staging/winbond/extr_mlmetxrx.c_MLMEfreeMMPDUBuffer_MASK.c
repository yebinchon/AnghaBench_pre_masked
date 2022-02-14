
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* TxMMPDUInUse; int * TxMMPDU; } ;
struct wbsoft_priv {TYPE_1__ sMlmeFrame; } ;
typedef int s8 ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct wbsoft_priv *VAR_1, s8 *VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2 == (s8 *)&(VAR_1->sMlmeFrame.TxMMPDU[VAR_3]))
   break;
 }
 if (VAR_1->sMlmeFrame.TxMMPDUInUse[VAR_3])
  VAR_1->sMlmeFrame.TxMMPDUInUse[VAR_3] = 0;
 else {


 }
}
