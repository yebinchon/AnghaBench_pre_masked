
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct audio_in* private_data; } ;
struct audio_in {int lock; scalar_t__ opened; int * audpre; int * audrec; } ;


 int FUNC_0 (struct audio_in*) ;
 int FUNC_1 (struct audio_in*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, struct file *VAR_1)
{
 struct audio_in *VAR_2 = VAR_1->private_data;

 FUNC_3(&VAR_2->lock);
 FUNC_1(VAR_2);
 FUNC_0(VAR_2);
 FUNC_2(VAR_2->audrec);
 FUNC_2(VAR_2->audpre);
 VAR_2->audrec = ((void*)0);
 VAR_2->audpre = ((void*)0);
 VAR_2->opened = 0;
 FUNC_4(&VAR_2->lock);
 return 0;
}
