
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct sk_buff {int ip_summed; } ;
struct iphdr {int frag_off; unsigned int protocol; int tot_len; int ihl; int saddr; int daddr; } ;
struct ethhdr {scalar_t__ h_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ethhdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_7, uint32_t VAR_8, int VAR_9)
{
 struct ethhdr *VAR_10 = FUNC_0(VAR_7);
 uint32_t VAR_11, VAR_12;
 unsigned int VAR_13;
 struct iphdr *VAR_14;
 uint16_t *VAR_15;
 unsigned char *VAR_16;
 if (VAR_10->h_proto != FUNC_1(VAR_2))
  return;

 VAR_14 = (struct iphdr *) ((char *)VAR_10 + VAR_1);
 if (VAR_14->frag_off & FUNC_1(VAR_5 | VAR_6))
  return;

 VAR_13 = VAR_14->protocol;
 if (VAR_13 != VAR_3 && VAR_13 != VAR_4)
  return;


 VAR_11 = VAR_8 +
        (VAR_14->tot_len - (VAR_14->ihl << 2)) +
        FUNC_1((uint16_t)VAR_14->protocol) +
        (VAR_14->saddr >> 16) + (VAR_14->saddr & 0xffff) +
        (VAR_14->daddr >> 16) + (VAR_14->daddr & 0xffff);


 VAR_15 = (uint16_t *) VAR_10;
 VAR_12 = VAR_15[0] + VAR_15[1] + VAR_15[2] + VAR_15[3] + VAR_15[4] + VAR_15[5] + VAR_15[6];

 VAR_12 = (VAR_12 & 0xffff) + (VAR_12 >> 16);
 VAR_12 = (VAR_12 & 0xffff) + (VAR_12 >> 16);

 VAR_11 += 0xffff ^ VAR_12;



 VAR_16 = (char *)VAR_10 + VAR_9;
 if (VAR_9 & 1) {
  VAR_11 += 0xffff ^ (uint16_t) ((VAR_16[1] << 8) | VAR_16[0]);
  VAR_11 += 0xffff ^ (uint16_t) ((VAR_16[3] << 8) | VAR_16[2]);
 } else {
  VAR_11 += 0xffff ^ (uint16_t) ((VAR_16[0] << 8) | VAR_16[1]);
  VAR_11 += 0xffff ^ (uint16_t) ((VAR_16[2] << 8) | VAR_16[3]);
 }

 VAR_11 = (VAR_11 & 0xffff) + (VAR_11 >> 16);
 VAR_11 = (VAR_11 & 0xffff) + (VAR_11 >> 16);

 if (VAR_11 == 0xffff)
  VAR_7->ip_summed = VAR_0;
}
