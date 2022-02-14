
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int data1; int data2; int data3; void* type; } ;
typedef TYPE_3__ event_t ;
struct TYPE_8__ {int state; int x; int y; } ;
struct TYPE_7__ {int state; int button; } ;
struct TYPE_10__ {int type; TYPE_2__ xmotion; TYPE_1__ xbutton; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (TYPE_3__*) ;




 int FUNC_1 (int ,TYPE_4__*) ;
 int VAR_6 ;
 TYPE_4__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_2 () ;

void FUNC_3(void)
{

    event_t VAR_19;


    FUNC_1(VAR_6, &VAR_7);
    switch (VAR_7.type)
    {
      case 130:
 VAR_19.type = VAR_12;
 VAR_19.data1 = FUNC_2();
 FUNC_0(&VAR_19);

 break;
      case 129:
 VAR_19.type = VAR_13;
 VAR_19.data1 = FUNC_2();
 FUNC_0(&VAR_19);

 break;
      case 134:
 VAR_19.type = VAR_14;
 VAR_19.data1 =
     (VAR_7.xbutton.state & VAR_1)
     | (VAR_7.xbutton.state & VAR_3 ? 2 : 0)
     | (VAR_7.xbutton.state & VAR_5 ? 4 : 0)
     | (VAR_7.xbutton.button == VAR_0)
     | (VAR_7.xbutton.button == VAR_2 ? 2 : 0)
     | (VAR_7.xbutton.button == VAR_4 ? 4 : 0);
 VAR_19.data2 = VAR_19.data3 = 0;
 FUNC_0(&VAR_19);

 break;
      case 133:
 VAR_19.type = VAR_14;
 VAR_19.data1 =
     (VAR_7.xbutton.state & VAR_1)
     | (VAR_7.xbutton.state & VAR_3 ? 2 : 0)
     | (VAR_7.xbutton.state & VAR_5 ? 4 : 0);

 VAR_19.data1 =
     VAR_19.data1
     ^ (VAR_7.xbutton.button == VAR_0 ? 1 : 0)
     ^ (VAR_7.xbutton.button == VAR_2 ? 2 : 0)
     ^ (VAR_7.xbutton.button == VAR_4 ? 4 : 0);
 VAR_19.data2 = VAR_19.data3 = 0;
 FUNC_0(&VAR_19);

 break;
      case 128:
 VAR_19.type = VAR_14;
 VAR_19.data1 =
     (VAR_7.xmotion.state & VAR_1)
     | (VAR_7.xmotion.state & VAR_3 ? 2 : 0)
     | (VAR_7.xmotion.state & VAR_5 ? 4 : 0);
 VAR_19.data2 = (VAR_7.xmotion.x - VAR_15) << 2;
 VAR_19.data3 = (VAR_16 - VAR_7.xmotion.y) << 2;

 if (VAR_19.data2 || VAR_19.data3)
 {
     VAR_15 = VAR_7.xmotion.x;
     VAR_16 = VAR_7.xmotion.y;
     if (VAR_7.xmotion.x != VAR_10/2 &&
  VAR_7.xmotion.y != VAR_8/2)
     {
  FUNC_0(&VAR_19);

  VAR_17 = 0;
     } else
     {
  VAR_17 = 1;
     }
 }
 break;

      case 131:
      case 132:
 break;

      default:
 if (VAR_11 && VAR_7.type == VAR_9) VAR_18 = 1;
 break;
    }

}
