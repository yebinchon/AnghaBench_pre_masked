
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct enc_private {int (* SetEnable ) (struct comedi_device*,struct enc_private*,int ) ;int (* ResetCapFlags ) (struct comedi_device*,struct enc_private*) ;int (* SetIntSrc ) (struct comedi_device*,struct enc_private*,int ) ;int (* SetMode ) (struct comedi_device*,struct enc_private*,int,int ) ;} ;
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
 int FUNC_0 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct enc_private* VAR_16 ;
 int FUNC_1 (struct comedi_device*,struct enc_private*,int,int ) ;
 int FUNC_2 (struct comedi_device*,struct enc_private*,int ) ;
 int FUNC_3 (struct comedi_device*,struct enc_private*) ;
 int FUNC_4 (struct comedi_device*,struct enc_private*,int ) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_17)
{
 int VAR_18;
 struct enc_private *VAR_19;
 uint16_t VAR_20 = (VAR_13 << VAR_5) |

     (VAR_12 << VAR_4) |
     (VAR_10 << VAR_3) |
     (VAR_9 << VAR_2) |
     (VAR_11 << VAR_2) |
     (VAR_8 << VAR_1) |
     (VAR_7 << VAR_0);


 for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++) {
  VAR_19 = &VAR_16[VAR_18];
  VAR_19->SetMode(VAR_17, VAR_19, VAR_20, VAR_15);
  VAR_19->SetIntSrc(VAR_17, VAR_19, 0);
  VAR_19->ResetCapFlags(VAR_17, VAR_19);
  VAR_19->SetEnable(VAR_17, VAR_19, VAR_6);
 }
 FUNC_0("CountersInit: counters initialized \n");

}
