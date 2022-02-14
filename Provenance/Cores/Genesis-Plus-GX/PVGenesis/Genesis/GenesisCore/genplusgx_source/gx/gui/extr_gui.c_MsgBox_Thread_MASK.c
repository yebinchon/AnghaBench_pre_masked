
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* title; char* msg; double progress; TYPE_3__* buttonA; TYPE_3__* window; TYPE_2__* throbber; TYPE_3__* top; scalar_t__ parent; scalar_t__ refresh; } ;
typedef TYPE_1__ gui_message ;
struct TYPE_7__ {int width; int height; } ;
struct TYPE_6__ {int width; int height; } ;
typedef int GXColor ;


 int FUNC_0 (char*,int,int,int,int,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int,int,int,int,int) ;
 int FUNC_4 (TYPE_2__*,int,int,int,int,double,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

__attribute__((used)) static void *FUNC_7(gui_message *VAR_2)
{
  while (VAR_2->refresh)
  {

    if (VAR_2->parent)
    {
      FUNC_1(VAR_2->parent);
    }
    else
    {
      FUNC_2(VAR_1);
    }


    FUNC_3(VAR_2->window,166,160,VAR_2->window->width,VAR_2->window->height,230);
    FUNC_3(VAR_2->top,166,160,VAR_2->top->width,VAR_2->top->height,255);


    if (VAR_2->title)
      FUNC_0(VAR_2->title,20,166,166+VAR_2->window->width,160+(VAR_2->top->height-20)/2+20,(GXColor)VAR_0);


    if (VAR_2->msg)
      FUNC_0(VAR_2->msg,18,166,166+VAR_2->window->width,248,(GXColor)VAR_0);


    if (VAR_2->throbber)
      FUNC_4(VAR_2->throbber,166+(VAR_2->window->width-VAR_2->throbber->width)/2,160+VAR_2->window->height-VAR_2->throbber->height-20,VAR_2->throbber->width,VAR_2->throbber->height,(VAR_2->progress * 360.0) / 100.0, 255);


    if (VAR_2->buttonA)
    {
      FUNC_0("Press    to continue.",18,166,166+VAR_2->window->width,248+22,(GXColor)VAR_0);
      FUNC_3(VAR_2->buttonA, 166+116, 248+4+(18-VAR_2->buttonA->height)/2,VAR_2->buttonA->width, VAR_2->buttonA->height,255);
    }


    FUNC_5();


    VAR_2->progress++;
    if (VAR_2->progress > 100)
      VAR_2->progress = 0;
    FUNC_6(10);
  }

  return 0;
}
