
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__** helpers; } ;
struct TYPE_8__ {int height; scalar_t__ width; } ;
struct TYPE_7__ {TYPE_3__* throbber; TYPE_3__* buttonA; TYPE_3__* top; TYPE_3__* window; TYPE_5__* parent; scalar_t__ msg; scalar_t__ title; scalar_t__ refresh; } ;
struct TYPE_6__ {int data; } ;
typedef int GXColor ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int,int,scalar_t__,int,int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int,int,scalar_t__,int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_3__**) ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;

void FUNC_7(void)
{
  if (VAR_5.refresh)
  {

    VAR_5.refresh = VAR_0;
    FUNC_2(VAR_6, ((void*)0));


    int VAR_7 = 166;
    int VAR_8 = 160;
    int VAR_9 = 248;


    int VAR_10 = 0;
    while (VAR_10 < (VAR_8 + VAR_5.window->height))
    {

      if (VAR_5.parent)
      {
        FUNC_1(VAR_5.parent);
      }
      else
      {
        FUNC_3(VAR_4);
      }


      FUNC_4(VAR_5.window,VAR_7,VAR_8-VAR_10,VAR_5.window->width,VAR_5.window->height,230);
      FUNC_4(VAR_5.top,VAR_7,VAR_8-VAR_10,VAR_5.top->width,VAR_5.top->height,255);


      if (VAR_5.title)
        FUNC_0(VAR_5.title,20,VAR_7,VAR_7+VAR_5.window->width,VAR_8+(VAR_5.top->height-20)/2+20-VAR_10,(GXColor)VAR_3);


      if (VAR_5.msg)
        FUNC_0(VAR_5.msg,18,VAR_7,VAR_7+VAR_5.window->width,VAR_9-VAR_10,(GXColor)VAR_3);


      FUNC_5();


      VAR_10 += 60;
    }

    if (VAR_5.parent)
    {

      if (VAR_5.parent->helpers[0])
        VAR_5.parent->helpers[0]->data = VAR_2;
      if (VAR_5.parent->helpers[1])
        VAR_5.parent->helpers[1]->data = VAR_1;


      FUNC_1(VAR_5.parent);
    }
    else
    {
      FUNC_3(VAR_4);
    }

    FUNC_5();


    FUNC_6(&VAR_5.window);
    FUNC_6(&VAR_5.top);
    FUNC_6(&VAR_5.buttonA);
    FUNC_6(&VAR_5.throbber);
  }
}
