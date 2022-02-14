
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vivi_fh {int vb_vidq; struct vivi_dev* dev; } ;
struct vivi_dmaqueue {int dummy; } ;
struct vivi_dev {int users; int mutex; struct vivi_dmaqueue vidq; } ;
struct file {struct vivi_fh* private_data; } ;
struct TYPE_2__ {int minor; } ;


 int FUNC_0 (struct vivi_dev*,int,char*,int,int ) ;
 int FUNC_1 (struct vivi_fh*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (struct file*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct vivi_dmaqueue*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_0)
{
 struct vivi_fh *VAR_1 = VAR_0->private_data;
 struct vivi_dev *VAR_2 = VAR_1->dev;
 struct vivi_dmaqueue *VAR_3 = &VAR_2->vidq;

 int VAR_4 = FUNC_4(VAR_0)->minor;

 FUNC_7(VAR_3);
 FUNC_6(&VAR_1->vb_vidq);
 FUNC_5(&VAR_1->vb_vidq);

 FUNC_1(VAR_1);

 FUNC_2(&VAR_2->mutex);
 VAR_2->users--;
 FUNC_3(&VAR_2->mutex);

 FUNC_0(VAR_2, 1, "close called (minor=%d, users=%d)\n",
  VAR_4, VAR_2->users);

 return 0;
}
