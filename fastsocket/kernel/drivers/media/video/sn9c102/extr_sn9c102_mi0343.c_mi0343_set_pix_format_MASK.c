
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format {scalar_t__ pixelformat; } ;
struct sn9c102_sensor {int i2c_slave_id; } ;
struct sn9c102_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct sn9c102_sensor* FUNC_0 (struct sn9c102_device*) ;
 scalar_t__ FUNC_1 (struct sn9c102_device*,struct sn9c102_sensor*,int,int ,int,int,int,int ,int ) ;
 scalar_t__ FUNC_2 (struct sn9c102_device*,int,int) ;

__attribute__((used)) static int FUNC_3(struct sn9c102_device* VAR_1,
     const struct v4l2_pix_format* VAR_2)
{
 struct sn9c102_sensor* VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = 0;

 if (VAR_2->pixelformat == VAR_0) {
  VAR_4 += FUNC_1(VAR_1, VAR_3, 4, VAR_3->i2c_slave_id,
       0x0a, 0x00, 0x03, 0, 0);
  VAR_4 += FUNC_2(VAR_1, 0x20, 0x19);
 } else {
  VAR_4 += FUNC_1(VAR_1, VAR_3, 4, VAR_3->i2c_slave_id,
       0x0a, 0x00, 0x05, 0, 0);
  VAR_4 += FUNC_2(VAR_1, 0xa0, 0x19);
 }

 return VAR_4;
}
