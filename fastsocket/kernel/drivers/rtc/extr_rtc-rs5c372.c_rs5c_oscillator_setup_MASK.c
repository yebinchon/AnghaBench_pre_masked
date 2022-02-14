
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rs5c372 {int type; int* regs; int time24; int client; } ;
typedef int buf ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (size_t) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_1 (int ,int,unsigned char) ;





 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct rs5c372 *VAR_6)
{
 unsigned char VAR_7[2];
 int VAR_8, VAR_9, VAR_10 = 0;

 if (VAR_6->type == 132) {
  if (!(VAR_6->regs[VAR_4] & VAR_0))
   return VAR_10;
  VAR_6->regs[VAR_4] &= ~VAR_0;
 } else {
  if (!(VAR_6->regs[VAR_4] & VAR_2))
   return VAR_10;
  VAR_6->regs[VAR_4] &= ~VAR_2;
 }

 VAR_8 = FUNC_0(VAR_3);
 VAR_7[0] = VAR_6->regs[VAR_3];
 VAR_7[1] = VAR_6->regs[VAR_4];


 switch (VAR_6->type) {
 case 131:
 case 130:
  VAR_7[1] |= VAR_1;
  VAR_6->time24 = 1;
  break;
 case 132:
 case 129:
 case 128:
  VAR_7[0] |= VAR_5;
  VAR_6->time24 = 1;
  break;
 default:

  break;
 }

 for (VAR_9 = 0; VAR_9 < sizeof(VAR_7); VAR_9++) {
  VAR_8 = FUNC_0(VAR_3 + VAR_9);
  VAR_10 = FUNC_1(VAR_6->client, VAR_8, VAR_7[VAR_9]);
  if (FUNC_2(VAR_10 < 0))
   return VAR_10;
 }

 VAR_6->regs[VAR_3] = VAR_7[0];
 VAR_6->regs[VAR_4] = VAR_7[1];

 return 0;
}
