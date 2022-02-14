
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tg3 {TYPE_1__* dev; } ;
struct TYPE_2__ {int* dev_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct tg3*) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_8, bool VAR_9)
{
 u32 VAR_10, VAR_11;
 int VAR_12;

 VAR_10 = ((VAR_8->dev->dev_addr[0] << 8) |
       VAR_8->dev->dev_addr[1]);
 VAR_11 = ((VAR_8->dev->dev_addr[2] << 24) |
      (VAR_8->dev->dev_addr[3] << 16) |
      (VAR_8->dev->dev_addr[4] << 8) |
      (VAR_8->dev->dev_addr[5] << 0));
 for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
  if (VAR_12 == 1 && VAR_9)
   continue;
  FUNC_1(VAR_2 + (VAR_12 * 8), VAR_10);
  FUNC_1(VAR_3 + (VAR_12 * 8), VAR_11);
 }

 if (FUNC_0(VAR_8) == VAR_0 ||
     FUNC_0(VAR_8) == VAR_1) {
  for (VAR_12 = 0; VAR_12 < 12; VAR_12++) {
   FUNC_1(VAR_4 + (VAR_12 * 8), VAR_10);
   FUNC_1(VAR_5 + (VAR_12 * 8), VAR_11);
  }
 }

 VAR_10 = (VAR_8->dev->dev_addr[0] +
       VAR_8->dev->dev_addr[1] +
       VAR_8->dev->dev_addr[2] +
       VAR_8->dev->dev_addr[3] +
       VAR_8->dev->dev_addr[4] +
       VAR_8->dev->dev_addr[5]) &
  VAR_7;
 FUNC_1(VAR_6, VAR_10);
}
