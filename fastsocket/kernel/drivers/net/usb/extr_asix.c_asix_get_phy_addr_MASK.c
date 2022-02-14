
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (struct usbnet*,int ,int ,int ,int,int*) ;
 int FUNC_1 (struct usbnet*,char*,...) ;
 int FUNC_2 (struct usbnet*,char*,int) ;

__attribute__((used)) static inline int FUNC_3(struct usbnet *VAR_1)
{
 u8 VAR_2[2];
 int VAR_3 = FUNC_0(VAR_1, VAR_0, 0, 0, 2, VAR_2);

 FUNC_1(VAR_1, "asix_get_phy_addr()");

 if (VAR_3 < 0) {
  FUNC_2(VAR_1, "Error reading PHYID register: %02x", VAR_3);
  goto out;
 }
 FUNC_1(VAR_1, "asix_get_phy_addr() returning 0x%04x", *((__le16 *)VAR_2));
 VAR_3 = VAR_2[1];

out:
 return VAR_3;
}
