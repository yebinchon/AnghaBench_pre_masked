
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {char* title; int selected; int max_buttons; TYPE_3__** arrows; TYPE_3__* buttons; } ;
typedef TYPE_2__ gui_menu ;
struct TYPE_11__ {int state; int x; int w; int y; int h; } ;
typedef TYPE_3__ gui_butn ;
struct TYPE_9__ {int x; int y; int angle; scalar_t__ valid; } ;
struct TYPE_13__ {TYPE_1__ ir; } ;
struct TYPE_12__ {int width; int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_4__*,int,int,int,int,int ,int) ;
 int FUNC_2 () ;
 TYPE_5__ VAR_2 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 TYPE_4__* VAR_3 ;

void FUNC_6(gui_menu *VAR_4, int VAR_5)
{





  char VAR_6[64];
  FUNC_3(VAR_6,VAR_4->title);

  while (VAR_5 > 0)
  {

    FUNC_3(VAR_4->title,VAR_6+VAR_5);
    VAR_4->title[FUNC_4(VAR_6)-VAR_5-1] = 0;


    FUNC_0(VAR_4);
    FUNC_2();
    FUNC_5(6000);
    VAR_5--;
  }
  FUNC_3(VAR_4->title,VAR_6);
}
