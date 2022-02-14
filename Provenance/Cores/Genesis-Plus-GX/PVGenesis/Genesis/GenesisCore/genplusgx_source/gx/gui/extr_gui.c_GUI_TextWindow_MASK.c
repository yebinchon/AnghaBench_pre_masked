
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_16__ {int width; int height; } ;
typedef TYPE_3__ gx_texture ;
struct TYPE_17__ {TYPE_1__** helpers; } ;
typedef TYPE_4__ gui_menu ;
struct TYPE_15__ {int x; int y; int angle; scalar_t__ valid; } ;
struct TYPE_18__ {scalar_t__ keys; TYPE_2__ ir; } ;
struct TYPE_14__ {int* data; } ;
typedef int GXColor ;


 int FUNC_0 (char*,int,int,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (TYPE_3__*,int,int,int,int,int) ;
 int FUNC_6 (TYPE_3__*,int,int,int,int,int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_3__**) ;
 TYPE_3__* FUNC_9 (int ,int ) ;
 TYPE_6__ VAR_5 ;
 int FUNC_10 () ;
 TYPE_3__* VAR_6 ;

void FUNC_11(gui_menu *VAR_7, char *VAR_8, char VAR_9[][64], u8 VAR_10, u8 VAR_11)
{
  int VAR_12, VAR_13 = 0;






  gx_texture *VAR_14 = FUNC_9(VAR_0,0);
  gx_texture *VAR_15 = FUNC_9(VAR_1,0);


  int VAR_16 = (640 - VAR_14->width) /2;
  int VAR_17 = (480 - VAR_14->height)/2;


  int VAR_18 = VAR_17 + VAR_15->height + (VAR_14->height - VAR_15->height - VAR_11*VAR_10) / 2 + VAR_11/2;


  const u8 *VAR_19 = ((void*)0);
  if (VAR_7->helpers[1])
  {
    VAR_19 = VAR_7->helpers[1]->data;
    VAR_7->helpers[1]->data = ((void*)0);
  }


  int VAR_20 = VAR_17 + VAR_14->height;
  while (VAR_20 > 0)
  {

    FUNC_2(VAR_7);


    FUNC_5(VAR_14,VAR_16,VAR_17-VAR_20,VAR_14->width,VAR_14->height,230);
    FUNC_5(VAR_15,VAR_16,VAR_17-VAR_20,VAR_15->width,VAR_15->height,255);


    FUNC_0(VAR_8,20,VAR_16,VAR_16+VAR_14->width,VAR_17+(VAR_15->height-20)/2+20-VAR_20,(GXColor)VAR_4);


    for (VAR_12=0; VAR_12<VAR_10; VAR_12++)
      FUNC_0(VAR_9[VAR_12],VAR_11,VAR_16,VAR_16+VAR_14->width,VAR_18+VAR_12*VAR_11-VAR_20,(GXColor)VAR_4);


    FUNC_7();


    VAR_20 -= 60;
  }


  while (VAR_13 == 0)
  {

    FUNC_2(VAR_7);


    FUNC_5(VAR_14,VAR_16,VAR_17,VAR_14->width,VAR_14->height,230);
    FUNC_5(VAR_15,VAR_16,VAR_17,VAR_15->width,VAR_15->height,255);


    FUNC_0(VAR_8,20,VAR_16,VAR_16+VAR_14->width,VAR_17+(VAR_15->height-20)/2+20,(GXColor)VAR_4);


    for (VAR_12=0; VAR_12<VAR_10; VAR_12++)
    {
      FUNC_0(VAR_9[VAR_12],VAR_11,VAR_16,VAR_16+VAR_14->width,VAR_18+VAR_12*VAR_11,(GXColor)VAR_4);
    }
    FUNC_7();


    if (VAR_5.keys)
      VAR_13 = 1;
  }




  VAR_20 = 0;
  while (VAR_20 < (VAR_17 + VAR_14->height))
  {

    FUNC_2(VAR_7);


    FUNC_5(VAR_14,VAR_16,VAR_17-VAR_20,VAR_14->width,VAR_14->height,230);
    FUNC_5(VAR_15,VAR_16,VAR_17-VAR_20,VAR_15->width,VAR_15->height,255);


    FUNC_0(VAR_8,20,VAR_16,VAR_16+VAR_14->width,VAR_17+(VAR_15->height-20)/2+20-VAR_20,(GXColor)VAR_4);


    for (VAR_12=0; VAR_12<VAR_10; VAR_12++)
      FUNC_0(VAR_9[VAR_12],VAR_11,VAR_16,VAR_16+VAR_14->width,VAR_18+VAR_12*VAR_11-VAR_20,(GXColor)VAR_4);


    FUNC_7();


    VAR_20 += 60;
  }


  if (VAR_7->helpers[1])
    VAR_7->helpers[1]->data = VAR_19;


  FUNC_2(VAR_7);
  FUNC_7();


  FUNC_8(&VAR_14);
  FUNC_8(&VAR_15);
}
