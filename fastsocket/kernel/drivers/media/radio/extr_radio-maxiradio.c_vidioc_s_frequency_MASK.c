
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; } ;
struct maxiradio {int freq; int lock; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct maxiradio*,int,char*,int,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct maxiradio*,int) ;
 struct maxiradio* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_3, void *VAR_4,
          struct v4l2_frequency *VAR_5)
{
 struct maxiradio *VAR_6 = FUNC_5(VAR_3);

 if (VAR_5->frequency < VAR_2 || VAR_5->frequency > VAR_1) {
  FUNC_0(VAR_6, 1, "radio freq (%d.%02d MHz) out of range (%d-%d)\n",
     VAR_5->frequency / 16000,
     VAR_5->frequency % 16000 * 100 / 16000,
     VAR_2 / 16000, VAR_1 / 16000);

  return -VAR_0;
 }

 FUNC_2(&VAR_6->lock);
 VAR_6->freq = VAR_5->frequency;
 FUNC_4(VAR_6, VAR_6->freq);
 FUNC_1(125);
 FUNC_3(&VAR_6->lock);

 return 0;
}
