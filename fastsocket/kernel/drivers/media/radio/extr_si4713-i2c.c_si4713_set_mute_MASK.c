
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct si4713_device {int mutex; int mute; scalar_t__ power_state; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct si4713_device*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct si4713_device *VAR_1, u16 VAR_2)
{
 int VAR_3 = 0;

 VAR_2 = FUNC_3(VAR_2);

 FUNC_1(&VAR_1->mutex);

 if (VAR_1->power_state)
  VAR_3 = FUNC_4(VAR_1,
    VAR_0, VAR_2);

 if (VAR_3 >= 0)
  VAR_1->mute = FUNC_0(VAR_2);

 FUNC_2(&VAR_1->mutex);

 return VAR_3;
}
