
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wl1271 {int fuse_oui_addr; int fuse_nic_addr; int mutex; TYPE_1__* hw; int plt; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (int ,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_6(struct wl1271 *VAR_6, struct nlattr *VAR_7[])
{
 struct sk_buff *VAR_8;
 u8 VAR_9[VAR_4];
 int VAR_10 = 0;

 FUNC_3(&VAR_6->mutex);

 if (!VAR_6->plt) {
  VAR_10 = -VAR_0;
  goto out;
 }

 if (VAR_6->fuse_oui_addr == 0 && VAR_6->fuse_nic_addr == 0) {
  VAR_10 = -VAR_3;
  goto out;
 }

 VAR_9[0] = (u8)(VAR_6->fuse_oui_addr >> 16);
 VAR_9[1] = (u8)(VAR_6->fuse_oui_addr >> 8);
 VAR_9[2] = (u8) VAR_6->fuse_oui_addr;
 VAR_9[3] = (u8)(VAR_6->fuse_nic_addr >> 16);
 VAR_9[4] = (u8)(VAR_6->fuse_nic_addr >> 8);
 VAR_9[5] = (u8) VAR_6->fuse_nic_addr;

 VAR_8 = FUNC_0(VAR_6->hw->wiphy, VAR_4);
 if (!VAR_8) {
  VAR_10 = -VAR_2;
  goto out;
 }

 if (FUNC_5(VAR_8, VAR_5, VAR_4, VAR_9)) {
  FUNC_2(VAR_8);
  VAR_10 = -VAR_1;
  goto out;
 }

 VAR_10 = FUNC_1(VAR_8);
 if (VAR_10 < 0)
  goto out;

out:
 FUNC_4(&VAR_6->mutex);
 return VAR_10;
}
