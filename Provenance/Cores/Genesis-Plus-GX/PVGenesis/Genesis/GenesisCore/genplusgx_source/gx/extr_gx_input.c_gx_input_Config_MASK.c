
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * system; } ;
 int FUNC_0 (char*,char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;
 int * VAR_11 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int,int,int,int) ;

void FUNC_4(u8 VAR_12, u8 VAR_13, u8 VAR_14)
{
  int VAR_15, VAR_16;


  switch (VAR_14)
  {
    case 132:
    case 135:
    case 130:
    {
      VAR_15 = VAR_1;
      VAR_16 = VAR_7;
      FUNC_2(VAR_11[VAR_1],"Button 1");
      FUNC_2(VAR_11[VAR_2],"Button 2");
      FUNC_2(VAR_11[VAR_7],"PAUSE Button");
      break;
    }

    case 128:
    {
      VAR_15 = VAR_0;
      VAR_16 = VAR_6;
      FUNC_2(VAR_11[VAR_0],"Button A");
      FUNC_2(VAR_11[VAR_1],"Button B");
      FUNC_2(VAR_11[VAR_2],"Button C");
      FUNC_2(VAR_11[VAR_7],"START Button");
      FUNC_2(VAR_11[VAR_3],"Button D");
      FUNC_2(VAR_11[VAR_4],"Button E1");
      FUNC_2(VAR_11[VAR_5],"Button E2");
      FUNC_2(VAR_11[VAR_6],"SELECT Button");
      break;
    }

    case 136:
    {
      VAR_15 = VAR_0;
      VAR_16 = VAR_7;
      FUNC_2(VAR_11[VAR_0],"Middle Button");
      FUNC_2(VAR_11[VAR_1],"Left Button");
      FUNC_2(VAR_11[VAR_2],"Right Button");
      FUNC_2(VAR_11[VAR_7],"START Button");
      break;
    }

    case 134:
    {
      VAR_15 = VAR_0;
      VAR_16 = VAR_7;
      FUNC_2(VAR_11[VAR_0],"Button A");
      FUNC_2(VAR_11[VAR_1],"Button B");
      FUNC_2(VAR_11[VAR_2],"Button C");
      FUNC_2(VAR_11[VAR_7],"START Button");
      break;
    }

    case 133:
    {
      VAR_15 = VAR_0;
      VAR_16 = VAR_6;
      FUNC_2(VAR_11[VAR_0],"Button A");
      FUNC_2(VAR_11[VAR_1],"Button B");
      FUNC_2(VAR_11[VAR_2],"Button C");
      FUNC_2(VAR_11[VAR_7],"START Button");
      FUNC_2(VAR_11[VAR_3],"Button X");
      FUNC_2(VAR_11[VAR_4],"Button Y");
      FUNC_2(VAR_11[VAR_5],"Button Z");
      FUNC_2(VAR_11[VAR_6],"MODE Button");
      break;
    }

    case 137:
    {
      VAR_15 = VAR_0;
      VAR_16 = VAR_7;
      if (VAR_10.system[1] == VAR_9)
      {
        FUNC_2(VAR_11[VAR_0],"TRIGGER Button");
        FUNC_2(VAR_11[VAR_1],"Button B");
        FUNC_2(VAR_11[VAR_2],"Button C");
        FUNC_2(VAR_11[VAR_7],"START Button");
      }
      else if (VAR_10.system[1] == VAR_8)
      {
        FUNC_2(VAR_11[VAR_0],"TRIGGER Button");
        FUNC_2(VAR_11[VAR_1],"N.A");
        FUNC_2(VAR_11[VAR_2],"N.A");
        FUNC_2(VAR_11[VAR_7],"START Button");
      }
      else
      {
        FUNC_2(VAR_11[VAR_0],"TRIGGER Button");
        FUNC_2(VAR_11[VAR_1],"N.A");
        FUNC_2(VAR_11[VAR_2],"N.A");
        FUNC_2(VAR_11[VAR_7],"PAUSE Button");
      }
      break;
    }

    case 131:
    {
      VAR_15 = VAR_0;
      VAR_16 = VAR_1;
      FUNC_2(VAR_11[VAR_0],"PEN Button");
      FUNC_2(VAR_11[VAR_1],"RED Button");
      break;
    }

    case 129:
    {
      VAR_15 = VAR_0;
      VAR_16 = VAR_0;
      FUNC_2(VAR_11[VAR_0],"PEN Button");
      break;
    }

    default:
    {
      VAR_15 = VAR_0;
      VAR_16 = VAR_0;
      FUNC_2(VAR_11[VAR_0],"N.A");
      FUNC_0("Info","Activator is not configurable !");
      break;
    }
  }


  switch (VAR_13)
  {
    case 0:
    {
      FUNC_1(VAR_12, VAR_15, VAR_16);
      break;
    }

    default:
    {



      break;
    }
  }
}
