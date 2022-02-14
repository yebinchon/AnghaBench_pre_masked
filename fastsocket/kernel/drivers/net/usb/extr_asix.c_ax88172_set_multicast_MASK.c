
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct usbnet {int data; } ;
struct net_device {int flags; scalar_t__ mc_count; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {struct dev_mc_list* next; int dmi_addr; } ;
struct asix_data {int* multi_filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct usbnet*,int ,int,int ,int ,int*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int*,int ,int ) ;
 struct usbnet* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_7)
{
 struct usbnet *VAR_8 = FUNC_3(VAR_7);
 struct asix_data *VAR_9 = (struct asix_data *)&VAR_8->data;
 u8 VAR_10 = 0x8c;

 if (VAR_7->flags & VAR_6) {
  VAR_10 |= 0x01;
 } else if (VAR_7->flags & VAR_5
     || VAR_7->mc_count > VAR_2) {
  VAR_10 |= 0x02;
 } else if (VAR_7->mc_count == 0) {

 } else {




  struct dev_mc_list *VAR_11 = VAR_7->mc_list;
  u32 VAR_12;
  int VAR_13;

  FUNC_2(VAR_9->multi_filter, 0, VAR_3);


  for (VAR_13 = 0; VAR_13 < VAR_7->mc_count; VAR_13++) {
   VAR_12 =
       FUNC_1(VAR_4,
          VAR_11->dmi_addr) >> 26;
   VAR_9->multi_filter[VAR_12 >> 3] |=
       1 << (VAR_12 & 7);
   VAR_11 = VAR_11->next;
  }

  FUNC_0(VAR_8, VAR_0, 0, 0,
       VAR_3, VAR_9->multi_filter);

  VAR_10 |= 0x10;
 }

 FUNC_0(VAR_8, VAR_1, VAR_10, 0, 0, ((void*)0));
}
