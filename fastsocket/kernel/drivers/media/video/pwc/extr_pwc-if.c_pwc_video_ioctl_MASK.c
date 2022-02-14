
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct pwc_device {int modlock; int unplugged; } ;
struct file {struct video_device* private_data; } ;


 long VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 struct pwc_device* FUNC_2 (struct video_device*) ;
 long FUNC_3 (struct file*,unsigned int,unsigned long,int ) ;

__attribute__((used)) static long FUNC_4(struct file *VAR_2,
      unsigned int VAR_3, unsigned long VAR_4)
{
 struct video_device *VAR_5 = VAR_2->private_data;
 struct pwc_device *VAR_6;
 long VAR_7 = -VAR_0;

 if (!VAR_5)
  goto out;
 VAR_6 = FUNC_2(VAR_5);

 FUNC_0(&VAR_6->modlock);
 if (!VAR_6->unplugged)
  VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_1);
 FUNC_1(&VAR_6->modlock);
out:
 return VAR_7;
}
