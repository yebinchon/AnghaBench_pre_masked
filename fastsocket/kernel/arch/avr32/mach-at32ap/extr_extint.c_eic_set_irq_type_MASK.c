
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_desc {unsigned int status; } ;
struct eic {unsigned int first_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;




 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct eic*,int ) ;
 int FUNC_2 (struct eic*,int ,int) ;
 struct eic* FUNC_3 (unsigned int) ;
 int VAR_7 ;
 int VAR_8 ;
 struct irq_desc* VAR_9 ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_10, unsigned int VAR_11)
{
 struct eic *VAR_12 = FUNC_3(VAR_10);
 struct irq_desc *VAR_13;
 unsigned int VAR_14 = VAR_10 - VAR_12->first_irq;
 u32 VAR_15, VAR_16, VAR_17;
 int VAR_18 = 0;

 VAR_11 &= VAR_4;
 if (VAR_11 == VAR_3)
  VAR_11 = 128;

 VAR_13 = &VAR_9[VAR_10];

 VAR_15 = FUNC_1(VAR_12, VAR_6);
 VAR_16 = FUNC_1(VAR_12, VAR_0);
 VAR_17 = FUNC_1(VAR_12, VAR_5);

 switch (VAR_11) {
 case 128:
  VAR_15 |= 1 << VAR_14;
  VAR_17 &= ~(1 << VAR_14);
  break;
 case 129:
  VAR_15 |= 1 << VAR_14;
  VAR_17 |= 1 << VAR_14;
  break;
 case 130:
  VAR_15 &= ~(1 << VAR_14);
  VAR_16 |= 1 << VAR_14;
  break;
 case 131:
  VAR_15 &= ~(1 << VAR_14);
  VAR_16 &= ~(1 << VAR_14);
  break;
 default:
  VAR_18 = -VAR_1;
  break;
 }

 if (VAR_18 == 0) {
  FUNC_2(VAR_12, VAR_6, VAR_15);
  FUNC_2(VAR_12, VAR_0, VAR_16);
  FUNC_2(VAR_12, VAR_5, VAR_17);

  if (VAR_11 & (128 | 129)) {
   VAR_11 |= VAR_2;
   FUNC_0(VAR_10, VAR_8);
  } else
   FUNC_0(VAR_10, VAR_7);
  VAR_13->status &= ~(VAR_4 | VAR_2);
  VAR_13->status |= VAR_11;
 }

 return VAR_18;
}
