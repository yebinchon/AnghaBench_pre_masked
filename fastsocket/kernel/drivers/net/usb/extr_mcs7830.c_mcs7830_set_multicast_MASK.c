
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {int data; } ;
struct net_device {int flags; scalar_t__ mc_count; struct dev_mc_list* mc_list; } ;
struct mcs7830_data {int config; int* multi_filter; } ;
struct dev_mc_list {struct dev_mc_list* next; int dmi_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct usbnet*,int ,int,int*) ;
 int FUNC_2 (int*,int ,int) ;
 struct usbnet* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_9)
{
 struct usbnet *VAR_10 = FUNC_3(VAR_9);
 struct mcs7830_data *VAR_11 = (struct mcs7830_data *)&VAR_10->data;

 VAR_11->config = VAR_4;


 VAR_11->config |= VAR_2;

 if (VAR_9->flags & VAR_7) {
  VAR_11->config |= VAR_3;
 } else if (VAR_9->flags & VAR_6
     || VAR_9->mc_count > VAR_8) {
  VAR_11->config |= VAR_2;
 } else if (VAR_9->mc_count == 0) {

 } else {




  struct dev_mc_list *VAR_12 = VAR_9->mc_list;
  u32 VAR_13;
  int VAR_14;

  FUNC_2(VAR_11->multi_filter, 0, sizeof VAR_11->multi_filter);


  for (VAR_14 = 0; VAR_14 < VAR_9->mc_count; VAR_14++) {
   VAR_13 = FUNC_0(VAR_0, VAR_12->dmi_addr) >> 26;
   VAR_11->multi_filter[VAR_13 >> 3] |= 1 << (VAR_13 & 7);
   VAR_12 = VAR_12->next;
  }

  FUNC_1(VAR_10, VAR_5,
    sizeof VAR_11->multi_filter,
    VAR_11->multi_filter);
 }

 FUNC_1(VAR_10, VAR_1, 1, &VAR_11->config);
}
