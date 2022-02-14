
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct si4713_device {int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct si4713_device*) ;
 int FUNC_3 (struct si4713_device*) ;

__attribute__((used)) static int FUNC_4(struct si4713_device *VAR_0, u8 VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->mutex);

 if (VAR_1)
  VAR_2 = FUNC_3(VAR_0);
 else
  VAR_2 = FUNC_2(VAR_0);

 FUNC_1(&VAR_0->mutex);
 return VAR_2;
}
