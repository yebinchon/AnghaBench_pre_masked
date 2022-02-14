
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ io_addr; } ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_5, void *VAR_6)
{
 struct comedi_device *VAR_7 = VAR_6;
 int VAR_8;







 VAR_8 = FUNC_1(VAR_4->io_addr + VAR_0) & VAR_3;
 if (!VAR_8)

  return VAR_2;







 switch (VAR_8) {
 case 135:
  break;
 case 130:
  break;
 case 128:
  break;
 case 129:
  break;
 case 134:
  break;
 case 133:
  break;
 case 132:
  break;
 case 131:
  break;
 default:
  break;

 }




 return VAR_1;
}
