
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct usbnet {int data; } ;
struct net_device {int flags; scalar_t__ mc_count; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {struct dev_mc_list* next; int dmi_addr; } ;
struct asix_data {int* multi_filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct usbnet*,int ,int ,int ,int ,int*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int*,int ,int ) ;
 struct usbnet* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_11)
{
 struct usbnet *VAR_12 = FUNC_3(VAR_11);
 struct asix_data *VAR_13 = (struct asix_data *)&VAR_12->data;
 u16 VAR_14 = VAR_2;

 if (VAR_11->flags & VAR_10) {
  VAR_14 |= VAR_7;
 } else if (VAR_11->flags & VAR_9
     || VAR_11->mc_count > VAR_3) {
  VAR_14 |= VAR_6;
 } else if (VAR_11->mc_count == 0) {

 } else {




  struct dev_mc_list *VAR_15 = VAR_11->mc_list;
  u32 VAR_16;
  int VAR_17;

  FUNC_2(VAR_13->multi_filter, 0, VAR_4);


  for (VAR_17 = 0; VAR_17 < VAR_11->mc_count; VAR_17++) {
   VAR_16 =
       FUNC_1(VAR_8,
          VAR_15->dmi_addr) >> 26;
   VAR_13->multi_filter[VAR_16 >> 3] |=
       1 << (VAR_16 & 7);
   VAR_15 = VAR_15->next;
  }

  FUNC_0(VAR_12, VAR_0, 0, 0,
       VAR_4, VAR_13->multi_filter);

  VAR_14 |= VAR_5;
 }

 FUNC_0(VAR_12, VAR_1, VAR_14, 0, 0, ((void*)0));
}
