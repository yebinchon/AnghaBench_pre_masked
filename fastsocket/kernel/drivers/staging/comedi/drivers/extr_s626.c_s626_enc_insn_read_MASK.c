
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enc_private {int dummy; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (char*,unsigned int) ;
 unsigned int FUNC_2 (struct comedi_device*,struct enc_private*) ;
 struct enc_private* VAR_0 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
         struct comedi_subdevice *VAR_2,
         struct comedi_insn *VAR_3, unsigned int *VAR_4)
{

 int VAR_5;
 struct enc_private *VAR_6 = &VAR_0[FUNC_0(VAR_3->chanspec)];

 FUNC_1("s626_enc_insn_read: encoder read channel %d \n",
       FUNC_0(VAR_3->chanspec));

 for (VAR_5 = 0; VAR_5 < VAR_3->n; VAR_5++)
  VAR_4[VAR_5] = FUNC_2(VAR_1, VAR_6);

 FUNC_1("s626_enc_insn_read: encoder sample %d\n", VAR_4[VAR_5]);

 return VAR_5;
}
