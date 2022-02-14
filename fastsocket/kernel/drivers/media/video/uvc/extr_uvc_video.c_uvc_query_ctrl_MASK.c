
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_device {int dummy; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uvc_device*,int ,int ,int ,int ,void*,int,int ) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct uvc_device *VAR_3, __u8 VAR_4, __u8 VAR_5,
   __u8 VAR_6, __u8 VAR_7, void *VAR_8, __u16 VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
    VAR_2);
 if (VAR_10 != VAR_9) {
  FUNC_1(VAR_1, "Failed to query (%s) UVC control %u on "
   "unit %u: %d (exp. %u).\n", FUNC_2(VAR_4), VAR_7,
   VAR_5, VAR_10, VAR_9);
  return -VAR_0;
 }

 return 0;
}
