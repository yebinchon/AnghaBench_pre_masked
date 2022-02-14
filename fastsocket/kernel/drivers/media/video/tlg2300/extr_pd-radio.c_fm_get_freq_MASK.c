
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_frequency {int frequency; } ;
struct TYPE_2__ {int fm_freq; } ;
struct poseidon {TYPE_1__ radio_data; } ;
struct file {struct poseidon* private_data; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1,
         struct v4l2_frequency *VAR_2)
{
 struct poseidon *VAR_3 = VAR_0->private_data;

 VAR_2->frequency = VAR_3->radio_data.fm_freq;
 return 0;
}
