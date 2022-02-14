
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amba_kmi_port {int io; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_5, void *VAR_6)
{
 struct amba_kmi_port *VAR_7 = VAR_6;
 unsigned int VAR_8 = FUNC_0(VAR_3);
 int VAR_9 = VAR_1;

 while (VAR_8 & VAR_4) {
  FUNC_1(VAR_7->io, FUNC_0(VAR_2), 0);
  VAR_8 = FUNC_0(VAR_3);
  VAR_9 = VAR_0;
 }

 return VAR_9;
}
