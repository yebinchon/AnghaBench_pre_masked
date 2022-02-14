
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
struct TYPE_6__ {int* dev; int** analog; scalar_t__* pad; } ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
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
 size_t VAR_36 ;
 size_t VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (int*,int*) ;
 int VAR_41 ;
 int VAR_42 ;
 TYPE_4__ VAR_43 ;
 TYPE_3__ VAR_44 ;
 TYPE_2__ VAR_45 ;
 size_t VAR_46 ;
 int VAR_47 ;

int FUNC_3(void)
{
  uint8 *VAR_48 = FUNC_0(((void*)0));


  VAR_45.pad[VAR_46] = 0;

  switch (VAR_45.dev[VAR_46])
  {
    case 134:
    {

      int VAR_49,VAR_50;
      int VAR_51 = FUNC_1(&VAR_49,&VAR_50);


      VAR_45.analog[VAR_46][0] = VAR_49 - (VAR_42-VAR_43.viewport.w)/2;


      VAR_45.analog[VAR_46][1] = VAR_50 - (VAR_41-VAR_43.viewport.h)/2;


      if(VAR_51 & VAR_38) VAR_45.pad[VAR_46] |= VAR_0;
      if(VAR_51 & VAR_40) VAR_45.pad[VAR_46] |= VAR_5;
      if(VAR_51 & VAR_39) VAR_45.pad[VAR_46] |= VAR_6;
      if(VAR_48[VAR_29]) VAR_45.pad[VAR_46] |= VAR_13;
      break;
    }

    case 132:
    {

      int VAR_52;
      int VAR_53 = FUNC_1(&VAR_52, ((void*)0));


      VAR_45.analog[VAR_46][0] = VAR_52 * 256 /VAR_42;


      if(VAR_53 & VAR_38) VAR_45.pad[VAR_46] |= VAR_5;

      break;
    }

    case 130:
    {

      int VAR_54,VAR_55;
      int VAR_56 = FUNC_2(&VAR_54,&VAR_55);


      VAR_45.analog[VAR_46][0] = (unsigned char)(-VAR_54 & 0xFF);
      VAR_45.analog[VAR_46][1] = (unsigned char)(-VAR_55 & 0xFF);


      if(VAR_56 & VAR_38) VAR_45.pad[VAR_46] |= VAR_5;
      if(VAR_56 & VAR_40) VAR_45.pad[VAR_46] |= VAR_6;

      break;
    }

    case 133:
    {

      int VAR_57,VAR_58;
      int VAR_59 = FUNC_2(&VAR_57,&VAR_58);


      VAR_45.analog[VAR_46][0] = VAR_57 * 2;
      VAR_45.analog[VAR_46][1] = VAR_58 * 2;


      if (!VAR_44.invert_mouse)
        VAR_45.analog[VAR_46][1] = 0 - VAR_45.analog[VAR_46][1];


      if(VAR_59 & VAR_38) VAR_45.pad[VAR_46] |= VAR_5;
      if(VAR_59 & VAR_40) VAR_45.pad[VAR_46] |= VAR_6;
      if(VAR_59 & VAR_39) VAR_45.pad[VAR_46] |= VAR_0;
      if(VAR_48[VAR_29]) VAR_45.pad[VAR_46] |= VAR_13;

      break;
    }

    case 128:
    {

      if(VAR_48[VAR_26]) VAR_45.pad[VAR_46] |= VAR_13;
      if(VAR_48[VAR_34]) VAR_45.pad[VAR_46] |= VAR_0;
      if(VAR_48[VAR_28]) VAR_45.pad[VAR_46] |= VAR_6;
      if(VAR_48[VAR_29]) VAR_45.pad[VAR_46] |= VAR_16;
      if(VAR_48[VAR_37]) VAR_45.pad[VAR_46] |= VAR_5;
      if(VAR_48[VAR_36]) VAR_45.pad[VAR_46] |= VAR_15;
      if(VAR_48[VAR_27]) VAR_45.pad[VAR_46] |= VAR_9;
      if(VAR_48[VAR_35]) VAR_45.pad[VAR_46] |= VAR_17;


      if(VAR_48[VAR_25]) VAR_45.analog[VAR_46][1]-=2;
      else if(VAR_48[VAR_18]) VAR_45.analog[VAR_46][1]+=2;
      else VAR_45.analog[VAR_46][1] = 128;
      if(VAR_48[VAR_23]) VAR_45.analog[VAR_46][0]-=2;
      else if(VAR_48[VAR_24]) VAR_45.analog[VAR_46][0]+=2;
      else VAR_45.analog[VAR_46][0] = 128;


      if(VAR_48[VAR_22]) VAR_45.analog[VAR_46+1][0]-=2;
      else if(VAR_48[VAR_19]) VAR_45.analog[VAR_46+1][0]+=2;
      else if(VAR_48[VAR_20]) VAR_45.analog[VAR_46+1][0]-=2;
      else if(VAR_48[VAR_21]) VAR_45.analog[VAR_46+1][0]+=2;
      else VAR_45.analog[VAR_46+1][0] = 128;


      if (VAR_45.analog[VAR_46][0] > 0xFF) VAR_45.analog[VAR_46][0] = 0xFF;
      else if (VAR_45.analog[VAR_46][0] < 0) VAR_45.analog[VAR_46][0] = 0;
      if (VAR_45.analog[VAR_46][1] > 0xFF) VAR_45.analog[VAR_46][1] = 0xFF;
      else if (VAR_45.analog[VAR_46][1] < 0) VAR_45.analog[VAR_46][1] = 0;
      if (VAR_45.analog[VAR_46+1][0] > 0xFF) VAR_45.analog[VAR_46+1][0] = 0xFF;
      else if (VAR_45.analog[VAR_46+1][0] < 0) VAR_45.analog[VAR_46+1][0] = 0;
      if (VAR_45.analog[VAR_46+1][1] > 0xFF) VAR_45.analog[VAR_46+1][1] = 0xFF;
      else if (VAR_45.analog[VAR_46+1][1] < 0) VAR_45.analog[VAR_46+1][1] = 0;

      break;
    }

    case 131:
    {

      int VAR_60,VAR_61;
      int VAR_62 = FUNC_1(&VAR_60,&VAR_61);


      VAR_45.analog[0][0] = 0x3c + (VAR_60 * (0x17c-0x03c+1)) / VAR_42;
      VAR_45.analog[0][1] = 0x1fc + (VAR_61 * (0x2f7-0x1fc+1)) / VAR_41;


      if(VAR_62 & VAR_39) VAR_47 = (VAR_47 + 1) & 7;
      if(VAR_62 & VAR_40) VAR_45.pad[0] |= VAR_11;
      if(VAR_62 & VAR_38) VAR_45.pad[0] |= VAR_10;

      break;
    }

    case 129:
    {

      int VAR_63,VAR_64;
      int VAR_65 = FUNC_1(&VAR_63,&VAR_64);


      VAR_45.analog[0][0] = (VAR_63 * 250) / VAR_42;
      VAR_45.analog[0][1] = (VAR_64 * 250) / VAR_41;


      if(VAR_65 & VAR_40) VAR_45.pad[0] |= VAR_5;

      break;
    }

    case 135:
    {
      if(VAR_48[VAR_30]) VAR_45.pad[VAR_46] |= VAR_1;
      if(VAR_48[VAR_31]) VAR_45.pad[VAR_46] |= VAR_2;
      if(VAR_48[VAR_32]) VAR_45.pad[VAR_46] |= VAR_3;
      if(VAR_48[VAR_33]) VAR_45.pad[VAR_46] |= VAR_4;
    }

    default:
    {
      if(VAR_48[VAR_26]) VAR_45.pad[VAR_46] |= VAR_0;
      if(VAR_48[VAR_34]) VAR_45.pad[VAR_46] |= VAR_5;
      if(VAR_48[VAR_28]) VAR_45.pad[VAR_46] |= VAR_6;
      if(VAR_48[VAR_29]) VAR_45.pad[VAR_46] |= VAR_13;
      if(VAR_48[VAR_37]) VAR_45.pad[VAR_46] |= VAR_15;
      if(VAR_48[VAR_36]) VAR_45.pad[VAR_46] |= VAR_16;
      if(VAR_48[VAR_27]) VAR_45.pad[VAR_46] |= VAR_17;
      if(VAR_48[VAR_35]) VAR_45.pad[VAR_46] |= VAR_9;

      if(VAR_48[VAR_25]) VAR_45.pad[VAR_46] |= VAR_14;
      else
      if(VAR_48[VAR_18]) VAR_45.pad[VAR_46] |= VAR_7;
      if(VAR_48[VAR_23]) VAR_45.pad[VAR_46] |= VAR_8;
      else
      if(VAR_48[VAR_24]) VAR_45.pad[VAR_46] |= VAR_12;

      break;
    }
  }
  return 1;
}
