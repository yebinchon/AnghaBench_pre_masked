
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int base; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct onenand_chip *VAR_3, int VAR_4)
{
 switch (VAR_4) {
 case 128:
  FUNC_0(VAR_1, VAR_3->base);
  FUNC_0(VAR_0, VAR_3->base + 2);
  FUNC_0(VAR_2, VAR_3->base + 4);
  break;

 default:

  break;
 }
}
