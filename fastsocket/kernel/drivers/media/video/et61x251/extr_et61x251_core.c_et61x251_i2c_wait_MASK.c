
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et61x251_sensor {scalar_t__ interface; } ;
struct et61x251_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct et61x251_device*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct et61x251_device* VAR_3,
    const struct et61x251_sensor* VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 1; VAR_5 <= 8; VAR_5++) {
  if (VAR_4->interface == VAR_2) {
   VAR_6 = FUNC_0(VAR_3, 0x8e);
   if (!(VAR_6 & 0x02) && (VAR_6 >= 0))
    return 0;
  } else {
   VAR_6 = FUNC_0(VAR_3, 0x8b);
   if (!(VAR_6 & 0x01) && (VAR_6 >= 0))
    return 0;
  }
  if (VAR_6 < 0)
   return -VAR_1;
  FUNC_1(8*8);
 }

 return -VAR_0;
}
