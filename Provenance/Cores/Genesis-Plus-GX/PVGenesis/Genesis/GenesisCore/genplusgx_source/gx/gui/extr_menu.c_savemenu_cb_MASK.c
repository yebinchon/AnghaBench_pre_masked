
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int height; int width; } ;
typedef TYPE_1__ gx_texture ;
struct TYPE_13__ {int h; scalar_t__ y; scalar_t__ x; scalar_t__ w; } ;
struct TYPE_12__ {int s_default; } ;
struct TYPE_11__ {int day; int month; int year; int hour; int min; scalar_t__ valid; } ;
struct TYPE_10__ {scalar_t__ crc; int * sram; scalar_t__ on; } ;
typedef int GXColor ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (char*,int,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (char*,int,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int VAR_1 ;
 TYPE_8__* VAR_2 ;
 TYPE_7__ VAR_3 ;
 scalar_t__ FUNC_3 (int ,int *,int) ;
 int FUNC_4 (TYPE_1__*,int,scalar_t__,int ,int,int) ;
 int FUNC_5 (TYPE_1__**) ;
 TYPE_1__* FUNC_6 (int ,int ) ;
 TYPE_3__* VAR_4 ;
 int FUNC_7 (char*,char*,int,...) ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static void FUNC_8(void)
{
  int VAR_6;
  char VAR_7[16];
  gx_texture *VAR_8 = FUNC_6(VAR_1,0);

  if (VAR_5.on)
  {
    FUNC_1("Backup Memory",16,VAR_2[0].x+16,VAR_2[0].y+(VAR_2[0].h-16)/2+16,VAR_2[0].x+VAR_2[0].w,(GXColor)VAR_0);
    if (VAR_4[0].valid)
    {
      FUNC_7(VAR_7,"%d/%02d/%02d",VAR_4[0].day,VAR_4[0].month,VAR_4[0].year);
      FUNC_0(VAR_7,12,VAR_2[0].x+VAR_2[0].w-16,VAR_2[0].y+(VAR_2[0].h-28)/2+12,(GXColor)VAR_0);
      FUNC_7(VAR_7,"%02d:%02d",VAR_4[0].hour,VAR_4[0].min);
      FUNC_0(VAR_7,12,VAR_2[0].x+VAR_2[0].w-16,VAR_2[0].y+(VAR_2[0].h-28)/2+28,(GXColor)VAR_0);
    }

    if (VAR_5.crc != FUNC_3(0, &VAR_5.sram[0], 0x10000))
      FUNC_4(VAR_8,22,VAR_2[0].y+(VAR_2[0].h-VAR_8->height)/2,VAR_8->width,VAR_8->height,255);
  }
  else
  {
    FUNC_2("Backup Memory disabled",16,VAR_2[0].x,VAR_2[0].x+VAR_2[0].w,VAR_2[0].y+(VAR_2[0].h-16)/2+16,(GXColor)VAR_0);
  }

  for (VAR_6=1; VAR_6<5; VAR_6++)
  {
    if (VAR_4[VAR_6].valid)
    {
      FUNC_7(VAR_7,"Slot %d",VAR_6);
      FUNC_1(VAR_7,16,VAR_2[VAR_6].x+16,VAR_2[VAR_6].y+(VAR_2[VAR_6].h-16)/2+16,VAR_2[VAR_6].x+VAR_2[VAR_6].w,(GXColor)VAR_0);
      FUNC_7(VAR_7,"%d/%02d/%02d",VAR_4[VAR_6].day,VAR_4[VAR_6].month,VAR_4[VAR_6].year);
      FUNC_0(VAR_7,12,VAR_2[VAR_6].x+VAR_2[VAR_6].w-16,VAR_2[VAR_6].y+(VAR_2[VAR_6].h-28)/2+12,(GXColor)VAR_0);
      FUNC_7(VAR_7,"%02d:%02d",VAR_4[VAR_6].hour,VAR_4[VAR_6].min);
      FUNC_0(VAR_7,12,VAR_2[VAR_6].x+VAR_2[VAR_6].w-16,VAR_2[VAR_6].y+(VAR_2[VAR_6].h-28)/2+28,(GXColor)VAR_0);
    }
    else
    {
      FUNC_1("Empty Slot",16,VAR_2[VAR_6].x+16,VAR_2[VAR_6].y+(VAR_2[VAR_6].h-16)/2+16,VAR_2[VAR_6].x+VAR_2[VAR_6].h,(GXColor)VAR_0);
    }

    if (VAR_6 == VAR_3.s_default)
      FUNC_4(VAR_8,22,VAR_2[VAR_6].y+(VAR_2[VAR_6].h-VAR_8->height)/2,VAR_8->width,VAR_8->height,255);
  }
  FUNC_5(&VAR_8);
}
