
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int efbHeight; int xfbHeight; scalar_t__ xfbMode; int viTVMode; int viXOrigin; int viYOrigin; scalar_t__ viHeight; scalar_t__ viWidth; scalar_t__ fbWidth; } ;
typedef TYPE_1__ GXRModeObj ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;

void FUNC_1(GXRModeObj *VAR_2,GXRModeObj *VAR_3,u16 VAR_4,u16 VAR_5)
{
 if(VAR_2!=VAR_3) FUNC_0(VAR_3,VAR_2,sizeof(GXRModeObj));

 VAR_3->fbWidth = VAR_2->fbWidth-(VAR_4<<1);
 VAR_3->efbHeight = VAR_2->efbHeight-((VAR_2->efbHeight*(VAR_5<<1))/VAR_2->xfbHeight);
 if(VAR_2->xfbMode==VAR_1 && !(VAR_2->viTVMode&VAR_0)) VAR_3->xfbHeight = VAR_2->xfbHeight-VAR_5;
 else VAR_3->xfbHeight = VAR_2->xfbHeight-(VAR_5<<1);

 VAR_3->viWidth = VAR_2->viWidth-(VAR_4<<1);
 if(VAR_2->viTVMode&VAR_0) VAR_3->viHeight = VAR_2->viHeight-(VAR_5<<2);
 else VAR_3->viHeight = VAR_2->viHeight-(VAR_5<<1);

 VAR_3->viXOrigin += VAR_4;
 VAR_3->viYOrigin += VAR_5;
}
