
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsm {scalar_t__ state; int* ch; int nextstate; } ;





 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int** VAR_7 ;
 struct fsm* VAR_8 ;

void
FUNC_0(void)
{
           struct fsm *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 for (VAR_9 = VAR_8; VAR_9->state>=0; VAR_9++) {
  for (VAR_10=0; VAR_9->ch[VAR_10]; VAR_10++) {
   VAR_12 = VAR_9->nextstate;
   if (VAR_12 >= VAR_6)
    VAR_12 = ~VAR_12;
   switch (VAR_9->ch[VAR_10]) {

   case 128:
    for (VAR_11=0; VAR_11<256; VAR_11++)
     VAR_7[VAR_11][VAR_9->state] = VAR_12;
    continue;
   case 130:
    for (VAR_11=0; VAR_11<=256; VAR_11++)
     if ('a'<=VAR_11&&VAR_11<='z' || 'A'<=VAR_11&&VAR_11<='Z'
       || VAR_11=='_')
      VAR_7[VAR_11][VAR_9->state] = VAR_12;
    continue;
   case 129:
    for (VAR_11='0'; VAR_11<='9'; VAR_11++)
     VAR_7[VAR_11][VAR_9->state] = VAR_12;
    continue;
   default:
    VAR_7[VAR_9->ch[VAR_10]][VAR_9->state] = VAR_12;
   }
  }
 }

 for (VAR_10=0; VAR_10<VAR_2; VAR_10++) {
  for (VAR_11=0; VAR_11<0xFF; VAR_11++)
   if (VAR_11=='?' || VAR_11=='\\') {
    if (VAR_7[VAR_11][VAR_10]>0)
     VAR_7[VAR_11][VAR_10] = ~VAR_7[VAR_11][VAR_10];
    VAR_7[VAR_11][VAR_10] &= ~VAR_3;
   }
  VAR_7[VAR_0][VAR_10] = ~VAR_4;
  if (VAR_7[VAR_1][VAR_10]>=0)
   VAR_7[VAR_1][VAR_10] = ~VAR_5;
 }
}
