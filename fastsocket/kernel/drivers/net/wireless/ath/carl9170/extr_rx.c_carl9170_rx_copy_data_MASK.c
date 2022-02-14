
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int) ;
 int* FUNC_1 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_8(u8 *VAR_2, int VAR_3)
{
 struct sk_buff *VAR_4;
 int VAR_5 = 0;
 struct ieee80211_hdr *VAR_6 = (void *) VAR_2;

 if (FUNC_3(VAR_6->frame_control)) {
  u8 *VAR_7 = FUNC_1(VAR_6);
  VAR_5 += VAR_1;

  if (*VAR_7 & VAR_0)
   VAR_5 += VAR_1;
 }

 if (FUNC_2(VAR_6->frame_control))
  VAR_5 += VAR_1;

 VAR_5 = 32 + (VAR_5 & VAR_1);

 VAR_4 = FUNC_0(VAR_3 + VAR_5);
 if (FUNC_4(VAR_4)) {
  FUNC_7(VAR_4, VAR_5);
  FUNC_5(FUNC_6(VAR_4, VAR_3), VAR_2, VAR_3);
 }

 return VAR_4;
}
