
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_flags; } ;
struct hci_dev {int name; struct bpa10x_data* driver_data; } ;
struct bpa10x_data {int rx_anchor; int udev; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,struct urb*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char* FUNC_2 (int,int ) ;
 struct urb* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct urb*,int *) ;
 int FUNC_5 (struct urb*,int ,unsigned int,unsigned char*,int,int ,struct hci_dev*) ;
 int FUNC_6 (struct urb*) ;
 unsigned int FUNC_7 (int ,int) ;
 int FUNC_8 (struct urb*,int ) ;
 int FUNC_9 (struct urb*) ;

__attribute__((used)) static inline int FUNC_10(struct hci_dev *VAR_4)
{
 struct bpa10x_data *VAR_5 = VAR_4->driver_data;
 struct urb *VAR_6;
 unsigned char *VAR_7;
 unsigned int VAR_8;
 int VAR_9, VAR_10 = 64;

 FUNC_0("%s", VAR_4->name);

 VAR_6 = FUNC_3(0, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_10, VAR_1);
 if (!VAR_7) {
  FUNC_6(VAR_6);
  return -VAR_0;
 }

 VAR_8 = FUNC_7(VAR_5->udev, 0x82);

 FUNC_5(VAR_6, VAR_5->udev, VAR_8,
     VAR_7, VAR_10, VAR_3, VAR_4);

 VAR_6->transfer_flags |= VAR_2;

 FUNC_4(VAR_6, &VAR_5->rx_anchor);

 VAR_9 = FUNC_8(VAR_6, VAR_1);
 if (VAR_9 < 0) {
  FUNC_1("%s urb %p submission failed (%d)",
      VAR_4->name, VAR_6, -VAR_9);
  FUNC_9(VAR_6);
 }

 FUNC_6(VAR_6);

 return VAR_9;
}
