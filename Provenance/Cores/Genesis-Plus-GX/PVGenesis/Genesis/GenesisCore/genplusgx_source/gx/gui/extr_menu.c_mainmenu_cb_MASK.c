
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int selected; TYPE_1__* items; } ;
typedef TYPE_2__ gui_menu ;
struct TYPE_4__ {int h; scalar_t__ y; scalar_t__ x; } ;
typedef int GXColor ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 () ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(void)
{
  char VAR_4[4];
  gui_menu *VAR_5 = &VAR_3;
  int VAR_6 = FUNC_1();


  if (VAR_6 == VAR_1) FUNC_2(VAR_4,"TM");
  else if (VAR_6 == VAR_0) FUNC_2(VAR_4,"ON");
  else FUNC_2(VAR_4,"OFF");


  if (VAR_5->selected == 6)
  {
    FUNC_0("Action\nReplay", 14, VAR_5->items[6].x, VAR_5->items[6].x + 54, VAR_5->items[6].y + (VAR_5->items[6].h - 28)/2 + 14, (GXColor)VAR_2);
    FUNC_0(VAR_4, 11, VAR_5->items[6].x + 56 + 3, VAR_5->items[6].x + 78 + 2, VAR_5->items[6].y + (VAR_5->items[6].h - 11)/2 + 11, (GXColor)VAR_2);
  }
  else
  {
    FUNC_0("Action\nReplay", 12, VAR_5->items[6].x + 4, VAR_5->items[6].x + 54, VAR_5->items[6].y + (VAR_5->items[6].h - 24)/2 + 12, (GXColor)VAR_2);
    FUNC_0(VAR_4, 10, VAR_5->items[6].x + 56, VAR_5->items[6].x + 78, VAR_5->items[6].y + (VAR_5->items[6].h - 10)/2 + 10, (GXColor)VAR_2);
  }
}
