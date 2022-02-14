
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int s526_ai_config; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_7, struct comedi_subdevice *VAR_8,
    struct comedi_insn *VAR_9, unsigned int *VAR_10)
{
 int VAR_11, VAR_12;
 int VAR_13 = FUNC_1(VAR_9->chanspec);
 unsigned short VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;



 VAR_14 = (VAR_6->s526_ai_config & 0x8000) |
     ((1 << 5) << VAR_13) | (VAR_13 << 1) | 0x0001;


 for (VAR_11 = 0; VAR_11 < VAR_9->n; VAR_11++) {

  FUNC_3(VAR_14, FUNC_0(VAR_2));





  for (VAR_12 = 0; VAR_12 < 100; VAR_12++) {
   VAR_16 = FUNC_2(FUNC_0(VAR_4));
   if (VAR_16 & VAR_1) {
    FUNC_3(VAR_1, FUNC_0(VAR_4));
    break;
   }
  }
  if (VAR_12 == 100) {


   FUNC_4("s526: ADC(0x%04x) timeout\n",
          FUNC_2(FUNC_0(VAR_4)));
   return -VAR_0;
  }


  VAR_15 = FUNC_2(FUNC_0(VAR_3));



  VAR_10[VAR_11] = VAR_15 ^ 0x8000;
 }


 return VAR_11;
}
