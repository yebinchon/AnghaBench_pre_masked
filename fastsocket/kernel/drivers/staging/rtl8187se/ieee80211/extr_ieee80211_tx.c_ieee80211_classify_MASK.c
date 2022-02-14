
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct sk_buff {unsigned int priority; scalar_t__ data; } ;
struct iphdr {int tos; } ;
struct ieee80211_network {int QoS_Enable; } ;
struct ethhdr {int h_proto; } ;
struct ether_header {scalar_t__ ether_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_4(struct sk_buff *VAR_4, struct ieee80211_network *VAR_5)
{
  struct ether_header *VAR_6 = (struct ether_header*)VAR_4->data;
  unsigned int VAR_7 = 0;

  if(!VAR_5->QoS_Enable) {
     VAR_4->priority = 0;
     return(VAR_7);
  }

  if(VAR_6->ether_type == FUNC_0(VAR_0)) {
    const struct iphdr *VAR_8 = (struct iphdr*)(VAR_4->data + sizeof(struct ether_header));

    VAR_7 = (VAR_8->tos >> 5)&0x07;
  } else if (FUNC_3(VAR_4)) {




 u32 VAR_9 = FUNC_2(VAR_4);
 VAR_7 = (VAR_9 >> 13) & 7;
  } else if(VAR_1 == FUNC_1(((struct ethhdr *)VAR_4->data)->h_proto)) {

    VAR_7 = 7;
  }

  VAR_4->priority = VAR_7;
  return(VAR_7);
}
