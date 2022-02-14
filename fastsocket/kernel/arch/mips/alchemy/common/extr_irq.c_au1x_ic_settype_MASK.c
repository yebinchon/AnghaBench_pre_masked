
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_chip {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;






 struct irq_chip VAR_15 ;
 struct irq_chip VAR_16 ;
 int FUNC_0 () ;
 int FUNC_1 (int,unsigned long) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (unsigned int,struct irq_chip*) ;
 int FUNC_3 (unsigned int,struct irq_chip*,int ,char*) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_19, unsigned int VAR_20)
{
 struct irq_chip *VAR_21;
 unsigned long VAR_22[6];
 unsigned int VAR_23, VAR_24;
 int VAR_25;

 if (VAR_19 >= VAR_1) {
  VAR_23 = VAR_19 - VAR_1;
  VAR_21 = &VAR_16;
  VAR_24 = 1;
 } else {
  VAR_23 = VAR_19 - VAR_0;
  VAR_21 = &VAR_15;
  VAR_24 = 0;
 }

 if (VAR_23 > 31)
  return -VAR_2;

 VAR_22[0] = VAR_24 ? VAR_10 : VAR_4;
 VAR_22[1] = VAR_24 ? VAR_12 : VAR_6;
 VAR_22[2] = VAR_24 ? VAR_14 : VAR_8;
 VAR_22[3] = VAR_24 ? VAR_9 : VAR_3;
 VAR_22[4] = VAR_24 ? VAR_11 : VAR_5;
 VAR_22[5] = VAR_24 ? VAR_13 : VAR_7;

 VAR_25 = 0;

 switch (VAR_20) {
 case 131:
  FUNC_1(1 << VAR_23, VAR_22[5]);
  FUNC_1(1 << VAR_23, VAR_22[4]);
  FUNC_1(1 << VAR_23, VAR_22[0]);
  FUNC_3(VAR_19, VAR_21,
    VAR_17, "riseedge");
  break;
 case 132:
  FUNC_1(1 << VAR_23, VAR_22[5]);
  FUNC_1(1 << VAR_23, VAR_22[1]);
  FUNC_1(1 << VAR_23, VAR_22[3]);
  FUNC_3(VAR_19, VAR_21,
    VAR_17, "falledge");
  break;
 case 133:
  FUNC_1(1 << VAR_23, VAR_22[5]);
  FUNC_1(1 << VAR_23, VAR_22[1]);
  FUNC_1(1 << VAR_23, VAR_22[0]);
  FUNC_3(VAR_19, VAR_21,
    VAR_17, "bothedge");
  break;
 case 130:
  FUNC_1(1 << VAR_23, VAR_22[2]);
  FUNC_1(1 << VAR_23, VAR_22[4]);
  FUNC_1(1 << VAR_23, VAR_22[0]);
  FUNC_3(VAR_19, VAR_21,
    VAR_18, "hilevel");
  break;
 case 129:
  FUNC_1(1 << VAR_23, VAR_22[2]);
  FUNC_1(1 << VAR_23, VAR_22[1]);
  FUNC_1(1 << VAR_23, VAR_22[3]);
  FUNC_3(VAR_19, VAR_21,
    VAR_18, "lowlevel");
  break;
 case 128:
  FUNC_1(1 << VAR_23, VAR_22[5]);
  FUNC_1(1 << VAR_23, VAR_22[4]);
  FUNC_1(1 << VAR_23, VAR_22[3]);

  FUNC_2(VAR_19, VAR_21);
  break;
 default:
  VAR_25 = -VAR_2;
 }
 FUNC_0();

 return VAR_25;
}
