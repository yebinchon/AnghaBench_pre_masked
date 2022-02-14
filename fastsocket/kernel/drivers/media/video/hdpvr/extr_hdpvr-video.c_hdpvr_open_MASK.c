
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdpvr_fh {struct hdpvr_device* dev; } ;
struct hdpvr_device {int io_mutex; int open_count; int v4l2_dev; } ;
struct file {struct hdpvr_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hdpvr_fh* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct file*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_3)
{
 struct hdpvr_device *VAR_4;
 struct hdpvr_fh *VAR_5;
 int VAR_6 = -VAR_1;

 VAR_4 = (struct hdpvr_device *)FUNC_6(FUNC_5(VAR_3));
 if (!VAR_4) {
  FUNC_3("open failing with with ENODEV\n");
  VAR_6 = -VAR_0;
  goto err;
 }

 VAR_5 = FUNC_0(sizeof(struct hdpvr_fh), VAR_2);
 if (!VAR_5) {
  FUNC_4(&VAR_4->v4l2_dev, "Out of memory\n");
  goto err;
 }


 FUNC_1(&VAR_4->io_mutex);
 VAR_4->open_count++;
 FUNC_2(&VAR_4->io_mutex);

 VAR_5->dev = VAR_4;


 VAR_3->private_data = VAR_5;

 VAR_6 = 0;
err:
 return VAR_6;
}
