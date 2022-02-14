
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_3__ {int* dw_MolduleConfiguration; scalar_t__ ui_Address; } ;
struct TYPE_4__ {TYPE_1__ s_BoardInfos; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_2__* VAR_1 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

int FUNC_3(struct comedi_device *VAR_2, unsigned char *VAR_3)
{
 unsigned char VAR_4 = 0;
 int VAR_5 = 0;
 unsigned int VAR_6;

 *VAR_3 = 0;





 if ((VAR_1->s_BoardInfos.
   dw_MolduleConfiguration[0] & 0xFFFF0000UL) ==
  VAR_0
  || (VAR_1->s_BoardInfos.
   dw_MolduleConfiguration[1] & 0xFFFF0000UL) ==
  VAR_0
  || (VAR_1->s_BoardInfos.
   dw_MolduleConfiguration[2] & 0xFFFF0000UL) ==
  VAR_0
  || (VAR_1->s_BoardInfos.
   dw_MolduleConfiguration[3] & 0xFFFF0000UL) ==
  VAR_0) {
  for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {




   if ((VAR_1->s_BoardInfos.
     dw_MolduleConfiguration[VAR_4] &
     0xFFFF0000UL) ==
    VAR_0) {




    FUNC_2(3, VAR_1->s_BoardInfos.
     ui_Address + 16 + (64 * VAR_4));





    FUNC_2(1, VAR_1->s_BoardInfos.
     ui_Address + (64 * VAR_4));





    VAR_6 = FUNC_1(VAR_1->s_BoardInfos.
     ui_Address + 4 + (64 * VAR_4));

    if ((VAR_6 & 0xFF) !=
     ((VAR_6 >> 8) & 0xFF)
     && (VAR_6 & 0xFF) !=
     ((VAR_6 >> 16) & 0xFF)
     && (VAR_6 & 0xFF) !=
     ((VAR_6 >> 24) & 0xFF)) {
     *VAR_3 =
      *VAR_3 | (1 <<
      VAR_4);
    }





    FUNC_2(0, VAR_1->s_BoardInfos.
     ui_Address + 16 + (64 * VAR_4));
   }
  }
 } else {




  FUNC_0("No counter module found\n");
  VAR_5 = -2;
 }

 return VAR_5;
}
