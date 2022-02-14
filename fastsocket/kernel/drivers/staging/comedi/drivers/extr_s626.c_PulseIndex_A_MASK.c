
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct enc_private {int MyCRA; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (struct comedi_device*,int ,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_1, struct enc_private *VAR_2)
{
 register uint16_t VAR_3;

 FUNC_2("PulseIndex_A: pulse index enter\n");

 VAR_3 = FUNC_0(VAR_1, VAR_2->MyCRA);
 FUNC_1(VAR_1, VAR_2->MyCRA, (uint16_t) (VAR_3 ^ VAR_0));
 FUNC_2("PulseIndex_A: pulse index step1\n");
 FUNC_1(VAR_1, VAR_2->MyCRA, VAR_3);
}
