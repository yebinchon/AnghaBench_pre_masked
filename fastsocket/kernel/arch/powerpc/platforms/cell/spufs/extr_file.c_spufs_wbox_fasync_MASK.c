
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_context {int wbox_fasync; } ;
struct file {struct spu_context* private_data; } ;


 int FUNC_0 (int,struct file*,int,int *) ;

__attribute__((used)) static int FUNC_1(int VAR_0, struct file *VAR_1, int VAR_2)
{
 struct spu_context *VAR_3 = VAR_1->private_data;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3->wbox_fasync);

 return VAR_4;
}
