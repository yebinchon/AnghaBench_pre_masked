
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct enc_private {int (* SetEnable ) (struct comedi_device*,struct enc_private*,scalar_t__) ;int (* PulseIndex ) (struct comedi_device*,struct enc_private*) ;int (* SetMode ) (struct comedi_device*,struct enc_private*,scalar_t__,int ) ;} ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int * data; int chanspec; } ;
struct comedi_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (struct comedi_device*,struct enc_private*,int ) ;
 int FUNC_3 (struct comedi_device*,struct enc_private*,scalar_t__) ;
 int VAR_14 ;
 struct enc_private* VAR_15 ;
 int FUNC_4 (struct comedi_device*,struct enc_private*,scalar_t__,int ) ;
 int FUNC_5 (struct comedi_device*,struct enc_private*) ;
 int FUNC_6 (struct comedi_device*,struct enc_private*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_16,
    struct comedi_subdevice *VAR_17,
    struct comedi_insn *VAR_18, unsigned int *VAR_19)
{
 uint16_t VAR_20 = (VAR_13 << VAR_5) |

     (VAR_11 << VAR_4) |
     (VAR_10 << VAR_3) |
     (VAR_9 << VAR_2) |

     (VAR_8 << VAR_1) |
     (VAR_7 << VAR_0);


 uint16_t VAR_21 = VAR_12;
 uint16_t VAR_22 = VAR_6;
 struct enc_private *VAR_23 = &VAR_15[FUNC_0(VAR_18->chanspec)];

 FUNC_1("s626_enc_insn_config: encoder config\n");



 VAR_23->SetMode(VAR_16, VAR_23, VAR_20, VAR_14);
 FUNC_2(VAR_16, VAR_23, *(VAR_18->data));
 VAR_23->PulseIndex(VAR_16, VAR_23);
 FUNC_3(VAR_16, VAR_23, VAR_21);
 VAR_23->SetEnable(VAR_16, VAR_23, (uint16_t) (VAR_22 != 0));

 return VAR_18->n;
}
