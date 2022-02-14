
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef int irqreturn_t ;
typedef int byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_7(int VAR_6, void *VAR_7)
{
 struct net_device *VAR_8 = VAR_7;
 byte VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;

 FUNC_5(&VAR_5);


 VAR_9 = FUNC_0(VAR_8, VAR_2);

 FUNC_4("de620_interrupt (%2.2X)\n", VAR_9);

 if (VAR_9 & VAR_1) {
  do {
   VAR_11 = FUNC_1(VAR_8);
   FUNC_4("again=%d\n", VAR_11);
  }
  while (VAR_11 && (++VAR_10 < 100));
 }

 if(FUNC_2(VAR_8) != (VAR_3 | VAR_4))
  FUNC_3(VAR_8);

 FUNC_6(&VAR_5);
 return VAR_0;
}
