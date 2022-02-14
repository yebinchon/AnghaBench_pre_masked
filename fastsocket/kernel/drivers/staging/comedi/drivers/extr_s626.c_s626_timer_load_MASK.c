
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct enc_private {int (* SetIntSrc ) (struct comedi_device*,struct enc_private*,int ) ;int (* SetLoadTrig ) (struct comedi_device*,struct enc_private*,int) ;int (* PulseIndex ) (struct comedi_device*,struct enc_private*) ;int (* SetMode ) (struct comedi_device*,struct enc_private*,int,int ) ;} ;
struct comedi_device {int dummy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct comedi_device*,struct enc_private*,int) ;
 int FUNC_1 (struct comedi_device*,struct enc_private*,int) ;
 int FUNC_2 (struct comedi_device*,struct enc_private*,int,int ) ;
 int FUNC_3 (struct comedi_device*,struct enc_private*,int) ;
 int FUNC_4 (struct comedi_device*,struct enc_private*) ;
 int FUNC_5 (struct comedi_device*,struct enc_private*,int) ;
 int FUNC_6 (struct comedi_device*,struct enc_private*,int ) ;

__attribute__((used)) static void FUNC_7(struct comedi_device *VAR_16, struct enc_private *VAR_17,
       int VAR_18)
{
 uint16_t VAR_19 = (VAR_15 << VAR_5) |

     (VAR_12 << VAR_4) |
     (VAR_9 << VAR_3) |
     (VAR_8 << VAR_2) |
     (VAR_10 << VAR_2) |
     (VAR_7 << VAR_1) |
     (VAR_6 << VAR_0);
 uint16_t VAR_20 = VAR_14;


 VAR_17->SetMode(VAR_16, VAR_17, VAR_19, VAR_11);


 FUNC_0(VAR_16, VAR_17, VAR_18);



 VAR_17->SetLoadTrig(VAR_16, VAR_17, 0);
 VAR_17->PulseIndex(VAR_16, VAR_17);


 VAR_17->SetLoadTrig(VAR_16, VAR_17, 1);


 VAR_17->SetIntSrc(VAR_16, VAR_17, VAR_13);

 FUNC_1(VAR_16, VAR_17, VAR_20);

}
