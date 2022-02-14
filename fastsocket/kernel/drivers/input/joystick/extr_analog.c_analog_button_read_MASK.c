
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct analog_port {unsigned char buttons; unsigned char mask; int gameport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct analog_port *VAR_3, char VAR_4, char VAR_5)
{
 unsigned char VAR_6;
 int VAR_7 = 1, VAR_8 = 0;
 int VAR_9 = FUNC_1(VAR_3->gameport, VAR_1);

 VAR_6 = FUNC_0(VAR_3->gameport);

 if (!VAR_5) {
  VAR_3->buttons = (~VAR_6 >> 4) & 0xf;
  return 0;
 }

 VAR_3->buttons = 0;

 while ((~VAR_6 & 0xf0) && (VAR_8 < 16) && VAR_7) {
  VAR_3->buttons |= 1 << VAR_2[(~VAR_6 >> 4) & 0xf];
  if (!VAR_4) return 0;
  FUNC_3(VAR_0);
  VAR_7 = VAR_9;
  FUNC_2(VAR_3->gameport);
  while (((VAR_6 = FUNC_0(VAR_3->gameport)) & VAR_3->mask) && VAR_7) VAR_7--;
  VAR_8++;
 }

 return -(!VAR_7 || (VAR_8 == 16));
}
