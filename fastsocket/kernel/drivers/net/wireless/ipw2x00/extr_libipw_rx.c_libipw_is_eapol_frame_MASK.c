
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int len; int* data; } ;
struct net_device {int dev_addr; } ;
struct libipw_hdr_3addr {int addr1; int addr3; int frame_ctl; } ;
struct libipw_device {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct libipw_device *VAR_3,
        struct sk_buff *VAR_4)
{
 struct net_device *VAR_5 = VAR_3->dev;
 u16 VAR_6, VAR_7;
 struct libipw_hdr_3addr *VAR_8;
 u8 *VAR_9;

 if (VAR_4->len < 24)
  return 0;

 VAR_8 = (struct libipw_hdr_3addr *)VAR_4->data;
 VAR_6 = FUNC_1(VAR_8->frame_ctl);


 if ((VAR_6 & (VAR_2 | VAR_1)) ==
     VAR_2 &&
     FUNC_0(VAR_8->addr1, VAR_5->dev_addr) &&
     FUNC_0(VAR_8->addr3, VAR_5->dev_addr)) {

 } else if ((VAR_6 & (VAR_2 | VAR_1)) ==
     VAR_1 &&
     FUNC_0(VAR_8->addr1, VAR_5->dev_addr)) {

 } else
  return 0;

 if (VAR_4->len < 24 + 8)
  return 0;


 VAR_9 = VAR_4->data + 24;
 VAR_7 = (VAR_9[6] << 8) | VAR_9[7];
 if (VAR_7 == VAR_0)
  return 1;

 return 0;
}
