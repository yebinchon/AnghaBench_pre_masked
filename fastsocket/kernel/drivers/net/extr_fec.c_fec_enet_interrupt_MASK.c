
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct net_device {int dummy; } ;
struct fec_enet_private {scalar_t__ hwp; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct fec_enet_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t
FUNC_6(int VAR_6, void * VAR_7)
{
 struct net_device *VAR_8 = VAR_7;
 struct fec_enet_private *VAR_9 = FUNC_3(VAR_8);
 uint VAR_10;
 irqreturn_t VAR_11 = VAR_5;

 do {
  VAR_10 = FUNC_4(VAR_9->hwp + VAR_3);
  FUNC_5(VAR_10, VAR_9->hwp + VAR_3);

  if (VAR_10 & VAR_1) {
   VAR_11 = VAR_4;
   FUNC_1(VAR_8);
  }





  if (VAR_10 & VAR_2) {
   VAR_11 = VAR_4;
   FUNC_2(VAR_8);
  }

  if (VAR_10 & VAR_0) {
   VAR_11 = VAR_4;
   FUNC_0(VAR_8);
  }

 } while (VAR_10);

 return VAR_11;
}
