
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fir_base; scalar_t__ speed; } ;
struct w83977af_ir {TYPE_1__ io; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 struct w83977af_ir* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct w83977af_ir*,int) ;
 int FUNC_6 (struct w83977af_ir*,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_5, void *VAR_6)
{
 struct net_device *VAR_7 = VAR_6;
 struct w83977af_ir *VAR_8;
 __u8 VAR_9, VAR_10, VAR_11;
 int VAR_12;

 VAR_8 = FUNC_2(VAR_7);

 VAR_12 = VAR_8->io.fir_base;


 VAR_9 = FUNC_1(VAR_12+VAR_4);
 FUNC_4(VAR_12, VAR_3);

 VAR_10 = FUNC_1(VAR_12+VAR_0);
 VAR_11 = FUNC_1(VAR_12+VAR_1) & VAR_10;

 FUNC_3(0, VAR_12+VAR_0);

 if (VAR_11) {

  if (VAR_8->io.speed > VAR_2 )
   VAR_10 = FUNC_5(VAR_8, VAR_11);
  else
   VAR_10 = FUNC_6(VAR_8, VAR_11);
 }

 FUNC_3(VAR_10, VAR_12+VAR_0);
 FUNC_3(VAR_9, VAR_12+VAR_4);
 return FUNC_0(VAR_11);
}
