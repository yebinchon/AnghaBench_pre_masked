
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int IsInUsed; int pMMPDU; scalar_t__ len; } ;
struct wbsoft_priv {TYPE_1__ sMlmeFrame; } ;
struct TYPE_4__ {int bResult; } ;
typedef TYPE_2__ MLME_TXCALLBACK ;


 int VAR_0 ;
 int FUNC_0 (struct wbsoft_priv*,int ) ;
 int VAR_1 ;

void
FUNC_1(struct wbsoft_priv * VAR_2, u8 VAR_3, unsigned char VAR_4)
{
 MLME_TXCALLBACK VAR_5;


 VAR_2->sMlmeFrame.len = 0;
 FUNC_0( VAR_2, VAR_2->sMlmeFrame.pMMPDU );


 VAR_5.bResult = VAR_0;


 VAR_2->sMlmeFrame.IsInUsed = VAR_1;
}
