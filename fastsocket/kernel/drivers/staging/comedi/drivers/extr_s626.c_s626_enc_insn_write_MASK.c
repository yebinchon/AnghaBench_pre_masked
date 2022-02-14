
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enc_private {int (* SetLoadTrig ) (struct comedi_device*,struct enc_private*,int) ;int (* PulseIndex ) (struct comedi_device*,struct enc_private*) ;} ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {int dummy; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct comedi_device*,struct enc_private*,unsigned int) ;
 struct enc_private* VAR_0 ;
 int FUNC_3 (struct comedi_device*,struct enc_private*,int) ;
 int FUNC_4 (struct comedi_device*,struct enc_private*) ;
 int FUNC_5 (struct comedi_device*,struct enc_private*,int) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_1,
          struct comedi_subdevice *VAR_2,
          struct comedi_insn *VAR_3, unsigned int *VAR_4)
{

 struct enc_private *VAR_5 = &VAR_0[FUNC_0(VAR_3->chanspec)];

 FUNC_1("s626_enc_insn_write: encoder write channel %d \n",
       FUNC_0(VAR_3->chanspec));


 FUNC_2(VAR_1, VAR_5, VAR_4[0]);



 VAR_5->SetLoadTrig(VAR_1, VAR_5, 0);
 VAR_5->PulseIndex(VAR_1, VAR_5);
 VAR_5->SetLoadTrig(VAR_1, VAR_5, 2);

 FUNC_1("s626_enc_insn_write: End encoder write\n");

 return 1;
}
