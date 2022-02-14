
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; int frequency; } ;
struct cx23885_dev {scalar_t__ tuner_type; int lock; int freq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cx23885_dev*,int ,int ,struct v4l2_frequency*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct cx23885_dev *VAR_4, struct v4l2_frequency *VAR_5)
{
 if (FUNC_4(VAR_1 == VAR_4->tuner_type))
  return -VAR_0;
 if (FUNC_4(VAR_5->tuner != 0))
  return -VAR_0;

 FUNC_2(&VAR_4->lock);
 VAR_4->freq = VAR_5->frequency;

 FUNC_0(VAR_4, VAR_3, VAR_2, VAR_5);


 FUNC_1(10);

 FUNC_3(&VAR_4->lock);

 return 0;
}
