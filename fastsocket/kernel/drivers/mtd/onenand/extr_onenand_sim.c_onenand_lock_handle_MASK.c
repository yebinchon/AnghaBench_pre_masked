
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int options; } ;






 int FUNC_0 (struct onenand_chip*) ;
 int VAR_0 ;
 int FUNC_1 (int,struct onenand_chip*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct onenand_chip *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4);
 VAR_6 = !(VAR_4->options & VAR_0);

 switch (VAR_5) {
 case 129:
 case 128:
  if (VAR_6)
   FUNC_1(VAR_3, VAR_4);
  else
   FUNC_1(VAR_7 | VAR_3, VAR_4);
  break;

 case 131:
  if (VAR_6)
   FUNC_1(VAR_1, VAR_4);
  else
   FUNC_1(VAR_7 | VAR_1, VAR_4);
  break;

 case 130:
  if (VAR_6)
   FUNC_1(VAR_2, VAR_4);
  else
   FUNC_1(VAR_7 | VAR_2, VAR_4);
  break;

 default:
  break;
 }
}
