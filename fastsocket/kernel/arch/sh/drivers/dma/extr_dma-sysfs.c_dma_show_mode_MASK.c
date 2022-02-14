
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdev_attribute {int dummy; } ;
struct sys_device {int dummy; } ;
struct dma_channel {int mode; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 struct dma_channel* FUNC_1 (struct sys_device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct sys_device *VAR_0,
    struct sysdev_attribute *VAR_1, char *VAR_2)
{
 struct dma_channel *VAR_3 = FUNC_1(VAR_0);
 return FUNC_0(VAR_2, "0x%08x\n", VAR_3->mode);
}
