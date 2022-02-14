
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_device {int udev; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,unsigned int,int,int,int,int,void*,int ,int) ;
 unsigned int FUNC_1 (int ,int ) ;
 unsigned int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct uvc_device *VAR_4, __u8 VAR_5, __u8 VAR_6,
   __u8 VAR_7, __u8 VAR_8, void *VAR_9, __u16 VAR_10,
   int VAR_11)
{
 __u8 VAR_12 = VAR_3 | VAR_2;
 unsigned int VAR_13;

 VAR_13 = (VAR_5 & 0x80) ? FUNC_1(VAR_4->udev, 0)
         : FUNC_2(VAR_4->udev, 0);
 VAR_12 |= (VAR_5 & 0x80) ? VAR_0 : VAR_1;

 return FUNC_0(VAR_4->udev, VAR_13, VAR_5, VAR_12, VAR_8 << 8,
   VAR_6 << 8 | VAR_7, VAR_9, VAR_10, VAR_11);
}
