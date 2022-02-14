
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct emac_priv {scalar_t__* multicast_hash_cnt; size_t mac_hash1; size_t mac_hash2; } ;


 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct emac_priv *VAR_0, u8 *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_0->multicast_hash_cnt[VAR_2] > 0) {

  --VAR_0->multicast_hash_cnt[VAR_2];
 }



 if (VAR_0->multicast_hash_cnt[VAR_2] > 0)
  return 0;

 if (VAR_2 < 32) {
  VAR_3 = FUNC_0(VAR_2);
  VAR_0->mac_hash1 &= ~VAR_3;
 } else {
  VAR_3 = FUNC_0((VAR_2 - 32));
  VAR_0->mac_hash2 &= ~VAR_3;
 }


 return 1;
}
