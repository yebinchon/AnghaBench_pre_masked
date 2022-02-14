
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mask; int match; scalar_t__* cycles; int opcode_handler; } ;
typedef TYPE_1__ opcode_handler_struct ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__** VAR_3 ;
 int * VAR_4 ;

void FUNC_0(void)
{
 opcode_handler_struct *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 for(VAR_7 = 0; VAR_7 < 0x10000; VAR_7++)
 {

  VAR_4[VAR_7] = VAR_1;
  for(VAR_9=0;VAR_9<VAR_0;VAR_9++)
   VAR_3[VAR_9][VAR_7] = 0;
 }

 VAR_5 = VAR_2;
 while(VAR_5->mask != 0xff00)
 {
  for(VAR_7 = 0;VAR_7 < 0x10000;VAR_7++)
  {
   if((VAR_7 & VAR_5->mask) == VAR_5->match)
   {
    VAR_4[VAR_7] = VAR_5->opcode_handler;
    for(VAR_9=0;VAR_9<VAR_0;VAR_9++)
     VAR_3[VAR_9][VAR_7] = VAR_5->cycles[VAR_9];
   }
  }
  VAR_5++;
 }
 while(VAR_5->mask == 0xff00)
 {
  for(VAR_7 = 0;VAR_7 <= 0xff;VAR_7++)
  {
   VAR_4[VAR_5->match | VAR_7] = VAR_5->opcode_handler;
   for(VAR_9=0;VAR_9<VAR_0;VAR_9++)
    VAR_3[VAR_9][VAR_5->match | VAR_7] = VAR_5->cycles[VAR_9];
  }
  VAR_5++;
 }
 while(VAR_5->mask == 0xf1f8)
 {
  for(VAR_7 = 0;VAR_7 < 8;VAR_7++)
  {
   for(VAR_8 = 0;VAR_8 < 8;VAR_8++)
   {
    VAR_6 = VAR_5->match | (VAR_7 << 9) | VAR_8;
    VAR_4[VAR_6] = VAR_5->opcode_handler;
    for(VAR_9=0;VAR_9<VAR_0;VAR_9++)
     VAR_3[VAR_9][VAR_6] = VAR_5->cycles[VAR_9];
   }
  }
  VAR_5++;
 }
 while(VAR_5->mask == 0xfff0)
 {
  for(VAR_7 = 0;VAR_7 <= 0x0f;VAR_7++)
  {
   VAR_4[VAR_5->match | VAR_7] = VAR_5->opcode_handler;
   for(VAR_9=0;VAR_9<VAR_0;VAR_9++)
    VAR_3[VAR_9][VAR_5->match | VAR_7] = VAR_5->cycles[VAR_9];
  }
  VAR_5++;
 }
 while(VAR_5->mask == 0xf1ff)
 {
  for(VAR_7 = 0;VAR_7 <= 0x07;VAR_7++)
  {
   VAR_4[VAR_5->match | (VAR_7 << 9)] = VAR_5->opcode_handler;
   for(VAR_9=0;VAR_9<VAR_0;VAR_9++)
    VAR_3[VAR_9][VAR_5->match | (VAR_7 << 9)] = VAR_5->cycles[VAR_9];
  }
  VAR_5++;
 }
 while(VAR_5->mask == 0xfff8)
 {
  for(VAR_7 = 0;VAR_7 <= 0x07;VAR_7++)
  {
   VAR_4[VAR_5->match | VAR_7] = VAR_5->opcode_handler;
   for(VAR_9=0;VAR_9<VAR_0;VAR_9++)
    VAR_3[VAR_9][VAR_5->match | VAR_7] = VAR_5->cycles[VAR_9];
  }
  VAR_5++;
 }
 while(VAR_5->mask == 0xffff)
 {
  VAR_4[VAR_5->match] = VAR_5->opcode_handler;
  for(VAR_9=0;VAR_9<VAR_0;VAR_9++)
   VAR_3[VAR_9][VAR_5->match] = VAR_5->cycles[VAR_9];
  VAR_5++;
 }
}
