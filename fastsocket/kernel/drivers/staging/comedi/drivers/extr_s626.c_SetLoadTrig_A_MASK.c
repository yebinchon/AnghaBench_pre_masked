
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct enc_private {int MyCRA; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct comedi_device*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_2, struct enc_private *VAR_3,
     uint16_t VAR_4)
{
 FUNC_0(VAR_2, VAR_3->MyCRA, (uint16_t) (~VAR_1),
      (uint16_t) (VAR_4 << VAR_0));
}
