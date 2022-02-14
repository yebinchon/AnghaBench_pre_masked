
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysdev_attribute {int dummy; } ;
struct sys_device {int dummy; } ;
struct dma_info {char* name; } ;
struct dma_channel {int chan; char* dev_id; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct dma_channel* FUNC_0 (int) ;
 struct dma_info* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int,char*,char*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static ssize_t FUNC_4(struct sys_device *VAR_1,
    struct sysdev_attribute *VAR_2, char *VAR_3)
{
 ssize_t VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct dma_info *VAR_6 = FUNC_1(VAR_5);
  struct dma_channel *VAR_7 = FUNC_0(VAR_5);

  if (FUNC_3(!VAR_6) || !VAR_7)
   continue;

  VAR_4 += FUNC_2(VAR_3 + VAR_4, "%2d: %14s    %s\n",
          VAR_7->chan, VAR_6->name,
          VAR_7->dev_id);
 }

 return VAR_4;
}
