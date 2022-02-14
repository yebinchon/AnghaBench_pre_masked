
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int (* check_mng_mode ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {int tx_pkt_filtering; TYPE_1__ ops; } ;
struct e1000_host_mng_dhcp_cookie {scalar_t__ checksum; scalar_t__ signature; int status; } ;
struct e1000_hw {TYPE_2__ mac; struct e1000_host_mng_dhcp_cookie mng_cookie; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_1 (int*,int) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;

bool FUNC_4(struct e1000_hw *VAR_5)
{
 struct e1000_host_mng_dhcp_cookie *VAR_6 = &VAR_5->mng_cookie;
 u32 *VAR_7 = (u32 *)&VAR_5->mng_cookie;
 u32 VAR_8;
 s32 VAR_9, VAR_10, VAR_11;
 u8 VAR_12, VAR_13;

 VAR_5->mac.tx_pkt_filtering = 1;


 if (!VAR_5->mac.ops.check_mng_mode(VAR_5)) {
  VAR_5->mac.tx_pkt_filtering = 0;
  return VAR_5->mac.tx_pkt_filtering;
 }




 VAR_9 = FUNC_2(VAR_5);
 if (VAR_9) {
  VAR_5->mac.tx_pkt_filtering = 0;
  return VAR_5->mac.tx_pkt_filtering;
 }


 VAR_13 = VAR_2 >> 2;
 VAR_8 = VAR_3 >> 2;
 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
  *(VAR_7 + VAR_12) = FUNC_0(VAR_5, VAR_0,
           VAR_8 + VAR_12);
 VAR_10 = VAR_6->checksum;
 VAR_6->checksum = 0;
 VAR_11 = FUNC_1((u8 *)VAR_6,
     VAR_2);




 if ((VAR_10 != VAR_11) || (VAR_6->signature != VAR_1)) {
  VAR_5->mac.tx_pkt_filtering = 1;
  return VAR_5->mac.tx_pkt_filtering;
 }


 if (!(VAR_6->status & VAR_4))
  VAR_5->mac.tx_pkt_filtering = 0;

 return VAR_5->mac.tx_pkt_filtering;
}
