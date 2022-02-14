
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cafe_camera {int dev_lock; int smbus_wait; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct cafe_camera*,unsigned int) ;
 unsigned int FUNC_1 (struct cafe_camera*,int ) ;
 int FUNC_2 (struct cafe_camera*,int ,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct cafe_camera *VAR_8 = VAR_7;
 unsigned int VAR_9;

 FUNC_3(&VAR_8->dev_lock);
 VAR_9 = FUNC_1(VAR_8, VAR_4);
 if ((VAR_9 & VAR_0) == 0) {
  FUNC_4(&VAR_8->dev_lock);
  return VAR_3;
 }
 if (VAR_9 & VAR_1)
  FUNC_0(VAR_8, VAR_9);
 if (VAR_9 & VAR_5) {
  FUNC_2(VAR_8, VAR_4, VAR_5);
  FUNC_5(&VAR_8->smbus_wait);
 }
 FUNC_4(&VAR_8->dev_lock);
 return VAR_2;
}
