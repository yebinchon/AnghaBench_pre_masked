
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_trans {scalar_t__ rx_mpdu_cmd; int rx_mpdu_cmd_hdr_size; } ;
struct iwl_cmd_header {scalar_t__ cmd; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int __le32 ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline size_t FUNC_2(const struct iwl_trans *VAR_0,
          void *VAR_1, size_t VAR_2)
{
 struct iwl_cmd_header *VAR_3 = (void *)((u8 *)VAR_1 + sizeof(__le32));
 struct ieee80211_hdr *VAR_4;

 if (VAR_3->cmd != VAR_0->rx_mpdu_cmd)
  return VAR_2;

 VAR_4 = (void *)((u8 *)VAR_3 + sizeof(struct iwl_cmd_header) +
   VAR_0->rx_mpdu_cmd_hdr_size);
 if (!FUNC_1(VAR_4->frame_control))
  return VAR_2;

 return sizeof(__le32) + sizeof(*VAR_3) + VAR_0->rx_mpdu_cmd_hdr_size +
  FUNC_0(VAR_4->frame_control);
}
