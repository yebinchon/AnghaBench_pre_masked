
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u8 ;
struct TYPE_19__ {int vfilter; scalar_t__ render; int bilinear; scalar_t__ ntsc; scalar_t__ vsync; } ;
struct TYPE_18__ {scalar_t__* system; int ** analog; } ;
struct TYPE_17__ {TYPE_2__* regs; } ;
struct TYPE_16__ {int viTVMode; } ;
struct TYPE_15__ {int changed; int w; int x; int h; int y; } ;
struct TYPE_13__ {int h; } ;
struct TYPE_14__ {TYPE_1__ byte; } ;
struct TYPE_12__ {TYPE_3__ viewport; } ;
typedef int GXTexObj ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ,int,int,int ,int ,int ,int ) ;
 int FUNC_5 (int *,int ,int ,double,double,double,int ,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int) ;
 int VAR_8 ;
 int FUNC_9 (int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_10__ VAR_14 ;
 scalar_t__** VAR_15 ;
 TYPE_9__ VAR_16 ;
 scalar_t__* VAR_17 ;
 int FUNC_15 () ;
 int VAR_18 ;
 int FUNC_16 (scalar_t__,scalar_t__) ;
 int FUNC_17 (scalar_t__,int ,int ) ;
 int FUNC_18 (TYPE_4__*,int ) ;
 int FUNC_19 (int) ;
 TYPE_7__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int* VAR_22 ;
 TYPE_4__* VAR_23 ;
 TYPE_5__ VAR_24 ;
 int VAR_25 ;
 TYPE_4__** VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int * VAR_32 ;

int FUNC_20(void)
{
  if (VAR_29) return VAR_8;

  VAR_29 = VAR_16.vsync && (VAR_18 == VAR_27);


  if (VAR_14.viewport.changed & 1)
  {

    VAR_30 = VAR_14.viewport.w + (2 * VAR_14.viewport.x);
    VAR_28 = VAR_14.viewport.h + (2 * VAR_14.viewport.y);


    if (VAR_16.render && VAR_20)
    {
      VAR_28 = VAR_28 << 1;
    }


    if (VAR_16.ntsc)
    {
      VAR_30 = (VAR_22[12] & 1) ? FUNC_8(VAR_30) : FUNC_9(VAR_30);


      VAR_30 = (VAR_30 >> 2) << 2;
    }


    GXTexObj VAR_33;
    FUNC_4(&VAR_33, VAR_25, VAR_30, VAR_28, VAR_6, VAR_1, VAR_1, VAR_2);


    if (!VAR_16.bilinear)
    {
      FUNC_5(&VAR_33,VAR_3,VAR_4,0.0,10.0,0.0,VAR_2,VAR_2,VAR_0);
    }


    FUNC_7(&VAR_33, VAR_5);


    if (VAR_16.render)
    {
      VAR_23 = VAR_26[VAR_18*3 + 2];
    }
    else
    {
      VAR_23 = VAR_26[VAR_18*3 + VAR_20];
    }


    FUNC_19(VAR_30);


    FUNC_18(VAR_23, VAR_16.vfilter);


    FUNC_10(VAR_23);
  }




  FUNC_0(VAR_25, VAR_11);
  FUNC_6();


  FUNC_15();


  if (VAR_17[0])
  {
    if (VAR_19.system[0] == VAR_10)
    {
      FUNC_17(VAR_17[0], VAR_19.analog[0][0],VAR_19.analog[0][1]);
    }
    else
    {
      FUNC_17(VAR_17[0], VAR_19.analog[4][0],VAR_19.analog[4][1]);
    }
  }


  if (VAR_17[1])
  {
    if (VAR_19.system[1] == VAR_10)
    {
      FUNC_17(VAR_17[1], VAR_19.analog[4][0],VAR_19.analog[4][1]);
    }
    else
    {
      FUNC_17(VAR_17[1], VAR_19.analog[5][0],VAR_19.analog[5][1]);
    }
  }


  if (VAR_15[1][1])
  {

    u8 VAR_34 = VAR_24.regs[0x06 >> 1].byte.h;
    FUNC_16(VAR_15[1][(VAR_34 >> 1) & 1], VAR_15[0][VAR_34 & 1]);
  }


  VAR_31 ^= 1;


  FUNC_2();
  FUNC_1(VAR_32[VAR_31], VAR_7);
  FUNC_3();


  FUNC_13(VAR_32[VAR_31]);
  FUNC_11();

  if (VAR_14.viewport.changed & 1)
  {

    VAR_14.viewport.changed &= ~1;


    FUNC_14();
    if (VAR_23->viTVMode & VAR_12)
    {
      FUNC_14();
    }
    else while (FUNC_12() != VAR_21)
    {
      FUNC_14();
    }


    VAR_13 = 0;
  }

  return VAR_9;
}
