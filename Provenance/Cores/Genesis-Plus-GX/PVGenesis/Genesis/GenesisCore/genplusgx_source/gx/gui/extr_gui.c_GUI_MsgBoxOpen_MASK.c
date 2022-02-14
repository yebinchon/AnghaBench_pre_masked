
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
struct TYPE_7__ {scalar_t__ refresh; TYPE_3__* window; TYPE_3__* top; TYPE_5__* parent; void* throbber; } ;
struct TYPE_6__ {scalar_t__ data; } ;
typedef int GXColor ;


 int FUNC_0 (char*,int,int,scalar_t__,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,void*,TYPE_2__*,int *,int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int,int,scalar_t__,int,int) ;
 int FUNC_6 () ;
 void* FUNC_7 (int ,int ) ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;

void FUNC_8(char *VAR_10, char *VAR_11, bool VAR_12)
{
  if (VAR_4)
    return;


  FUNC_2(VAR_10,VAR_11);


  if (!VAR_8.refresh)
  {

    VAR_8.window = FUNC_7(VAR_0,0);
    VAR_8.top = FUNC_7(VAR_1,0);
    if (VAR_12)
      VAR_8.throbber = FUNC_7(VAR_2,0);


    int VAR_13 = 166;
    int VAR_14 = 160;
    int VAR_15 = 248;


    if (VAR_8.parent)
    {
      if (VAR_8.parent->helpers[0])
        VAR_8.parent->helpers[0]->data = 0;
      if (VAR_8.parent->helpers[1])
        VAR_8.parent->helpers[1]->data = 0;
    }


    int VAR_16 = VAR_14 + VAR_8.window->height;
    while (VAR_16 > 0)
    {

      if (VAR_8.parent)
      {
        FUNC_1(VAR_8.parent);
      }
      else
      {
        FUNC_4(VAR_7);
      }


      FUNC_5(VAR_8.window,VAR_13,VAR_14-VAR_16,VAR_8.window->width,VAR_8.window->height,230);
      FUNC_5(VAR_8.top,VAR_13,VAR_14-VAR_16,VAR_8.top->width,VAR_8.top->height,255);


      if (VAR_10)
        FUNC_0(VAR_10,20,VAR_13,VAR_13+VAR_8.window->width,VAR_14+(VAR_8.top->height-20)/2+20-VAR_16,(GXColor)VAR_6);


      if (VAR_11)
        FUNC_0(VAR_11,18,VAR_13,VAR_13+VAR_8.window->width,VAR_15-VAR_16,(GXColor)VAR_6);


      FUNC_6();


      VAR_16 -= 60;
    }


    VAR_8.refresh = VAR_5;
    FUNC_3 (&VAR_9, (void *)VAR_3, &VAR_8, ((void*)0), 0, 70);
  }
}
