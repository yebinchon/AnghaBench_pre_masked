
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {scalar_t__ base; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct onenand_chip *VAR_6, int VAR_7)
{
 int VAR_8 = VAR_1;

 switch (VAR_7) {
 case 130:
 case 129:
  VAR_8 |= VAR_2;
  break;

 case 132:
 case 131:
  VAR_8 |= VAR_4;
  break;

 case 133:
  VAR_8 |= VAR_0;
  break;

 case 128:
  VAR_8 |= VAR_3;
  break;

 default:
  break;
 }

 FUNC_0(VAR_8, VAR_6->base + VAR_5);
}
