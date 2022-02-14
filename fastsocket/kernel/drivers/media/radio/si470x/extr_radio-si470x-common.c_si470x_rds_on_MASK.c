
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {int lock; int * registers; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct si470x_device*,size_t) ;

int FUNC_3(struct si470x_device *VAR_2)
{
 int VAR_3;


 FUNC_0(&VAR_2->lock);
 VAR_2->registers[VAR_0] |= VAR_1;
 VAR_3 = FUNC_2(VAR_2, VAR_0);
 if (VAR_3 < 0)
  VAR_2->registers[VAR_0] &= ~VAR_1;
 FUNC_1(&VAR_2->lock);

 return VAR_3;
}
