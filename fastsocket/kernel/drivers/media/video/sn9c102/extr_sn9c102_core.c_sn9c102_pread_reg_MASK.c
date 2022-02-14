
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct sn9c102_device {int* reg; } ;


 size_t FUNC_0 (int*) ;

int FUNC_1(struct sn9c102_device* VAR_0, u16 VAR_1)
{
 if (VAR_1 >= FUNC_0(VAR_0->reg))
  return -1;

 return VAR_0->reg[VAR_1];
}
