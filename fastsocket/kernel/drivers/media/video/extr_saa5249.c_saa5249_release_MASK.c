
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa5249_device {int in_use; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct saa5249_device*,int,int,int,...) ;
 struct saa5249_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0)
{
 struct saa5249_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1, 1, 0x20, -1);
 FUNC_1(VAR_1, 5, 3, 3, -1);
 FUNC_0(0, &VAR_1->in_use);
 return 0;
}
