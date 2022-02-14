
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u8 ;
struct hdpvr_fh {struct hdpvr_device* dev; } ;
struct hdpvr_device {int dummy; } ;
struct file {struct hdpvr_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hdpvr_device*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
   v4l2_std_id *VAR_5)
{
 struct hdpvr_fh *VAR_6 = VAR_3->private_data;
 struct hdpvr_device *VAR_7 = VAR_6->dev;
 u8 VAR_8 = 1;

 if (*VAR_5 & (VAR_1 | VAR_2))
  VAR_8 = 0;

 return FUNC_0(VAR_7, VAR_0, VAR_8);
}
