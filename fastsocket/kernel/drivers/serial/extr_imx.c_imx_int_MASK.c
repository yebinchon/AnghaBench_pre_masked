
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ membase; } ;
struct imx_port {TYPE_1__ port; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int,void*) ;
 int FUNC_1 (int,void*) ;
 int FUNC_2 (int,void*) ;
 unsigned int FUNC_3 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_7, void *VAR_8)
{
 struct imx_port *VAR_9 = VAR_8;
 unsigned int VAR_10;

 VAR_10 = FUNC_3(VAR_9->port.membase + VAR_3);

 if (VAR_10 & VAR_4)
  FUNC_1(VAR_7, VAR_8);

 if (VAR_10 & VAR_6 &&
   FUNC_3(VAR_9->port.membase + VAR_1) & VAR_2)
  FUNC_2(VAR_7, VAR_8);

 if (VAR_10 & VAR_5)
  FUNC_0(VAR_7, VAR_8);

 return VAR_0;
}
