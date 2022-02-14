
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct se_device {int dev_reservation_lock; } ;


 int FUNC_0 (struct se_device*,unsigned char*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(
 struct se_device *VAR_0,
 unsigned char *VAR_1,
 u32 VAR_2,
 int VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_0->dev_reservation_lock);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2,
    VAR_3);
 FUNC_2(&VAR_0->dev_reservation_lock);

 return VAR_4;
}
