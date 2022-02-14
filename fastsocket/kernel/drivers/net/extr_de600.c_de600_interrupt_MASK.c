
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_7, void *VAR_8)
{
 struct net_device *VAR_9 = VAR_8;
 u8 VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;

 FUNC_7(&VAR_5);

 FUNC_5();
 VAR_10 = FUNC_1(VAR_9);

 do {
  FUNC_4("de600_interrupt (%02X)\n", VAR_10);

  if (VAR_10 & VAR_3)
   FUNC_2(VAR_9);
  else if (!(VAR_10 & VAR_1))
   FUNC_0(VAR_2);


  if (VAR_6 < VAR_4)
   VAR_11 = FUNC_3(VAR_9, VAR_10);
  else
   VAR_11 = 0;

  VAR_10 = FUNC_1(VAR_9);
 } while ( (VAR_10 & VAR_3) || ((++VAR_12 < 100) && VAR_11) );







 FUNC_6();
 if (VAR_11)
  FUNC_9(VAR_9);
 FUNC_8(&VAR_5);
 return VAR_0;
}
