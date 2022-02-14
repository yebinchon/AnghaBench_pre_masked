
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device*,scalar_t__) ;
 int FUNC_1 (struct net_device*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(struct net_device* VAR_3, u8 VAR_4)
{
 u8 VAR_5;
 if (VAR_4 == VAR_2)
 {

  VAR_5 = FUNC_0(VAR_3, VAR_1+3);
  FUNC_1(VAR_3, VAR_1+3, (VAR_5 | 0x80));


  FUNC_1(VAR_3, VAR_0, 0x03);
 }
 else
 {

  VAR_5 = FUNC_0(VAR_3, VAR_1+3);
  FUNC_1(VAR_3, VAR_1+3, (VAR_5 & 0x7F));


  FUNC_1(VAR_3, VAR_0, 0x02);
 }

}
