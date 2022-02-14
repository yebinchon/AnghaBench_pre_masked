
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct enc_private {int MyCRB; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (struct comedi_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_2, struct enc_private *VAR_3)
{
 register uint16_t VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3->MyCRB) & ~VAR_1;
 FUNC_1(VAR_2, VAR_3->MyCRB, (uint16_t) (VAR_4 ^ VAR_0));
 FUNC_1(VAR_2, VAR_3->MyCRB, VAR_4);
}
