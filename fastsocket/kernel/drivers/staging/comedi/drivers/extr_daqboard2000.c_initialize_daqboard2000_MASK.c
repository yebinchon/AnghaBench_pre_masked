
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ plx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (struct comedi_device*,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_4,
       unsigned char *VAR_5, int VAR_6)
{
 int VAR_7 = -VAR_2;

 int VAR_8;
 int VAR_9;
 int VAR_10;


 VAR_8 = FUNC_6(VAR_3->plx + 0x6c);
 if (!(VAR_8 & VAR_1)) {



  return -VAR_2;
 }

 for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {




  FUNC_3(VAR_4);
  FUNC_2(VAR_4);
  FUNC_1(VAR_4);
  if (FUNC_0(VAR_4, VAR_0)) {
   for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
    if (VAR_5[VAR_10] == 0xff
        && VAR_5[VAR_10 + 1] == 0x20) {



     break;
    }
   }
   for (; VAR_10 < VAR_6; VAR_10 += 2) {
    int VAR_11 =
        (VAR_5[VAR_10] << 8) + VAR_5[VAR_10 + 1];
    if (!FUNC_4(VAR_4, VAR_11)) {
     break;
    }
   }
   if (VAR_10 >= VAR_6) {



    FUNC_3(VAR_4);
    FUNC_2(VAR_4);
    VAR_7 = 0;
    break;
   }
  }
 }
 return VAR_7;
}
