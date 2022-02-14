
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct libipw_hdr_4addr {int * payload; } ;
struct libipw_hdr_3addr {int * payload; } ;
struct libipw_hdr_2addr {int * payload; } ;
struct libipw_hdr_1addr {int * payload; } ;
struct ieee80211_hdr {int frame_control; } ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline u8 *FUNC_2(struct ieee80211_hdr *VAR_0)
{
 switch (FUNC_1(FUNC_0(VAR_0->frame_control))) {
 case 131:
  return ((struct libipw_hdr_1addr *)VAR_0)->payload;
 case 130:
  return ((struct libipw_hdr_2addr *)VAR_0)->payload;
 case 129:
  return ((struct libipw_hdr_3addr *)VAR_0)->payload;
 case 128:
  return ((struct libipw_hdr_4addr *)VAR_0)->payload;
 }
 return ((void*)0);
}
