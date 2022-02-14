
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct enc_private {int MyCRB; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,int ,int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_3, struct enc_private *VAR_4,
   uint16_t VAR_5)
{
 FUNC_1("SetEnable_A: SetEnable_A enter 3541\n");
 FUNC_0(VAR_3, VAR_4->MyCRB,
      (uint16_t) (~(VAR_2 | VAR_1)),
      (uint16_t) (VAR_5 << VAR_0));
}
