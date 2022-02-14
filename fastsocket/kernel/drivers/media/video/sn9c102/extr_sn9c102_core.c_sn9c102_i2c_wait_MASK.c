
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sn9c102_sensor {int frequency; } ;
struct sn9c102_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sn9c102_device*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct sn9c102_device* VAR_3,
   const struct sn9c102_sensor* VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 1; VAR_5 <= 5; VAR_5++) {
  VAR_6 = FUNC_0(VAR_3, 0x08);
  if (VAR_6 < 0)
   return -VAR_1;
  if (VAR_6 & 0x04)
   return 0;
  if (VAR_4->frequency & VAR_2)
   FUNC_1(5*16);
  else
   FUNC_1(16*16);
 }
 return -VAR_0;
}
