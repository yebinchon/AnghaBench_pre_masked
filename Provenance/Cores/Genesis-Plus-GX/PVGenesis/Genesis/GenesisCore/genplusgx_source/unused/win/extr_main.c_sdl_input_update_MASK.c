
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_5__ {int w; int h; } ;
struct TYPE_8__ {TYPE_1__ viewport; } ;
struct TYPE_7__ {int invert_mouse; } ;
struct TYPE_6__ {int* dev; int** analog; int * pad; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (int*,int*) ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 TYPE_4__ VAR_42 ;
 TYPE_3__ VAR_43 ;
 int FUNC_3 (int *) ;
 TYPE_2__ VAR_44 ;
 size_t VAR_45 ;
 int VAR_46 ;
 scalar_t__ VAR_47 ;

int FUNC_4(void)
{
  uint8 *VAR_48 = FUNC_0(((void*)0));


  VAR_44.pad[VAR_45] = 0;

  switch (VAR_44.dev[VAR_45])
  {
    case 132:
    {

      int VAR_49,VAR_50;
      int VAR_51 = FUNC_1(&VAR_49,&VAR_50);


      VAR_44.analog[VAR_45][0] = (VAR_49 * VAR_42.viewport.w) / VAR_41;
      VAR_44.analog[VAR_45][1] = (VAR_50 * VAR_42.viewport.h) / VAR_40;


      if(VAR_51 & VAR_36) VAR_44.pad[VAR_45] |= VAR_5;
      if(VAR_51 & VAR_38) VAR_44.pad[VAR_45] |= VAR_6;
      if(VAR_51 & VAR_37) VAR_44.pad[VAR_45] |= VAR_0;
      if(VAR_48[VAR_27]) VAR_44.pad[VAR_45] |= VAR_11;

      break;
    }

    case 130:
    {

      int VAR_52;
      int VAR_53 = FUNC_1(&VAR_52, ((void*)0));


      VAR_44.analog[VAR_45][0] = VAR_52 * 256 /VAR_41;


      if(VAR_53 & VAR_36) VAR_44.pad[VAR_45] |= VAR_5;

      break;
    }

    case 129:
    {

      int VAR_54,VAR_55;
      int VAR_56 = FUNC_2(&VAR_54,&VAR_55);


      VAR_44.analog[VAR_45][0] = (unsigned char)(-VAR_54 & 0xFF);
      VAR_44.analog[VAR_45][1] = (unsigned char)(-VAR_55 & 0xFF);


      if(VAR_56 & VAR_36) VAR_44.pad[VAR_45] |= VAR_5;
      if(VAR_56 & VAR_38) VAR_44.pad[VAR_45] |= VAR_6;

      break;
    }

    case 131:
    {

      int VAR_57,VAR_58;
      int VAR_59 = FUNC_2(&VAR_57,&VAR_58);


      VAR_44.analog[VAR_45][0] = VAR_57 * 2;
      VAR_44.analog[VAR_45][1] = VAR_58 * 2;


      if (!VAR_43.invert_mouse)
        VAR_44.analog[VAR_45][1] = 0 - VAR_44.analog[VAR_45][1];


      if(VAR_59 & VAR_36) VAR_44.pad[VAR_45] |= VAR_5;
      if(VAR_59 & VAR_38) VAR_44.pad[VAR_45] |= VAR_6;
      if(VAR_59 & VAR_37) VAR_44.pad[VAR_45] |= VAR_0;
      if(VAR_48[VAR_27]) VAR_44.pad[VAR_45] |= VAR_11;

      break;
    }

    case 128:
    {

      if(VAR_48[VAR_24]) VAR_44.pad[VAR_45] |= VAR_11;
      if(VAR_48[VAR_32]) VAR_44.pad[VAR_45] |= VAR_0;
      if(VAR_48[VAR_26]) VAR_44.pad[VAR_45] |= VAR_6;
      if(VAR_48[VAR_27]) VAR_44.pad[VAR_45] |= VAR_14;
      if(VAR_48[VAR_35]) VAR_44.pad[VAR_45] |= VAR_5;
      if(VAR_48[VAR_34]) VAR_44.pad[VAR_45] |= VAR_13;
      if(VAR_48[VAR_25]) VAR_44.pad[VAR_45] |= VAR_9;
      if(VAR_48[VAR_33]) VAR_44.pad[VAR_45] |= VAR_15;


      if(VAR_48[VAR_23]) VAR_44.analog[VAR_45][1]-=2;
      else if(VAR_48[VAR_16]) VAR_44.analog[VAR_45][1]+=2;
      else VAR_44.analog[VAR_45][1] = 128;
      if(VAR_48[VAR_21]) VAR_44.analog[VAR_45][0]-=2;
      else if(VAR_48[VAR_22]) VAR_44.analog[VAR_45][0]+=2;
      else VAR_44.analog[VAR_45][0] = 128;


      if(VAR_48[VAR_20]) VAR_44.analog[VAR_45+1][0]-=2;
      else if(VAR_48[VAR_17]) VAR_44.analog[VAR_45+1][0]+=2;
      else if(VAR_48[VAR_18]) VAR_44.analog[VAR_45+1][0]-=2;
      else if(VAR_48[VAR_19]) VAR_44.analog[VAR_45+1][0]+=2;
      else VAR_44.analog[VAR_45+1][0] = 128;


      if (VAR_44.analog[VAR_45][0] > 0xFF) VAR_44.analog[VAR_45][0] = 0xFF;
      else if (VAR_44.analog[VAR_45][0] < 0) VAR_44.analog[VAR_45][0] = 0;
      if (VAR_44.analog[VAR_45][1] > 0xFF) VAR_44.analog[VAR_45][1] = 0xFF;
      else if (VAR_44.analog[VAR_45][1] < 0) VAR_44.analog[VAR_45][1] = 0;
      if (VAR_44.analog[VAR_45+1][0] > 0xFF) VAR_44.analog[VAR_45+1][0] = 0xFF;
      else if (VAR_44.analog[VAR_45+1][0] < 0) VAR_44.analog[VAR_45+1][0] = 0;
      if (VAR_44.analog[VAR_45+1][1] > 0xFF) VAR_44.analog[VAR_45+1][1] = 0xFF;
      else if (VAR_44.analog[VAR_45+1][1] < 0) VAR_44.analog[VAR_45+1][1] = 0;

      break;
    }

    case 133:
    {
      if(VAR_48[VAR_28]) VAR_44.pad[VAR_45] |= VAR_1;
      if(VAR_48[VAR_29]) VAR_44.pad[VAR_45] |= VAR_2;
      if(VAR_48[VAR_30]) VAR_44.pad[VAR_45] |= VAR_3;
      if(VAR_48[VAR_31]) VAR_44.pad[VAR_45] |= VAR_4;
    }

    default:
    {
      if(VAR_48[VAR_24]) VAR_44.pad[VAR_45] |= VAR_0;
      if(VAR_48[VAR_32]) VAR_44.pad[VAR_45] |= VAR_5;
      if(VAR_48[VAR_26]) VAR_44.pad[VAR_45] |= VAR_6;
      if(VAR_48[VAR_27]) VAR_44.pad[VAR_45] |= VAR_11;
      if(VAR_48[VAR_35]) VAR_44.pad[VAR_45] |= VAR_13;
      if(VAR_48[VAR_34]) VAR_44.pad[VAR_45] |= VAR_14;
      if(VAR_48[VAR_25]) VAR_44.pad[VAR_45] |= VAR_15;
      if(VAR_48[VAR_33]) VAR_44.pad[VAR_45] |= VAR_9;

      if(VAR_48[VAR_23]) VAR_44.pad[VAR_45] |= VAR_12;
      else
      if(VAR_48[VAR_16]) VAR_44.pad[VAR_45] |= VAR_7;
      if(VAR_48[VAR_21]) VAR_44.pad[VAR_45] |= VAR_8;
      else
      if(VAR_48[VAR_22]) VAR_44.pad[VAR_45] |= VAR_10;

      break;
    }
  }

  if (VAR_47 == VAR_39)
  {

    int VAR_60,VAR_61;
    int VAR_62 = FUNC_1(&VAR_60,&VAR_61);


    VAR_44.analog[0][0] = 0x3c + (VAR_60 * (0x17c-0x03c+1)) / VAR_41;
    VAR_44.analog[0][1] = 0x1fc + (VAR_61 * (0x2f7-0x1fc+1)) / VAR_40;


    if(VAR_62 & VAR_37) VAR_46++;
    if(VAR_62 & VAR_38) VAR_44.pad[VAR_45] |= VAR_5;
    if(VAR_62 & VAR_36) VAR_44.pad[VAR_45] |= VAR_0;
  }

  FUNC_3 (VAR_48);
  return 1;
}
