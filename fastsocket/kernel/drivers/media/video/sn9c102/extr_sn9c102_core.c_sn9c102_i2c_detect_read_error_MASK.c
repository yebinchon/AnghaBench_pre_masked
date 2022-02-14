
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sn9c102_sensor {int dummy; } ;
struct sn9c102_device {scalar_t__ bridge; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sn9c102_device*,int) ;

__attribute__((used)) static int
FUNC_1(struct sn9c102_device* VAR_3,
         const struct sn9c102_sensor* VAR_4)
{
 int VAR_5 , VAR_6 = 0;

 VAR_5 = FUNC_0(VAR_3, 0x08);
 if (VAR_5 < 0)
  VAR_6 += VAR_5;

 if (VAR_3->bridge == VAR_0 || VAR_3->bridge == VAR_1) {
  if (!(VAR_5 & 0x08))
   VAR_6 += -1;
 } else {
  if (VAR_5 & 0x08)
   VAR_6 += -1;
 }

 return VAR_6 ? -VAR_2 : 0;
}
