
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ BADR2; scalar_t__ BADR3; } ;
struct TYPE_3__ {int ai_diff_chans; int ai_se_chans; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned short,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (char*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_4,
          struct comedi_subdevice *VAR_5,
          struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 int VAR_8, VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;
 int VAR_12 = FUNC_0(VAR_6->chanspec);
 unsigned short VAR_13;
 int VAR_14;




 if ((FUNC_1(VAR_2->BADR3 + 2) & 0x20) == 0)
  VAR_14 = VAR_3->ai_diff_chans;
 else
  VAR_14 = VAR_3->ai_se_chans;

 if (VAR_12 > (VAR_14 - 1))
  return -VAR_0;


 VAR_10 = FUNC_1(VAR_2->BADR3 + 5);
 if ((VAR_10 & 0x03) > 0) {
  VAR_10 = VAR_10 & 0xfd;
  FUNC_3(VAR_10, VAR_2->BADR3 + 5);
 }
 FUNC_3(0x01, VAR_2->BADR3 + 6);
 FUNC_3(0x00, VAR_2->BADR3 + 7);


 VAR_13 = VAR_12 | (VAR_12 << 4);
 FUNC_3(VAR_13, VAR_2->BADR3 + 0);


 for (VAR_8 = 0; VAR_8 < VAR_6->n; VAR_8++) {

  FUNC_4(0, VAR_2->BADR2 + 0);





  for (VAR_9 = 0; VAR_9 < 1000; VAR_9++) {
   VAR_11 = FUNC_1(VAR_2->BADR3 + 2) & 0x80;
   if (!VAR_11)
    break;
  }
  if (VAR_9 == 1000) {
   FUNC_5("timeout\n");
   return -VAR_0;
  }

  VAR_10 = FUNC_2(VAR_2->BADR2 + 0);




  VAR_7[VAR_8] = VAR_10;
 }


 return VAR_8;
}
