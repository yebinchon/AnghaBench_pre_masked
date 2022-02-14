
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t word ;
typedef char byte ;
struct TYPE_8__ {int * info; scalar_t__ length; } ;
struct TYPE_7__ {char* info; TYPE_1__* parms; } ;
struct TYPE_6__ {char* info; scalar_t__ length; } ;
typedef TYPE_2__ API_SAVE ;
typedef TYPE_3__ API_PARSE ;



__attribute__((used)) static void FUNC_0(API_PARSE *VAR_0, byte *VAR_1, API_SAVE *VAR_2)
{
  word VAR_3, VAR_4, VAR_5 = 0;
  byte *VAR_6;

  VAR_6 = VAR_2->info;
  for (VAR_3 = 0; VAR_1[VAR_3] != '\0'; VAR_3++)
  {
    VAR_2->parms[VAR_3].info = VAR_6;
    VAR_2->parms[VAR_3].length = VAR_0[VAR_3].length;
    switch (VAR_1[VAR_3])
    {
    case 'b':
      VAR_5 = 1;
      break;
    case 'w':
      VAR_5 = 2;
      break;
    case 'd':
      VAR_5 = 4;
      break;
    case 's':
      VAR_5 = VAR_0[VAR_3].length + 1;
      break;
    }
    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
      *(VAR_6++) = VAR_0[VAR_3].info[VAR_4];
  }
  VAR_2->parms[VAR_3].info = ((void*)0);
  VAR_2->parms[VAR_3].length = 0;
}
