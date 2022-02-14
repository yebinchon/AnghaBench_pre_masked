
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vlynq_device {unsigned int irq_start; TYPE_1__* remote; } ;
struct TYPE_2__ {int * int_device; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;





 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 struct vlynq_device* FUNC_2 (unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_4, unsigned int VAR_5)
{
 u32 VAR_6;
 struct vlynq_device *VAR_7 = FUNC_2(VAR_4);
 int VAR_8;

 FUNC_0(!VAR_7);
 VAR_8 = VAR_4 - VAR_7->irq_start;
 VAR_6 = FUNC_3(&VAR_7->remote->int_device[VAR_8 >> 2]);
 switch (VAR_5 & VAR_1) {
 case 130:
 case 131:
 case 132:
  VAR_6 |= VAR_3 << FUNC_1(VAR_8);
  VAR_6 &= ~(VAR_2 << FUNC_1(VAR_8));
  break;
 case 129:
  VAR_6 &= ~(VAR_3 << FUNC_1(VAR_8));
  VAR_6 &= ~(VAR_2 << FUNC_1(VAR_8));
  break;
 case 128:
  VAR_6 &= ~(VAR_3 << FUNC_1(VAR_8));
  VAR_6 |= VAR_2 << FUNC_1(VAR_8);
  break;
 default:
  return -VAR_0;
 }
 FUNC_4(VAR_6, &VAR_7->remote->int_device[VAR_8 >> 2]);
 return 0;
}
