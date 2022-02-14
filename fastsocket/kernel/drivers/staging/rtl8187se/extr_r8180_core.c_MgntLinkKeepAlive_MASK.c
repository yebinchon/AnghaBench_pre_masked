
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ LastNumTxUnicast; scalar_t__ LastNumRxUnicast; int IdleCount; } ;
struct r8180_priv {int keepAliveLevel; scalar_t__ NumTxUnicast; TYPE_2__* ieee80211; TYPE_1__ link_detect; } ;
struct TYPE_4__ {scalar_t__ state; scalar_t__ NumRxUnicast; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_1(struct r8180_priv *VAR_3 )
{
 if (VAR_3->keepAliveLevel == 0)
  return;

 if(VAR_3->ieee80211->state == VAR_1)
 {




  if ( (VAR_3->keepAliveLevel== 2) ||
   (VAR_3->link_detect.LastNumTxUnicast == VAR_3->NumTxUnicast &&
   VAR_3->link_detect.LastNumRxUnicast == VAR_3->ieee80211->NumRxUnicast )
   )
  {
   VAR_3->link_detect.IdleCount++;




   if(VAR_3->link_detect.IdleCount >= ((VAR_2 / VAR_0)-1) )
   {
    VAR_3->link_detect.IdleCount = 0;
    FUNC_0(VAR_3->ieee80211, 0);
   }
  }
  else
  {
   VAR_3->link_detect.IdleCount = 0;
  }
  VAR_3->link_detect.LastNumTxUnicast = VAR_3->NumTxUnicast;
  VAR_3->link_detect.LastNumRxUnicast = VAR_3->ieee80211->NumRxUnicast;
 }
}
