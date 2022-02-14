
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mca_device {unsigned char* pos; } ;



unsigned char FUNC_0(struct mca_device *VAR_0, int VAR_1)
{
 if(VAR_1 < 0 || VAR_1 >= 8)
  return 0;

 return VAR_0->pos[VAR_1];
}
