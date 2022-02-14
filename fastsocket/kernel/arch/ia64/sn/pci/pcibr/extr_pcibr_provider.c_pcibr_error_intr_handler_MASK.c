
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcibus_info {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct pcibus_info*) ;

__attribute__((used)) static irqreturn_t
FUNC_2(int VAR_1, void *VAR_2)
{
 struct pcibus_info *VAR_3 = VAR_2;

 if (FUNC_1(VAR_3) < 0)
  FUNC_0("pcibr_error_intr_handler(): Fatal Bridge Error");

 return VAR_0;
}
