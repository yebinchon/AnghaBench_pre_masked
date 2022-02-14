
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; int type; } ;
struct maxiradio {int freq; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct maxiradio*,int,char*,int,int) ;
 struct maxiradio* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
          struct v4l2_frequency *VAR_3)
{
 struct maxiradio *VAR_4 = FUNC_1(VAR_1);

 VAR_3->type = VAR_0;
 VAR_3->frequency = VAR_4->freq;

 FUNC_0(VAR_4, 4, "radio freq is %d.%02d MHz",
    VAR_3->frequency / 16000,
    VAR_3->frequency % 16000 * 100 / 16000);

 return 0;
}
