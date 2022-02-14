
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct usbnet {int data; } ;
struct net_device {int flags; scalar_t__ mc_count; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {int dmi_addr; struct dev_mc_list* next; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct usbnet*,int ,int,int*) ;
 int FUNC_1 (struct usbnet*,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int*,int,int) ;
 struct usbnet* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_7)
{
 struct usbnet *VAR_8 = FUNC_4(VAR_7);


 u8 *VAR_9 = (u8 *) & VAR_8->data;
 u8 VAR_10 = 0x31;

 FUNC_3(VAR_9, 0x00, VAR_2);
 VAR_9[VAR_2 - 1] |= 0x80;

 if (VAR_7->flags & VAR_6) {
  VAR_10 |= 0x02;
 } else if (VAR_7->flags & VAR_5 || VAR_7->mc_count > VAR_0) {
  VAR_10 |= 0x04;
 } else if (VAR_7->mc_count) {
  struct dev_mc_list *VAR_11 = VAR_7->mc_list;
  int VAR_12;

  for (VAR_12 = 0; VAR_12 < VAR_7->mc_count; VAR_12++, VAR_11 = VAR_11->next) {
   u32 VAR_13 = FUNC_2(VAR_4, VAR_11->dmi_addr) >> 26;
   VAR_9[VAR_13 >> 3] |= 1 << (VAR_13 & 0x7);
  }
 }

 FUNC_0(VAR_8, VAR_1, VAR_2, VAR_9);
 FUNC_1(VAR_8, VAR_3, VAR_10);
}
