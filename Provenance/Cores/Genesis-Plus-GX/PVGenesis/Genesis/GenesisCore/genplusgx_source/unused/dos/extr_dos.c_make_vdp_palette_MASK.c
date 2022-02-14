
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8 ;
struct TYPE_2__ {void* b; void* g; void* r; } ;


 TYPE_1__** VAR_0 ;

void FUNC_0(void)
{
  uint8 VAR_1[3][8] =
  {
    {0x00, 0x04, 0x08, 0x0C, 0x10, 0x14, 0x18, 0x1C},
    {0x00, 0x08, 0x10, 0x18, 0x20, 0x28, 0x30, 0x38},
    {0x20, 0x24, 0x28, 0x2C, 0x30, 0x34, 0x38, 0x3C},
  };

  int VAR_2;
  for(VAR_2 = 0; VAR_2 < 0x600; VAR_2 += 1)
  {

    int VAR_3 = (VAR_2 >> 6) & 7;
    int VAR_4 = (VAR_2 >> 3) & 7;
    int VAR_5 = (VAR_2 >> 0) & 7;
    int VAR_6 = (VAR_2 >> 9) & 3;

    VAR_0[VAR_6][VAR_2 & 0x1FF].r = VAR_1[VAR_6][VAR_3];
    VAR_0[VAR_6][VAR_2 & 0x1FF].g = VAR_1[VAR_6][VAR_4];
    VAR_0[VAR_6][VAR_2 & 0x1FF].b = VAR_1[VAR_6][VAR_5];
  }
}
