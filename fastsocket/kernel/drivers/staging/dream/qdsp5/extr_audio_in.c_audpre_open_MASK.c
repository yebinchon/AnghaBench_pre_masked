
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct audio_in* private_data; } ;
struct audio_in {int dummy; } ;


 struct audio_in VAR_0 ;

__attribute__((used)) static int FUNC_0(struct inode *VAR_1, struct file *VAR_2)
{
 struct audio_in *VAR_3 = &VAR_0;
 VAR_2->private_data = VAR_3;
 return 0;
}
