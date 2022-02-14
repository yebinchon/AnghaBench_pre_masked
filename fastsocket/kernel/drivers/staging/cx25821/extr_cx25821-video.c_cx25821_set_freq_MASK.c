
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; } ;
struct cx25821_dev {int lock; int freq; } ;


 int FUNC_0 (struct cx25821_dev*,int ,int ,struct v4l2_frequency*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_4(struct cx25821_dev *VAR_2, struct v4l2_frequency *VAR_3)
{
 FUNC_2(&VAR_2->lock);
 VAR_2->freq = VAR_3->frequency;

 FUNC_0(VAR_2, VAR_1, VAR_0, VAR_3);


 FUNC_1(10);

 FUNC_3(&VAR_2->lock);

 return 0;
}
