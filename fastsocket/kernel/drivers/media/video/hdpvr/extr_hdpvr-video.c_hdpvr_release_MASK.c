
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdpvr_fh {struct hdpvr_device* dev; } ;
struct hdpvr_device {scalar_t__ status; int io_mutex; int open_count; } ;
struct file {struct hdpvr_fh* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hdpvr_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2)
{
 struct hdpvr_fh *VAR_3 = VAR_2->private_data;
 struct hdpvr_device *VAR_4 = VAR_3->dev;

 if (!VAR_4)
  return -VAR_0;

 FUNC_1(&VAR_4->io_mutex);
 if (!(--VAR_4->open_count) && VAR_4->status == VAR_1)
  FUNC_0(VAR_4);

 FUNC_2(&VAR_4->io_mutex);

 return 0;
}
