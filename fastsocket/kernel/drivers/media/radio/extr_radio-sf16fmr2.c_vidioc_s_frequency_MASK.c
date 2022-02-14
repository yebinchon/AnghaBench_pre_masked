
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; } ;
struct fmr2 {int curfreq; int lock; int mute; scalar_t__ curvol; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fmr2*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct fmr2* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
     struct v4l2_frequency *VAR_5)
{
 struct fmr2 *VAR_6 = FUNC_3(VAR_3);

 if (VAR_5->frequency < VAR_2 ||
   VAR_5->frequency > VAR_1)
  return -VAR_0;


 VAR_6->curfreq = (VAR_5->frequency / 200) * 200;


 if (VAR_6->curvol && !VAR_6->mute) {
  FUNC_1(&VAR_6->lock);
  FUNC_0(VAR_6);
  FUNC_2(&VAR_6->lock);
 }
 return 0;
}
