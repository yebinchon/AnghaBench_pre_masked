
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group_irq {int dummy; } ;
 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 struct group_irq VAR_1 ;
 struct group_irq VAR_2 ;
 int FUNC_1 (struct group_irq*) ;
 struct group_irq VAR_3 ;
 struct group_irq VAR_4 ;
 struct group_irq VAR_5 ;
 struct group_irq VAR_6 ;
 struct group_irq VAR_7 ;
 struct group_irq VAR_8 ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_9)
{
 struct group_irq *VAR_10;

 VAR_10 = ((void*)0);

 FUNC_0(1 << VAR_9, VAR_0);

 switch (VAR_9) {
 case 134:
  VAR_10 = &VAR_3;
  break;

 case 133:
  VAR_10 = &VAR_4;
  break;

 case 128:
  VAR_10 = &VAR_8;
  break;

 case 129:
  VAR_10 = &VAR_5;
  break;

 case 135:
  VAR_10 = &VAR_1;
  break;

 case 130:
  VAR_10 = &VAR_7;
  break;

 case 132:
  VAR_10 = &VAR_2;
  break;

 case 131:
  VAR_10 = &VAR_6;
  break;
 }

 if (VAR_10)
  FUNC_1(VAR_10);
}
