
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; } ;
struct poseidon {int pm_resume; int pm_suspend; struct file* file_for_stream; } ;
struct file {struct poseidon* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct poseidon*,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
         struct v4l2_frequency *VAR_4)
{
 struct poseidon *VAR_5 = VAR_2->private_data;

 VAR_5->file_for_stream = VAR_2;




 return FUNC_0(VAR_5, VAR_4->frequency);
}
