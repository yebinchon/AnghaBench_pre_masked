
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct wq_enet_desc {void* vlan_tag; void* header_length_flags; void* mss_loopback; void* length; int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct wq_enet_desc *VAR_11,
 u64 VAR_12, u16 VAR_13, u16 VAR_14, u16 VAR_15,
 u8 VAR_16, u8 VAR_17, u8 VAR_18, u8 VAR_19,
 u8 VAR_20, u16 VAR_21, u8 VAR_22)
{
 VAR_11->address = FUNC_1(VAR_12);
 VAR_11->length = FUNC_0(VAR_13 & VAR_7);
 VAR_11->mss_loopback = FUNC_0((VAR_14 & VAR_9) <<
  VAR_10 | (VAR_22 & 1) << VAR_8);
 VAR_11->header_length_flags = FUNC_0(
  (VAR_15 & VAR_6) |
  (VAR_16 & VAR_3) << VAR_5 |
  (VAR_17 & 1) << VAR_1 |
  (VAR_18 & 1) << VAR_0 |
  (VAR_19 & 1) << VAR_2 |
  (VAR_20 & 1) << VAR_4);
 VAR_11->vlan_tag = FUNC_0(VAR_21);
}
