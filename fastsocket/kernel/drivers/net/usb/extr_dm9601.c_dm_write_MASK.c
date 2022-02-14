
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct usbnet*,char*,int ,int) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (void*,void*,int) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ,void*,int,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct usbnet *VAR_8, u8 VAR_9, u16 VAR_10, void *VAR_11)
{
 void *VAR_12 = ((void*)0);
 int VAR_13 = -VAR_2;

 FUNC_0(VAR_8, "dm_write() reg=0x%02x, length=%d", VAR_9, VAR_10);

 if (VAR_11) {
  VAR_12 = FUNC_2(VAR_10, VAR_3);
  if (!VAR_12)
   goto out;
  FUNC_3(VAR_12, VAR_11, VAR_10);
 }

 VAR_13 = FUNC_4(VAR_8->udev,
         FUNC_5(VAR_8->udev, 0),
         VAR_0,
         VAR_5 | VAR_7 |VAR_6,
         0, VAR_9, VAR_12, VAR_10, VAR_4);
 FUNC_1(VAR_12);
 if (VAR_13 >= 0 && VAR_13 < VAR_10)
  VAR_13 = -VAR_1;
 out:
 return VAR_13;
}
