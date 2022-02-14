
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skge_port {int dummy; } ;
struct net_device {int dummy; } ;
typedef enum led_mode { ____Placeholder_led_mode } led_mode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct skge_port* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct skge_port*,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_6, u32 VAR_7)
{
 struct skge_port *VAR_8 = FUNC_2(VAR_6);
 unsigned long VAR_9;
 enum led_mode VAR_10 = VAR_4;

 if (!VAR_7 || VAR_7 > (u32)(VAR_5 / VAR_1))
  VAR_9 = FUNC_0(VAR_5 / VAR_1) * 1000;
 else
  VAR_9 = VAR_7 * 1000;

 while (VAR_9 > 0) {
  FUNC_4(VAR_8, VAR_10);
  VAR_10 ^= VAR_4;

  if (FUNC_1(VAR_0))
   break;
  VAR_9 -= VAR_0;
 }


 FUNC_4(VAR_8, FUNC_3(VAR_6) ? VAR_3 : VAR_2);

 return 0;
}
