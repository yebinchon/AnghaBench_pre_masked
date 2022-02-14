
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int devt; } ;
typedef int dev_t ;



__attribute__((used)) static int FUNC_0(struct device *VAR_0, void *VAR_1)
{
 dev_t *VAR_2 = VAR_1;

 return VAR_0->devt == *VAR_2;
}
