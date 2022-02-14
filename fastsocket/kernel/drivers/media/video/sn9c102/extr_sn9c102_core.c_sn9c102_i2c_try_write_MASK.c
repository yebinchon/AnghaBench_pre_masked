
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sn9c102_sensor {int i2c_slave_id; } ;
struct sn9c102_device {int dummy; } ;


 int FUNC_0 (struct sn9c102_device*,struct sn9c102_sensor const*,int,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct sn9c102_device* VAR_0,
     const struct sn9c102_sensor* VAR_1,
     u8 VAR_2, u8 VAR_3)
{
 return FUNC_0(VAR_0, VAR_1, 3,
      VAR_1->i2c_slave_id, VAR_2,
      VAR_3, 0, 0, 0);
}
