
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct TYPE_2__ {int vb_lock; } ;
struct saa7134_dev {TYPE_1__ empress_tsq; int empress_users; } ;
struct file {struct saa7134_dev* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 struct video_device* FUNC_7 (struct file*) ;
 int FUNC_8 (struct video_device*) ;
 struct saa7134_dev* FUNC_9 (struct file*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_2)
{
 struct video_device *VAR_3 = FUNC_7(VAR_2);
 struct saa7134_dev *VAR_4 = FUNC_9(VAR_2);
 int VAR_5;

 FUNC_2("open dev=%s\n", FUNC_8(VAR_3));
 VAR_5 = -VAR_0;
 if (!FUNC_3(&VAR_4->empress_tsq.vb_lock))
  return VAR_5;
 if (FUNC_1(&VAR_4->empress_users))
  goto done;


 FUNC_6(VAR_1,
  FUNC_5(VAR_1) & ~(1 << 6));

 FUNC_0(&VAR_4->empress_users);
 VAR_2->private_data = VAR_4;
 VAR_5 = 0;

done:
 FUNC_4(&VAR_4->empress_tsq.vb_lock);
 return VAR_5;
}
