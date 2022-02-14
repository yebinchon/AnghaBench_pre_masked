
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_device {int dev; int (* GetHalfNmodeSupportByAPsHandler ) (int ) ;TYPE_1__* pHTInfo; } ;
struct TYPE_4__ {scalar_t__ ChlWidth; } ;
struct TYPE_3__ {int bCurrentHTSupport; int bRegBW40MHz; scalar_t__ PeerHTCapBuf; } ;
typedef TYPE_1__* PRT_HIGH_THROUGHPUT ;
typedef TYPE_2__* PHT_CAPABILITY_ELE ;


 int FUNC_0 (int ) ;

bool FUNC_1(struct ieee80211_device* VAR_0)
{
 bool VAR_1 = 0;
 PRT_HIGH_THROUGHPUT VAR_2 = VAR_0->pHTInfo;

 if(VAR_2->bCurrentHTSupport == 0 )
  VAR_1 = 0;
 else if(VAR_2->bRegBW40MHz == 0)
  VAR_1 = 0;
 else if(!VAR_0->GetHalfNmodeSupportByAPsHandler(VAR_0->dev))
  VAR_1 = 0;
 else if(((PHT_CAPABILITY_ELE)(VAR_2->PeerHTCapBuf))->ChlWidth)
  VAR_1 = 1;
 else
  VAR_1 = 0;

 return VAR_1;
}
