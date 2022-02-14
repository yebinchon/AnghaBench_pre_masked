
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format {scalar_t__ pixelformat; } ;
struct sn9c102_sensor {int i2c_slave_id; } ;
struct sn9c102_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct sn9c102_device*) ;
 struct sn9c102_sensor* FUNC_1 (struct sn9c102_device*) ;
 scalar_t__ FUNC_2 (struct sn9c102_device*,struct sn9c102_sensor*,int,int ,int,int,int,int ,int ) ;
 scalar_t__ FUNC_3 (struct sn9c102_device*,int,int) ;

__attribute__((used)) static int FUNC_4(struct sn9c102_device* VAR_3,
     const struct v4l2_pix_format* VAR_4)
{
 struct sn9c102_sensor* VAR_5 = FUNC_1(VAR_3);
 int VAR_6 = 0;

 if (VAR_4->pixelformat == VAR_2) {
  VAR_6 += FUNC_2(VAR_3, VAR_5, 4, VAR_5->i2c_slave_id,
       0x0a, 0x00, 0x05, 0, 0);
  VAR_6 += FUNC_3(VAR_3, 0x60, 0x19);
  if (FUNC_0(VAR_3) == VAR_0 ||
      FUNC_0(VAR_3) == VAR_1)
   VAR_6 += FUNC_3(VAR_3, 0xa6, 0x17);
 } else {
  VAR_6 += FUNC_2(VAR_3, VAR_5, 4, VAR_5->i2c_slave_id,
       0x0a, 0x00, 0x02, 0, 0);
  VAR_6 += FUNC_3(VAR_3, 0x20, 0x19);
  if (FUNC_0(VAR_3) == VAR_0 ||
      FUNC_0(VAR_3) == VAR_1)
   VAR_6 += FUNC_3(VAR_3, 0xa2, 0x17);
 }

 return VAR_6;
}
