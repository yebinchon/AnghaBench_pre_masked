
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ (* read ) (struct e1000_hw*,int*,int) ;int (* check_for_rst ) (struct e1000_hw*) ;} ;
struct e1000_mbx_info {int timeout; TYPE_1__ ops; } ;
struct e1000_mac_info {int get_link_status; } ;
struct e1000_hw {struct e1000_mac_info mac; struct e1000_mbx_info mbx; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int*,int) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_6)
{
 struct e1000_mbx_info *VAR_7 = &VAR_6->mbx;
 struct e1000_mac_info *VAR_8 = &VAR_6->mac;
 s32 VAR_9 = VAR_2;
 u32 VAR_10 = 0;
 if (!VAR_7->ops.check_for_rst(VAR_6) || !VAR_7->timeout)
  VAR_8->get_link_status = 1;

 if (!VAR_8->get_link_status)
  goto out;


 if (!(FUNC_0(VAR_5) & VAR_1))
  goto out;



 if (VAR_7->ops.read(VAR_6, &VAR_10, 1))
  goto out;


 if (!(VAR_10 & VAR_3)) {

  if (VAR_10 & VAR_4)
   VAR_9 = -VAR_0;
  goto out;
 }


 if (!VAR_7->timeout) {
  VAR_9 = -VAR_0;
  goto out;
 }



 VAR_8->get_link_status = 0;

out:
 return VAR_9;
}
