
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {int addr; int data; } ;


 char* VAR_0 ;
 char* FUNC_0 (char*,char const) ;

__attribute__((used)) static void FUNC_1(const char* VAR_1, struct patch* VAR_2)
{
  int VAR_3 = 0, VAR_4;
  char* VAR_5;

  for(; VAR_3 < 8; ++VAR_3)
  {

    if(!(VAR_5 = FUNC_0(VAR_0, VAR_1[VAR_3])))
    {
      VAR_2->addr = -1; VAR_2->data = -1;
      return;
    }
    VAR_4 = (VAR_5 - VAR_0) >> 1;

    switch(VAR_3)
    {
    case 0:

      VAR_2->data |= VAR_4 << 3;
      break;
    case 1:

      VAR_2->data |= VAR_4 >> 2;
      VAR_2->addr |= (VAR_4 & 3) << 14;
      break;
    case 2:

      VAR_2->addr |= VAR_4 << 9;
      break;
    case 3:

      VAR_2->addr |= (VAR_4 & 0xF) << 20 | (VAR_4 >> 4) << 8;
      break;
    case 4:

      VAR_2->data |= (VAR_4 & 1) << 12;
      VAR_2->addr |= (VAR_4 >> 1) << 16;
      break;
    case 5:

      VAR_2->data |= (VAR_4 & 1) << 15 | (VAR_4 >> 1) << 8;
      break;
    case 6:

      VAR_2->data |= (VAR_4 >> 3) << 13;
      VAR_2->addr |= (VAR_4 & 7) << 5;
      break;
    case 7:

      VAR_2->addr |= VAR_4;
      break;
    }

  }
  return;
}
