
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct u300_gpio_port {int number; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int data; int (* callback ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_7, void *VAR_8)
{
 struct u300_gpio_port *VAR_9 = VAR_8;
 u32 VAR_10;
 int VAR_11;


 VAR_10 = FUNC_2(VAR_6 + VAR_2 + VAR_9->number *
    VAR_1);

 VAR_10 &= FUNC_2(VAR_6 + VAR_2 + VAR_9->number *
    VAR_1);

 VAR_10 &= VAR_3;

 FUNC_4(VAR_10, VAR_6 + VAR_2 + VAR_9->number *
    VAR_1);

 while (VAR_10 != 0) {
  unsigned VAR_12;

  VAR_11 = FUNC_0(VAR_10);

  VAR_10 &= ~(1 << VAR_11);
  VAR_12 = (VAR_9->number << 3) + VAR_11;

  if (VAR_4[VAR_12].callback)
   (void)VAR_4[VAR_12].callback(VAR_4[VAR_12].data);
  else
   FUNC_1(VAR_5, "stray GPIO IRQ on line %d\n",
          VAR_12);
 }
 return VAR_0;
}
