
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int width; int height; struct TYPE_7__* data; } ;
typedef TYPE_1__ gx_texture ;
struct TYPE_8__ {int keys; } ;
typedef int GXColor ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int,int ,int *,int ,int,int,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int,int ,int,int,int ) ;
 int FUNC_4 () ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int,int,int,int,int) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_1__**) ;
 TYPE_1__* FUNC_10 (int ,int ) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 TYPE_2__ VAR_14 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;

void FUNC_13 ()
{
  int VAR_15 = 2000;
  int VAR_16 = 0;




  gx_texture *VAR_17 = FUNC_10(VAR_5,0);

  gx_texture *VAR_18 = FUNC_10(VAR_4,0);

  FUNC_6((GXColor)VAR_0);
  FUNC_11(56);
  FUNC_7(VAR_18, (640-VAR_18->width)/2, 480-24-VAR_18->height, VAR_18->width, VAR_18->height,255);
  FUNC_8();
  FUNC_12(1);

  while (!VAR_14.keys && VAR_15)
  {
    FUNC_6((GXColor)VAR_0);
    FUNC_11(56);
    if (VAR_15%25 == 0) VAR_16^=1;
    if (VAR_16)
    {
      FUNC_3("Press    button to continue.",24,0,640,366,(GXColor)VAR_7);
      FUNC_7(VAR_17, 220, 366-24+(24-VAR_17->height)/2, VAR_17->width, VAR_17->height,255);
    }
    FUNC_7(VAR_18, (640-VAR_18->width)/2, 480-24-VAR_18->height, VAR_18->width, VAR_18->height,255);
    FUNC_8();
    VAR_15--;
  }

  FUNC_9(&VAR_17);
  FUNC_9(&VAR_18);

  if (VAR_15 > 0)
  {
    FUNC_1(0);
    int VAR_19 = FUNC_0();
    FUNC_2(VAR_19,VAR_8,44100,0,(u8 *)VAR_10,VAR_11,200,200,((void*)0));
    FUNC_4();
    FUNC_1(1);
    return;
  }

  FUNC_6((GXColor)VAR_0);
  gx_texture *VAR_20 = FUNC_10(VAR_1,0);
  if (VAR_20)
  {
    FUNC_7(VAR_20, (640-VAR_20->width)/2, (480-VAR_20->height)/2, VAR_20->width, VAR_20->height,255);
    if (VAR_20->data) FUNC_5(VAR_20->data);
    FUNC_5(VAR_20);
  }
  FUNC_8();

  FUNC_12 (1);

  FUNC_6((GXColor)VAR_9);
  VAR_20 = FUNC_10(VAR_2,0);
  if (VAR_20)
  {
    FUNC_7(VAR_20, (640-VAR_20->width)/2, (480-VAR_20->height)/2, VAR_20->width, VAR_20->height,255);
    if (VAR_20->data) FUNC_5(VAR_20->data);
    FUNC_5(VAR_20);
  }
  FUNC_8();

  FUNC_12 (1);

  FUNC_6((GXColor)VAR_0);
  VAR_20 = FUNC_10(VAR_3,0);
  if (VAR_20)
  {
    FUNC_7(VAR_20, (640-VAR_20->width)/2, (480-VAR_20->height)/2, VAR_20->width, VAR_20->height,255);
    if (VAR_20->data) FUNC_5(VAR_20->data);
    FUNC_5(VAR_20);
  }
  FUNC_8();

  FUNC_1(0);
  int VAR_21 = FUNC_0();
  FUNC_2(VAR_21,VAR_8,44100,0,(u8 *)VAR_12,VAR_13,200,200,((void*)0));
  FUNC_12 (2);
  FUNC_1(1);
}
