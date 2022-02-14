
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct c2port_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct c2port_device*,int*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct c2port_device *VAR_1)
{
 u8 VAR_2;
 int VAR_3, VAR_4 = 20;

 do {
  VAR_3 = (FUNC_0(VAR_1, &VAR_2));
  if (VAR_3 < 0)
   return -VAR_0;

  if (!(VAR_2 & 0x02))
   break;

  FUNC_1(1);
 } while (--VAR_4 > 0);
 if (VAR_4 == 0)
  return -VAR_0;

 return 0;
}
