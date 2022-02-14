
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct comedi_device*,int ,scalar_t__) ;
 int FUNC_3 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 unsigned int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_9,
        struct comedi_subdevice *VAR_10,
        struct comedi_insn *VAR_11, unsigned int *VAR_12)
{
 uint16_t VAR_13 = FUNC_0(VAR_11->chanspec);
 uint16_t VAR_14 = FUNC_1(VAR_11->chanspec);
 uint16_t VAR_15 = 0;
 uint32_t VAR_16;
 int VAR_17;







 FUNC_3("s626_ai_insn_read: entering\n");




 if (VAR_14 == 0)
  VAR_15 = (VAR_13 << 8) | (VAR_2);
 else
  VAR_15 = (VAR_13 << 8) | (VAR_1);


 FUNC_2(VAR_9, VAR_3, VAR_15);


 FUNC_2(VAR_9, VAR_4, VAR_15);

 for (VAR_17 = 0; VAR_17 < VAR_11->n; VAR_17++) {


  FUNC_7(10);


  VAR_16 = FUNC_4(VAR_7);

  FUNC_5(VAR_7, VAR_16 & ~VAR_0);

  FUNC_5(VAR_7, VAR_16 & ~VAR_0);
  FUNC_5(VAR_7, VAR_16 & ~VAR_0);

  FUNC_5(VAR_7, VAR_16 | VAR_0);






  while (!(FUNC_4(VAR_8) & VAR_5)) ;


  if (VAR_17 != 0)
   VAR_12[VAR_17 - 1] = FUNC_6(FUNC_4(VAR_6));
  FUNC_7(4);
 }



 VAR_16 = FUNC_4(VAR_7);


 FUNC_5(VAR_7, VAR_16 & ~VAR_0);

 FUNC_5(VAR_7, VAR_16 & ~VAR_0);
 FUNC_5(VAR_7, VAR_16 & ~VAR_0);

 FUNC_5(VAR_7, VAR_16 | VAR_0);




 while (!(FUNC_4(VAR_8) & VAR_5)) ;




 if (VAR_17 != 0)
  VAR_12[VAR_17 - 1] = FUNC_6(FUNC_4(VAR_6));

 FUNC_3("s626_ai_insn_read: samples %d, data %d\n", VAR_17, VAR_12[VAR_17 - 1]);

 return VAR_17;
}
