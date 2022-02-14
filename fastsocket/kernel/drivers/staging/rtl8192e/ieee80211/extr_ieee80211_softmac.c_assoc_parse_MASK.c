
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_3__ {scalar_t__ mode; } ;
struct ieee80211_device {scalar_t__ mode; scalar_t__ AsocRetryCount; TYPE_2__* pHTInfo; TYPE_1__ current_network; } ;
struct ieee80211_assoc_response_frame {int status; int aid; } ;
struct TYPE_4__ {int IOTAction; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline u16 FUNC_2(struct ieee80211_device *VAR_6, struct sk_buff *VAR_7, int *VAR_8)
{
 struct ieee80211_assoc_response_frame *VAR_9;
 u16 VAR_10;

 if (VAR_7->len < sizeof(struct ieee80211_assoc_response_frame)){
  FUNC_0("invalid len in auth resp: %d\n", VAR_7->len);
  return 0xcafe;
 }

 VAR_9 = (struct ieee80211_assoc_response_frame*) VAR_7->data;
 *VAR_8 = FUNC_1(VAR_9->aid) & 0x3fff;

 VAR_10 = FUNC_1(VAR_9->status);
 if((VAR_10==VAR_4 || VAR_10==VAR_5)&&

    ((VAR_6->mode == VAR_1) &&
     (VAR_6->current_network.mode == VAR_2) &&
            (VAR_6->AsocRetryCount++ < (VAR_3-1)))) {
                 VAR_6->pHTInfo->IOTAction |= VAR_0;
 }else {
   VAR_6->AsocRetryCount = 0;
 }

 return FUNC_1(VAR_9->status);
}
