
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int n_chan; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
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
 unsigned char VAR_10 ;
 int VAR_11 ;
 int* VAR_12 ;
 void* FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (struct comedi_device*,int ,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_13,
       struct comedi_subdevice *VAR_14,
       struct comedi_insn *VAR_15, unsigned int *VAR_16)
{
 int VAR_17, VAR_18;
 unsigned int VAR_19;
 unsigned char VAR_20;
 unsigned short VAR_21, VAR_22;
 unsigned char VAR_23;
 int VAR_24;



 VAR_23 = FUNC_0(VAR_15->chanspec) & (VAR_14->n_chan - 1);
 VAR_24 = FUNC_1(VAR_15->chanspec);




 FUNC_3(VAR_13, VAR_8, VAR_9);


 FUNC_3(VAR_13, VAR_2, VAR_23);
 FUNC_3(VAR_13, VAR_1, VAR_23);

 FUNC_3(VAR_13, VAR_0, VAR_12[VAR_24]);


 for (VAR_18 = 0; VAR_18 < 40000; VAR_18++) {
  VAR_20 = FUNC_2(VAR_13, VAR_5);
  if ((VAR_20 & VAR_10) == 0)
   break;
 }
 if (VAR_18 == 40000) {
  FUNC_4("timeout\n");
  return -VAR_11;
 }


 for (VAR_17 = 0; VAR_17 < VAR_15->n; VAR_17++) {

  FUNC_3(VAR_13, VAR_7, 0xff);

  for (VAR_18 = 0; VAR_18 < 40000; VAR_18++) {
   VAR_20 = FUNC_2(VAR_13, VAR_6);
   if ((VAR_20 & VAR_10) == 0)
    break;
  }
  if (VAR_18 == 40000) {
   FUNC_4("timeout\n");
   return -VAR_11;
  }


  VAR_22 = FUNC_2(VAR_13, VAR_3);
  VAR_21 = FUNC_2(VAR_13, VAR_4);







  VAR_19 = ((VAR_21 ^ 0x0080) << 8) + VAR_22;

  VAR_16[VAR_17] = VAR_19;
 }


 return VAR_17;
}
