
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct pnx8xxx_port {TYPE_1__ port; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct pnx8xxx_port*) ;
 int FUNC_1 (struct pnx8xxx_port*) ;
 unsigned int FUNC_2 (struct pnx8xxx_port*,int ) ;
 int FUNC_3 (struct pnx8xxx_port*,int ,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_7, void *VAR_8)
{
 struct pnx8xxx_port *VAR_9 = VAR_8;
 unsigned int VAR_10;

 FUNC_4(&VAR_9->port.lock);

 VAR_10 = FUNC_2(VAR_9, VAR_3) & FUNC_2(VAR_9, VAR_2);


 if (VAR_10 & (VAR_5 | VAR_4))
  FUNC_0(VAR_9);


 if (VAR_10 & VAR_6)
  FUNC_1(VAR_9);


 FUNC_3(VAR_9, VAR_1, VAR_10);

 FUNC_5(&VAR_9->port.lock);
 return VAR_0;
}
