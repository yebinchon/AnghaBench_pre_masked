
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct rxf_desc {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; int tx_coalesce_usecs; int rx_max_coalesced_frames; int tx_max_coalesced_frames; } ;
struct bdx_priv {void* tdintcm; void* rdintcm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_2 ;
 void* FUNC_2 (int,int ,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (struct bdx_priv*,int ,void*) ;
 struct bdx_priv* FUNC_4 (struct net_device*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_6, struct ethtool_coalesce *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;
 struct bdx_priv *VAR_10 = FUNC_4(VAR_6);
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;


 VAR_11 = VAR_7->rx_coalesce_usecs / VAR_2;
 VAR_12 = VAR_7->tx_coalesce_usecs / VAR_2;
 VAR_13 = VAR_7->rx_max_coalesced_frames;
 VAR_14 = VAR_7->tx_max_coalesced_frames;


 VAR_13 =
     (((VAR_13 * sizeof(struct rxf_desc)) + VAR_3 - 1)
      / VAR_3);
 VAR_14 =
     (((VAR_14 * VAR_0) + VAR_3 - 1)
      / VAR_3);

 if ((VAR_11 > 0x7FFF) || (VAR_12 > 0x7FFF)
     || (VAR_13 > 0xF) || (VAR_14 > 0xF))
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_11, FUNC_0(VAR_10->rdintcm),
         FUNC_1(VAR_10->rdintcm), VAR_13);
 VAR_9 = FUNC_2(VAR_12, FUNC_0(VAR_10->tdintcm), 0,
         VAR_14);

 VAR_10->rdintcm = VAR_8;
 VAR_10->tdintcm = VAR_9;

 FUNC_3(VAR_10, VAR_4, VAR_8);
 FUNC_3(VAR_10, VAR_5, VAR_9);

 return 0;
}
