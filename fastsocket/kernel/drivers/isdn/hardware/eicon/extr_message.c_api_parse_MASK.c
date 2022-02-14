
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t word ;
typedef int byte ;
struct TYPE_3__ {int* info; int length; } ;
typedef TYPE_1__ API_PARSE ;



__attribute__((used)) static word FUNC_0(byte *VAR_0, word VAR_1, byte *VAR_2, API_PARSE *VAR_3)
{
  word VAR_4;
  word VAR_5;

  for(VAR_4=0,VAR_5=0; VAR_2[VAR_4]; VAR_4++) {
    if(VAR_3)
    {
      VAR_3[VAR_4].info = &VAR_0[VAR_5];
    }
    switch(VAR_2[VAR_4]) {
    case 'b':
      VAR_5 +=1;
      break;
    case 'w':
      VAR_5 +=2;
      break;
    case 'd':
      VAR_5 +=4;
      break;
    case 's':
      if(VAR_0[VAR_5]==0xff) {
        VAR_3[VAR_4].info +=2;
        VAR_3[VAR_4].length = VAR_0[VAR_5+1] + (VAR_0[VAR_5+2]<<8);
        VAR_5 +=(VAR_3[VAR_4].length +3);
      }
      else {
        VAR_3[VAR_4].length = VAR_0[VAR_5];
        VAR_5 +=(VAR_3[VAR_4].length +1);
      }
      break;
    }

    if(VAR_5>VAR_1) return 1;
  }
  if(VAR_3) VAR_3[VAR_4].info = ((void*)0);
  return 0;
}
