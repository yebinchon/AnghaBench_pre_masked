
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
typedef int gfx_t ;
struct TYPE_3__ {int* lut_offset; int*** lut_prio; int* lut_cell; int* lut_pixel; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(void)
{
  int VAR_1, VAR_2;
  uint16 VAR_3;
  uint8 VAR_4, VAR_5, VAR_6, VAR_7;

  FUNC_0(&VAR_0, 0, sizeof(gfx_t));



  for (VAR_1=0; VAR_1<0x4000; VAR_1++)
  {
    VAR_3 = (VAR_1 & 0x07) << 8;
    VAR_3 = VAR_3 | (((VAR_1 >> 8) & 0x3f) << 2);
    VAR_3 = VAR_3 | (((VAR_1 >> 3) & 0x1f) << 11);
    VAR_0.lut_offset[VAR_1] = VAR_3;
  }


  for (VAR_1=0x4000; VAR_1<0x6000; VAR_1++)
  {
    VAR_3 = (VAR_1 & 0x07) << 8;
    VAR_3 = VAR_3 | (((VAR_1 >> 7) & 0x3f) << 2);
    VAR_3 = VAR_3 | (((VAR_1 >> 3) & 0x0f) << 11);
    VAR_0.lut_offset[VAR_1] = VAR_3;
  }


  for (VAR_1=0x6000; VAR_1<0x7000; VAR_1++)
  {
    VAR_3 = (VAR_1 & 0x07) << 8;
    VAR_3 = VAR_3 | (((VAR_1 >> 6) & 0x3f) << 2);
    VAR_3 = VAR_3 | (((VAR_1 >> 3) & 0x07) << 11);
    VAR_0.lut_offset[VAR_1] = VAR_3 | 0x8000;
  }


  for (VAR_1=0x7000; VAR_1<0x7800; VAR_1++)
  {
    VAR_3 = (VAR_1 & 0x07) << 8;
    VAR_3 = VAR_3 | (((VAR_1 >> 5) & 0x3f) << 2);
    VAR_3 = VAR_3 | (((VAR_1 >> 3) & 0x03) << 11);
    VAR_0.lut_offset[VAR_1] = VAR_3 | 0xc000;
  }


  for (VAR_1=0x7800; VAR_1<0x8000; VAR_1++)
  {
    VAR_3 = (VAR_1 & 0x07) << 8;
    VAR_3 = VAR_3 | (((VAR_1 >> 5) & 0x3f) << 2);
    VAR_3 = VAR_3 | (((VAR_1 >> 3) & 0x03) << 11);
    VAR_0.lut_offset[VAR_1] = VAR_3 | 0xe000;
  }


  for (VAR_1=0; VAR_1<0x100; VAR_1++)
  {
    for (VAR_2=0; VAR_2<0x100; VAR_2++)
    {

      VAR_0.lut_prio[0][VAR_1][VAR_2] = VAR_2;

      VAR_0.lut_prio[1][VAR_1][VAR_2] = ((VAR_1 & 0x0f) ? (VAR_1 & 0x0f) : (VAR_2 & 0x0f)) | ((VAR_1 & 0xf0) ? (VAR_1 & 0xf0) : (VAR_2 & 0xf0));

      VAR_0.lut_prio[2][VAR_1][VAR_2] = ((VAR_2 & 0x0f) ? (VAR_2 & 0x0f) : (VAR_1 & 0x0f)) | ((VAR_2 & 0xf0) ? (VAR_2 & 0xf0) : (VAR_1 & 0xf0));

      VAR_0.lut_prio[3][VAR_1][VAR_2] = VAR_1;
    }
  }







  for (VAR_1=0; VAR_1<0x100; VAR_1++)
  {

    VAR_4 = (VAR_1 & 8) ? 3 : 1;
    VAR_5 = (VAR_1 >> 6) & VAR_4;
    VAR_6 = (VAR_1 >> 4) & VAR_4;

    if (VAR_1 & 4) { VAR_6 = VAR_6 ^ VAR_4; }
    if (VAR_1 & 2) { VAR_6 = VAR_6 ^ VAR_4; VAR_5 = VAR_5 ^ VAR_4; }
    if (VAR_1 & 1) { VAR_7 = VAR_6; VAR_6 = VAR_5 ^ VAR_4; VAR_5 = VAR_7; }


    VAR_0.lut_cell[VAR_1] = VAR_5 + VAR_6 * (VAR_4 + 1);
  }






  for (VAR_1=0; VAR_1<0x200; VAR_1++)
  {

    VAR_5 = (VAR_1 >> 6) & 7;
    VAR_6 = (VAR_1 >> 3) & 7;

    if (VAR_1 & 4) { VAR_6 = VAR_6 ^ 7; }
    if (VAR_1 & 2) { VAR_6 = VAR_6 ^ 7; VAR_5 = VAR_5 ^ 7; }
    if (VAR_1 & 1) { VAR_7 = VAR_6; VAR_6 = VAR_5 ^ 7; VAR_5 = VAR_7; }


    VAR_0.lut_pixel[VAR_1] = VAR_6 + VAR_5 * 8;
  }
}
